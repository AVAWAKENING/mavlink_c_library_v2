#pragma once
// MESSAGE GNSS_LOW_BANDWIDTH_POSITION PACKING

#define MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION 20000


typedef struct __mavlink_gnss_low_bandwidth_position_t {
 int32_t lat; /*< [degE7] Latitude in degrees * 1E7 (WGS84)*/
 int32_t lon; /*< [degE7] Longitude in degrees * 1E7 (WGS84)*/
 int32_t alt; /*< [mm] Altitude AMSL (meters * 1000)*/
 int32_t relative_alt; /*< [mm] Altitude relative to ground (meters * 1000)*/
 uint16_t vn; /*< [cm/s] Velocity in North direction (cm/s, positive North)*/
 uint16_t ve; /*< [cm/s] Velocity in East direction (cm/s, positive East)*/
 uint16_t vd; /*< [cm/s] Velocity in Down direction (cm/s, positive Down)*/
 uint16_t heading; /*< [cdeg] Heading (centi-degrees, 0=north, 9000=east, 18000=south, 27000=west)*/
 uint8_t satellites_visible; /*<  Number of satellites visible*/
 uint8_t fix_type; /*<  GPS fix type (1=none, 2=2D, 3=3D, 4=RTCM differential, 5=RTK float, 6=RTK fixed)*/
} mavlink_gnss_low_bandwidth_position_t;

#define MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_LEN 26
#define MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_MIN_LEN 26
#define MAVLINK_MSG_ID_20000_LEN 26
#define MAVLINK_MSG_ID_20000_MIN_LEN 26

#define MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_CRC 58
#define MAVLINK_MSG_ID_20000_CRC 58



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GNSS_LOW_BANDWIDTH_POSITION { \
    20000, \
    "GNSS_LOW_BANDWIDTH_POSITION", \
    10, \
    {  { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_gnss_low_bandwidth_position_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_gnss_low_bandwidth_position_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_gnss_low_bandwidth_position_t, alt) }, \
         { "relative_alt", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_gnss_low_bandwidth_position_t, relative_alt) }, \
         { "vn", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_gnss_low_bandwidth_position_t, vn) }, \
         { "ve", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_gnss_low_bandwidth_position_t, ve) }, \
         { "vd", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_gnss_low_bandwidth_position_t, vd) }, \
         { "heading", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_gnss_low_bandwidth_position_t, heading) }, \
         { "satellites_visible", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_gnss_low_bandwidth_position_t, satellites_visible) }, \
         { "fix_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 25, offsetof(mavlink_gnss_low_bandwidth_position_t, fix_type) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GNSS_LOW_BANDWIDTH_POSITION { \
    "GNSS_LOW_BANDWIDTH_POSITION", \
    10, \
    {  { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_gnss_low_bandwidth_position_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_gnss_low_bandwidth_position_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_gnss_low_bandwidth_position_t, alt) }, \
         { "relative_alt", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_gnss_low_bandwidth_position_t, relative_alt) }, \
         { "vn", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_gnss_low_bandwidth_position_t, vn) }, \
         { "ve", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_gnss_low_bandwidth_position_t, ve) }, \
         { "vd", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_gnss_low_bandwidth_position_t, vd) }, \
         { "heading", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_gnss_low_bandwidth_position_t, heading) }, \
         { "satellites_visible", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_gnss_low_bandwidth_position_t, satellites_visible) }, \
         { "fix_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 25, offsetof(mavlink_gnss_low_bandwidth_position_t, fix_type) }, \
         } \
}
#endif

/**
 * @brief Pack a gnss_low_bandwidth_position message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param lat [degE7] Latitude in degrees * 1E7 (WGS84)
 * @param lon [degE7] Longitude in degrees * 1E7 (WGS84)
 * @param alt [mm] Altitude AMSL (meters * 1000)
 * @param relative_alt [mm] Altitude relative to ground (meters * 1000)
 * @param vn [cm/s] Velocity in North direction (cm/s, positive North)
 * @param ve [cm/s] Velocity in East direction (cm/s, positive East)
 * @param vd [cm/s] Velocity in Down direction (cm/s, positive Down)
 * @param heading [cdeg] Heading (centi-degrees, 0=north, 9000=east, 18000=south, 27000=west)
 * @param satellites_visible  Number of satellites visible
 * @param fix_type  GPS fix type (1=none, 2=2D, 3=3D, 4=RTCM differential, 5=RTK float, 6=RTK fixed)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gnss_low_bandwidth_position_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int32_t lat, int32_t lon, int32_t alt, int32_t relative_alt, uint16_t vn, uint16_t ve, uint16_t vd, uint16_t heading, uint8_t satellites_visible, uint8_t fix_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_LEN];
    _mav_put_int32_t(buf, 0, lat);
    _mav_put_int32_t(buf, 4, lon);
    _mav_put_int32_t(buf, 8, alt);
    _mav_put_int32_t(buf, 12, relative_alt);
    _mav_put_uint16_t(buf, 16, vn);
    _mav_put_uint16_t(buf, 18, ve);
    _mav_put_uint16_t(buf, 20, vd);
    _mav_put_uint16_t(buf, 22, heading);
    _mav_put_uint8_t(buf, 24, satellites_visible);
    _mav_put_uint8_t(buf, 25, fix_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_LEN);
#else
    mavlink_gnss_low_bandwidth_position_t packet;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.relative_alt = relative_alt;
    packet.vn = vn;
    packet.ve = ve;
    packet.vd = vd;
    packet.heading = heading;
    packet.satellites_visible = satellites_visible;
    packet.fix_type = fix_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_MIN_LEN, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_LEN, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_CRC);
}

/**
 * @brief Pack a gnss_low_bandwidth_position message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param lat [degE7] Latitude in degrees * 1E7 (WGS84)
 * @param lon [degE7] Longitude in degrees * 1E7 (WGS84)
 * @param alt [mm] Altitude AMSL (meters * 1000)
 * @param relative_alt [mm] Altitude relative to ground (meters * 1000)
 * @param vn [cm/s] Velocity in North direction (cm/s, positive North)
 * @param ve [cm/s] Velocity in East direction (cm/s, positive East)
 * @param vd [cm/s] Velocity in Down direction (cm/s, positive Down)
 * @param heading [cdeg] Heading (centi-degrees, 0=north, 9000=east, 18000=south, 27000=west)
 * @param satellites_visible  Number of satellites visible
 * @param fix_type  GPS fix type (1=none, 2=2D, 3=3D, 4=RTCM differential, 5=RTK float, 6=RTK fixed)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gnss_low_bandwidth_position_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int32_t lat, int32_t lon, int32_t alt, int32_t relative_alt, uint16_t vn, uint16_t ve, uint16_t vd, uint16_t heading, uint8_t satellites_visible, uint8_t fix_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_LEN];
    _mav_put_int32_t(buf, 0, lat);
    _mav_put_int32_t(buf, 4, lon);
    _mav_put_int32_t(buf, 8, alt);
    _mav_put_int32_t(buf, 12, relative_alt);
    _mav_put_uint16_t(buf, 16, vn);
    _mav_put_uint16_t(buf, 18, ve);
    _mav_put_uint16_t(buf, 20, vd);
    _mav_put_uint16_t(buf, 22, heading);
    _mav_put_uint8_t(buf, 24, satellites_visible);
    _mav_put_uint8_t(buf, 25, fix_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_LEN);
#else
    mavlink_gnss_low_bandwidth_position_t packet;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.relative_alt = relative_alt;
    packet.vn = vn;
    packet.ve = ve;
    packet.vd = vd;
    packet.heading = heading;
    packet.satellites_visible = satellites_visible;
    packet.fix_type = fix_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_MIN_LEN, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_LEN, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_MIN_LEN, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_LEN);
#endif
}

/**
 * @brief Pack a gnss_low_bandwidth_position message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param lat [degE7] Latitude in degrees * 1E7 (WGS84)
 * @param lon [degE7] Longitude in degrees * 1E7 (WGS84)
 * @param alt [mm] Altitude AMSL (meters * 1000)
 * @param relative_alt [mm] Altitude relative to ground (meters * 1000)
 * @param vn [cm/s] Velocity in North direction (cm/s, positive North)
 * @param ve [cm/s] Velocity in East direction (cm/s, positive East)
 * @param vd [cm/s] Velocity in Down direction (cm/s, positive Down)
 * @param heading [cdeg] Heading (centi-degrees, 0=north, 9000=east, 18000=south, 27000=west)
 * @param satellites_visible  Number of satellites visible
 * @param fix_type  GPS fix type (1=none, 2=2D, 3=3D, 4=RTCM differential, 5=RTK float, 6=RTK fixed)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gnss_low_bandwidth_position_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int32_t lat,int32_t lon,int32_t alt,int32_t relative_alt,uint16_t vn,uint16_t ve,uint16_t vd,uint16_t heading,uint8_t satellites_visible,uint8_t fix_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_LEN];
    _mav_put_int32_t(buf, 0, lat);
    _mav_put_int32_t(buf, 4, lon);
    _mav_put_int32_t(buf, 8, alt);
    _mav_put_int32_t(buf, 12, relative_alt);
    _mav_put_uint16_t(buf, 16, vn);
    _mav_put_uint16_t(buf, 18, ve);
    _mav_put_uint16_t(buf, 20, vd);
    _mav_put_uint16_t(buf, 22, heading);
    _mav_put_uint8_t(buf, 24, satellites_visible);
    _mav_put_uint8_t(buf, 25, fix_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_LEN);
#else
    mavlink_gnss_low_bandwidth_position_t packet;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.relative_alt = relative_alt;
    packet.vn = vn;
    packet.ve = ve;
    packet.vd = vd;
    packet.heading = heading;
    packet.satellites_visible = satellites_visible;
    packet.fix_type = fix_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_MIN_LEN, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_LEN, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_CRC);
}

/**
 * @brief Encode a gnss_low_bandwidth_position struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param gnss_low_bandwidth_position C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gnss_low_bandwidth_position_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_gnss_low_bandwidth_position_t* gnss_low_bandwidth_position)
{
    return mavlink_msg_gnss_low_bandwidth_position_pack(system_id, component_id, msg, gnss_low_bandwidth_position->lat, gnss_low_bandwidth_position->lon, gnss_low_bandwidth_position->alt, gnss_low_bandwidth_position->relative_alt, gnss_low_bandwidth_position->vn, gnss_low_bandwidth_position->ve, gnss_low_bandwidth_position->vd, gnss_low_bandwidth_position->heading, gnss_low_bandwidth_position->satellites_visible, gnss_low_bandwidth_position->fix_type);
}

/**
 * @brief Encode a gnss_low_bandwidth_position struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gnss_low_bandwidth_position C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gnss_low_bandwidth_position_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_gnss_low_bandwidth_position_t* gnss_low_bandwidth_position)
{
    return mavlink_msg_gnss_low_bandwidth_position_pack_chan(system_id, component_id, chan, msg, gnss_low_bandwidth_position->lat, gnss_low_bandwidth_position->lon, gnss_low_bandwidth_position->alt, gnss_low_bandwidth_position->relative_alt, gnss_low_bandwidth_position->vn, gnss_low_bandwidth_position->ve, gnss_low_bandwidth_position->vd, gnss_low_bandwidth_position->heading, gnss_low_bandwidth_position->satellites_visible, gnss_low_bandwidth_position->fix_type);
}

/**
 * @brief Encode a gnss_low_bandwidth_position struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param gnss_low_bandwidth_position C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gnss_low_bandwidth_position_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_gnss_low_bandwidth_position_t* gnss_low_bandwidth_position)
{
    return mavlink_msg_gnss_low_bandwidth_position_pack_status(system_id, component_id, _status, msg,  gnss_low_bandwidth_position->lat, gnss_low_bandwidth_position->lon, gnss_low_bandwidth_position->alt, gnss_low_bandwidth_position->relative_alt, gnss_low_bandwidth_position->vn, gnss_low_bandwidth_position->ve, gnss_low_bandwidth_position->vd, gnss_low_bandwidth_position->heading, gnss_low_bandwidth_position->satellites_visible, gnss_low_bandwidth_position->fix_type);
}

/**
 * @brief Send a gnss_low_bandwidth_position message
 * @param chan MAVLink channel to send the message
 *
 * @param lat [degE7] Latitude in degrees * 1E7 (WGS84)
 * @param lon [degE7] Longitude in degrees * 1E7 (WGS84)
 * @param alt [mm] Altitude AMSL (meters * 1000)
 * @param relative_alt [mm] Altitude relative to ground (meters * 1000)
 * @param vn [cm/s] Velocity in North direction (cm/s, positive North)
 * @param ve [cm/s] Velocity in East direction (cm/s, positive East)
 * @param vd [cm/s] Velocity in Down direction (cm/s, positive Down)
 * @param heading [cdeg] Heading (centi-degrees, 0=north, 9000=east, 18000=south, 27000=west)
 * @param satellites_visible  Number of satellites visible
 * @param fix_type  GPS fix type (1=none, 2=2D, 3=3D, 4=RTCM differential, 5=RTK float, 6=RTK fixed)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_gnss_low_bandwidth_position_send(mavlink_channel_t chan, int32_t lat, int32_t lon, int32_t alt, int32_t relative_alt, uint16_t vn, uint16_t ve, uint16_t vd, uint16_t heading, uint8_t satellites_visible, uint8_t fix_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_LEN];
    _mav_put_int32_t(buf, 0, lat);
    _mav_put_int32_t(buf, 4, lon);
    _mav_put_int32_t(buf, 8, alt);
    _mav_put_int32_t(buf, 12, relative_alt);
    _mav_put_uint16_t(buf, 16, vn);
    _mav_put_uint16_t(buf, 18, ve);
    _mav_put_uint16_t(buf, 20, vd);
    _mav_put_uint16_t(buf, 22, heading);
    _mav_put_uint8_t(buf, 24, satellites_visible);
    _mav_put_uint8_t(buf, 25, fix_type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION, buf, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_MIN_LEN, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_LEN, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_CRC);
#else
    mavlink_gnss_low_bandwidth_position_t packet;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.relative_alt = relative_alt;
    packet.vn = vn;
    packet.ve = ve;
    packet.vd = vd;
    packet.heading = heading;
    packet.satellites_visible = satellites_visible;
    packet.fix_type = fix_type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION, (const char *)&packet, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_MIN_LEN, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_LEN, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_CRC);
#endif
}

/**
 * @brief Send a gnss_low_bandwidth_position message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_gnss_low_bandwidth_position_send_struct(mavlink_channel_t chan, const mavlink_gnss_low_bandwidth_position_t* gnss_low_bandwidth_position)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gnss_low_bandwidth_position_send(chan, gnss_low_bandwidth_position->lat, gnss_low_bandwidth_position->lon, gnss_low_bandwidth_position->alt, gnss_low_bandwidth_position->relative_alt, gnss_low_bandwidth_position->vn, gnss_low_bandwidth_position->ve, gnss_low_bandwidth_position->vd, gnss_low_bandwidth_position->heading, gnss_low_bandwidth_position->satellites_visible, gnss_low_bandwidth_position->fix_type);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION, (const char *)gnss_low_bandwidth_position, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_MIN_LEN, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_LEN, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_CRC);
#endif
}

#if MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_gnss_low_bandwidth_position_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int32_t lat, int32_t lon, int32_t alt, int32_t relative_alt, uint16_t vn, uint16_t ve, uint16_t vd, uint16_t heading, uint8_t satellites_visible, uint8_t fix_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, lat);
    _mav_put_int32_t(buf, 4, lon);
    _mav_put_int32_t(buf, 8, alt);
    _mav_put_int32_t(buf, 12, relative_alt);
    _mav_put_uint16_t(buf, 16, vn);
    _mav_put_uint16_t(buf, 18, ve);
    _mav_put_uint16_t(buf, 20, vd);
    _mav_put_uint16_t(buf, 22, heading);
    _mav_put_uint8_t(buf, 24, satellites_visible);
    _mav_put_uint8_t(buf, 25, fix_type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION, buf, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_MIN_LEN, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_LEN, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_CRC);
#else
    mavlink_gnss_low_bandwidth_position_t *packet = (mavlink_gnss_low_bandwidth_position_t *)msgbuf;
    packet->lat = lat;
    packet->lon = lon;
    packet->alt = alt;
    packet->relative_alt = relative_alt;
    packet->vn = vn;
    packet->ve = ve;
    packet->vd = vd;
    packet->heading = heading;
    packet->satellites_visible = satellites_visible;
    packet->fix_type = fix_type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION, (const char *)packet, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_MIN_LEN, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_LEN, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_CRC);
#endif
}
#endif

#endif

// MESSAGE GNSS_LOW_BANDWIDTH_POSITION UNPACKING


/**
 * @brief Get field lat from gnss_low_bandwidth_position message
 *
 * @return [degE7] Latitude in degrees * 1E7 (WGS84)
 */
static inline int32_t mavlink_msg_gnss_low_bandwidth_position_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field lon from gnss_low_bandwidth_position message
 *
 * @return [degE7] Longitude in degrees * 1E7 (WGS84)
 */
static inline int32_t mavlink_msg_gnss_low_bandwidth_position_get_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field alt from gnss_low_bandwidth_position message
 *
 * @return [mm] Altitude AMSL (meters * 1000)
 */
static inline int32_t mavlink_msg_gnss_low_bandwidth_position_get_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field relative_alt from gnss_low_bandwidth_position message
 *
 * @return [mm] Altitude relative to ground (meters * 1000)
 */
static inline int32_t mavlink_msg_gnss_low_bandwidth_position_get_relative_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field vn from gnss_low_bandwidth_position message
 *
 * @return [cm/s] Velocity in North direction (cm/s, positive North)
 */
static inline uint16_t mavlink_msg_gnss_low_bandwidth_position_get_vn(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Get field ve from gnss_low_bandwidth_position message
 *
 * @return [cm/s] Velocity in East direction (cm/s, positive East)
 */
static inline uint16_t mavlink_msg_gnss_low_bandwidth_position_get_ve(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  18);
}

/**
 * @brief Get field vd from gnss_low_bandwidth_position message
 *
 * @return [cm/s] Velocity in Down direction (cm/s, positive Down)
 */
static inline uint16_t mavlink_msg_gnss_low_bandwidth_position_get_vd(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  20);
}

/**
 * @brief Get field heading from gnss_low_bandwidth_position message
 *
 * @return [cdeg] Heading (centi-degrees, 0=north, 9000=east, 18000=south, 27000=west)
 */
static inline uint16_t mavlink_msg_gnss_low_bandwidth_position_get_heading(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  22);
}

/**
 * @brief Get field satellites_visible from gnss_low_bandwidth_position message
 *
 * @return  Number of satellites visible
 */
static inline uint8_t mavlink_msg_gnss_low_bandwidth_position_get_satellites_visible(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  24);
}

/**
 * @brief Get field fix_type from gnss_low_bandwidth_position message
 *
 * @return  GPS fix type (1=none, 2=2D, 3=3D, 4=RTCM differential, 5=RTK float, 6=RTK fixed)
 */
static inline uint8_t mavlink_msg_gnss_low_bandwidth_position_get_fix_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  25);
}

/**
 * @brief Decode a gnss_low_bandwidth_position message into a struct
 *
 * @param msg The message to decode
 * @param gnss_low_bandwidth_position C-struct to decode the message contents into
 */
static inline void mavlink_msg_gnss_low_bandwidth_position_decode(const mavlink_message_t* msg, mavlink_gnss_low_bandwidth_position_t* gnss_low_bandwidth_position)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    gnss_low_bandwidth_position->lat = mavlink_msg_gnss_low_bandwidth_position_get_lat(msg);
    gnss_low_bandwidth_position->lon = mavlink_msg_gnss_low_bandwidth_position_get_lon(msg);
    gnss_low_bandwidth_position->alt = mavlink_msg_gnss_low_bandwidth_position_get_alt(msg);
    gnss_low_bandwidth_position->relative_alt = mavlink_msg_gnss_low_bandwidth_position_get_relative_alt(msg);
    gnss_low_bandwidth_position->vn = mavlink_msg_gnss_low_bandwidth_position_get_vn(msg);
    gnss_low_bandwidth_position->ve = mavlink_msg_gnss_low_bandwidth_position_get_ve(msg);
    gnss_low_bandwidth_position->vd = mavlink_msg_gnss_low_bandwidth_position_get_vd(msg);
    gnss_low_bandwidth_position->heading = mavlink_msg_gnss_low_bandwidth_position_get_heading(msg);
    gnss_low_bandwidth_position->satellites_visible = mavlink_msg_gnss_low_bandwidth_position_get_satellites_visible(msg);
    gnss_low_bandwidth_position->fix_type = mavlink_msg_gnss_low_bandwidth_position_get_fix_type(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_LEN? msg->len : MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_LEN;
        memset(gnss_low_bandwidth_position, 0, MAVLINK_MSG_ID_GNSS_LOW_BANDWIDTH_POSITION_LEN);
    memcpy(gnss_low_bandwidth_position, _MAV_PAYLOAD(msg), len);
#endif
}
