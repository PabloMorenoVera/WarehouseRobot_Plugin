/*
 *  Copyright (C) 1997-2015 JDE Developers Team
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see http://www.gnu.org/licenses/.
 *  Authors :
 *       Victor Arribas Raigadas <v.arribas.urjc@gmai.com>
 *       Pablo Moreno Vera <p.morenov@alumnos.urjc.es>
 */

#ifndef LASER_H
#define LASER_H


#include <jderobot/laser.h>
#include <warehouserobot/warehouserobotsensors.hh>
#include <physics/MultiRayShape.hh>

namespace warehouserobot{
namespace interfaces{

class LaserI : public jderobot::Laser {
public:
    LaserI (const warehouserobot::Warehouserobot *sensor);
    virtual ~LaserI();

    virtual jderobot::LaserDataPtr getLaserData ( const Ice::Current& );

protected:
    jderobot::LaserDataPtr laserdata;
    const warehouserobot::WarehouserobotSensors* const sensor;
};

}}//NS
#endif // LASER_H
