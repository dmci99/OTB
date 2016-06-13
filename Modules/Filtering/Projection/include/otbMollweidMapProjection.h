/*=========================================================================

  Program:   ORFEO Toolbox
  Language:  C++
  Date:      $Date$
  Version:   $Revision$


  Copyright (c) Centre National d'Etudes Spatiales. All rights reserved.
  See OTBCopyright.txt for details.


     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notices for more information.

=========================================================================*/
#ifndef otbMollweidMapProjection_h
#define otbMollweidMapProjection_h

#include "otbGenericMapProjection.h"

namespace otb
{
/** \class MollweidMapProjection
 *  \brief This class implements the Mollweid map projection.
 *  It converts coordinates in longitude, latitude (WGS84) to Mollweid map coordinates.
 *
 * \ingroup OTBProjection
 */
template <TransformDirection::TransformationDirection TTransform>
class ITK_EXPORT MollweidMapProjection : public GenericMapProjection<TTransform>
{
public:
  /** Standard class typedefs. */
  typedef MollweidMapProjection             Self;
  typedef GenericMapProjection<TTransform>  Superclass;
  typedef itk::SmartPointer<Self>           Pointer;
  typedef itk::SmartPointer<const Self>     ConstPointer;

  typedef typename Superclass::ScalarType ScalarType;
  typedef itk::Point<ScalarType, 2>       InputPointType;
  typedef itk::Point<ScalarType, 2>       OutputPointType;

  /** Method for creation through the object factory. */
  itkNewMacro(Self);

  /** Run-time type information (and related methods). */
  itkTypeMacro(MollweidMapProjection, GenericMapProjection);
  virtual void SetFalseEasting(double falseEasting);
  virtual void SetFalseNorthing(double falseNorthing);
  virtual double GetFalseNorthing() const;
  virtual double GetFalseEasting() const;
  virtual void SetParameters(double falseEasting, double falseNorthing);
  using Superclass::SetParameters;

protected:
  MollweidMapProjection();
  ~MollweidMapProjection() ITK_OVERRIDE;

private:
  MollweidMapProjection(const Self &); //purposely not implemented
  void operator =(const Self&);          //purposely not implemented

};

} // namespace otb

#ifndef OTB_MANUAL_INSTANTIATION
#include "otbMollweidMapProjection.txx"
#endif

#endif
