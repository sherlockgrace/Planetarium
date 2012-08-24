//
//  rigidbody.cpp
//  Planetarium
//
//  Created by John Dexter Abaya on 24/08/12.
//
//

#include "rigidbody.h"

typedef struct_RigidBody {
    float fMass; //total mass (constant)
    float fInertia; //mass moment of inertia in body coordinates
    float fInertiaInverse; //inverse mass moment of inertia
    float vPosition; //position in space coordinates
    float vVelocity; //velocity in space coordinates
    float vVelocityBody; //velocity in body coordinates
    float vAngularVelocity; //angular velocity in
                            //body coordinates
    
    float fSpeed; //speed (magnitude of the velocity)
    float fOrientation;  //orientation
    
    Vector vForces; //total force on body
    Vector vMoment; //total moment (torque) on body
    Vector CD; //location of the center of drag
               //relative to the center of gravity
    Vector CT; //location of center of thrust
    Vector CPT; //location of the port bow thruster
    Vector CST; //location of the starboard bow
                //thruster relative to the center
                //of gravity
    float ProjectedArea; //mean projected area
    float ThrustForce;  //magnitude of the thrust force
    float fWidth; //bounding dimensions
    float fLength;
    
    
}rigidbody, *pRigidbody2D ;



void InitializeSpaceship(pRigidbody2D body)
{
    //Set initial position
    body->vPosition.x = 0.0f;
    body->vPosition.y = 0.0f;
    body->vPosition.z = 0.0f; //set all z's to zero b/c this is 2D
    
    //Set initial velocity
    body->vVelocity.x = 0.0f;
    body->vVelocity.y = 0.0f;
    body->vVelocity.z = 0.0f; //set all z's to zero b/c this is 2D
    body->fSpeed = 0.0f;
    
    //Set initial angular velocity
    body->AngularVelocity.x = 0.0f; //will always be zero in 2D
    body->AngularVelocity.y = 0.0f; //will always be zero in 2D
    body->AngularVelocity.z = 0.0f; //in 2D only this component
                                    //will be used
    
    //Set the initial thrust, forces, and moments
    body->vForces.x = 0.0f;
    body->vForces.y = 0.0f;
    body->vForces.z = 0.0f; //set all z's to zero
    body->vMoment.x = 0.0f; //will always be zero in 2D
    body->vMoment.y = 0.0f; //will always be zero in 2D
    body->vMoment.z = 0.0f; //in 2D only this component
                            //will be used
    
    //Zero the velocity in body space coordinates
    body->VVelocityBody.x = 0.0f;
    body->VVelocityBody.y = 0.0f;
    body->VVelocityBody.z = 0.0f;
    
    //Set the initial orientation
    body->fOrientation = 0.0;
    
    //
    
}


















