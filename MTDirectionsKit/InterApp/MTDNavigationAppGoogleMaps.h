//
//  MTDNavigationAppGoogleMaps.h
//  MTDirectionsKit
//
//  Created by Matthias Tretter
//  Copyright (c) 2012 Matthias Tretter (@myell0w). All rights reserved.
//


#import "MTDNavigationApp.h"


@interface MTDNavigationAppGoogleMaps : MTDNavigationApp

+ (BOOL)openWebsiteDirectionsFrom:(MTDWaypoint *)from to:(MTDWaypoint *)to routeType:(MTDDirectionsRouteType)routeType;

@end