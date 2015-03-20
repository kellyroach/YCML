//
//  YCML.h
//  YCML
//
//  Created by Ioannis (Yannis) Chatzikonstantinou on 2/3/15.
//  Copyright (c) 2015 Ioannis (Yannis) Chatzikonstantinou. All rights reserved.
//
// YCML is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// YCML is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with YCML.  If not, see <http://www.gnu.org/licenses/>.

#import <Cocoa/Cocoa.h>

//! Project version number for YCML.
FOUNDATION_EXPORT double YCMLVersionNumber;

//! Project version string for YCML.
FOUNDATION_EXPORT const unsigned char YCMLVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <YCML/PublicHeader.h>

#import "YCSupervisedModel.h"
#import "YCSupervisedTrainer.h"
#import "YCFFN.h"
#import "YCELMTrainer.h"
#import "YCProblem.h"
#import "YCDerivativeProblem.h"
#import "YCBackPropProblem.h"
#import "YCBackPropTrainer.h"
#import "YCGradientDescent.h"

