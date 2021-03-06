
#import "MapboxPluginKit.h"
#import <Foundation/Foundation.h>
#import <Mapbox/Mapbox.h>


/**
 MBXTrafficPlugin adds a traffic congestion layer to Mapbox basemaps from the [Mapbox Traffic vector tile source](https://www.mapbox.com/vector-tiles/mapbox-traffic-v1/).
 */
@interface MBXTrafficPlugin : NSObject <MBXPlugin>

/**
 Add traffic to a MGLMapView. This method inserts the traffic layer above the road layer. See the [Mapbox Streets layer reference](https://www.mapbox.com/vector-tiles/mapbox-streets-v7/#layer-reference) for more information about vector tile layers.
 The earliest that this method can be called is in `-mapView:didFinishLoadingStyle:`

 @param mapView The map view that traffic will be displayed on.
 */
- (void)addToMapView:(MGLMapView *)mapView;

/**
 Insert the traffic layers below a specific layer that has already been added to your map’s style.
 
The earliest that this method can be called is in `-mapView:didFinishLoadingStyle:`

 @param mapView The map view that traffic will be displayed on.
 @param layer The style layer that traffic will be inserted below. Use the `layers` property on a style to verify layer identifiers.
 */
- (void)addToMapView:(MGLMapView *)mapView below:(MGLStyleLayer *)layer;


/**
 Insert the traffic layers above a specific layer that has already been added to your map’s style.

 @param mapView The map view that traffic will be displayed on.
 @param layer The style layer that traffic will be inserted below. Use the `layers` property on a style to verify layer identifiers.
 */
- (void)addToMapView:(MGLMapView *)mapView above:(MGLStyleLayer *)layer;

/**
 Remove the traffic layers from your map view. The earliest that this method can be called is in `-mapView:didFinishLoadingStyle:`

 @param mapView The map view that traffic will be removed from.
 */
- (void)removeFromMapView:(MGLMapView *)mapView;
@end
