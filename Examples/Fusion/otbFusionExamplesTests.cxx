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

// this file defines the otbMultiScaleTest for the test driver
// and all it expects is that you have a function called RegisterTests

#include <iostream>
#include "otbTestMain.h"

void RegisterTests()
{
  REGISTER_TEST(BayesianFusionImageFilterTest);
  REGISTER_TEST(PanSharpeningExampleTest);
}

#undef main
#define main BayesianFusionImageFilterTest
#include "BayesianFusionImageFilter.cxx"

#undef main
#define main PanSharpeningExampleTest
#include "PanSharpeningExample.cxx"