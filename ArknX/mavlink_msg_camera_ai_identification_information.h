#pragma once
// MESSAGE CAMERA_AI_IDENTIFICATION_INFORMATION PACKING

#define MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION 16000


typedef struct __mavlink_camera_ai_identification_information_t {
 uint16_t cap_flags; /*<  Bitmap of camera AI identification capability flags.*/
 uint8_t camera_device_id; /*<  Camera id of a non-MAVLink camera attached to an autopilot (1-6).  0 if the component is a MAVLink camera (with its own component id).*/
} mavlink_camera_ai_identification_information_t;

#define MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_LEN 3
#define MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_MIN_LEN 2
#define MAVLINK_MSG_ID_16000_LEN 3
#define MAVLINK_MSG_ID_16000_MIN_LEN 2

#define MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_CRC 51
#define MAVLINK_MSG_ID_16000_CRC 51



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CAMERA_AI_IDENTIFICATION_INFORMATION { \
    16000, \
    "CAMERA_AI_IDENTIFICATION_INFORMATION", \
    2, \
    {  { "cap_flags", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_camera_ai_identification_information_t, cap_flags) }, \
         { "camera_device_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_camera_ai_identification_information_t, camera_device_id) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CAMERA_AI_IDENTIFICATION_INFORMATION { \
    "CAMERA_AI_IDENTIFICATION_INFORMATION", \
    2, \
    {  { "cap_flags", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_camera_ai_identification_information_t, cap_flags) }, \
         { "camera_device_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_camera_ai_identification_information_t, camera_device_id) }, \
         } \
}
#endif

/**
 * @brief Pack a camera_ai_identification_information message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param cap_flags  Bitmap of camera AI identification capability flags.
 * @param camera_device_id  Camera id of a non-MAVLink camera attached to an autopilot (1-6).  0 if the component is a MAVLink camera (with its own component id).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_camera_ai_identification_information_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t cap_flags, uint8_t camera_device_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_LEN];
    _mav_put_uint16_t(buf, 0, cap_flags);
    _mav_put_uint8_t(buf, 2, camera_device_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_LEN);
#else
    mavlink_camera_ai_identification_information_t packet;
    packet.cap_flags = cap_flags;
    packet.camera_device_id = camera_device_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_LEN, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_CRC);
}

/**
 * @brief Pack a camera_ai_identification_information message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param cap_flags  Bitmap of camera AI identification capability flags.
 * @param camera_device_id  Camera id of a non-MAVLink camera attached to an autopilot (1-6).  0 if the component is a MAVLink camera (with its own component id).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_camera_ai_identification_information_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint16_t cap_flags, uint8_t camera_device_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_LEN];
    _mav_put_uint16_t(buf, 0, cap_flags);
    _mav_put_uint8_t(buf, 2, camera_device_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_LEN);
#else
    mavlink_camera_ai_identification_information_t packet;
    packet.cap_flags = cap_flags;
    packet.camera_device_id = camera_device_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_LEN, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_LEN);
#endif
}

/**
 * @brief Pack a camera_ai_identification_information message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cap_flags  Bitmap of camera AI identification capability flags.
 * @param camera_device_id  Camera id of a non-MAVLink camera attached to an autopilot (1-6).  0 if the component is a MAVLink camera (with its own component id).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_camera_ai_identification_information_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t cap_flags,uint8_t camera_device_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_LEN];
    _mav_put_uint16_t(buf, 0, cap_flags);
    _mav_put_uint8_t(buf, 2, camera_device_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_LEN);
#else
    mavlink_camera_ai_identification_information_t packet;
    packet.cap_flags = cap_flags;
    packet.camera_device_id = camera_device_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_LEN, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_CRC);
}

/**
 * @brief Encode a camera_ai_identification_information struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param camera_ai_identification_information C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_camera_ai_identification_information_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_camera_ai_identification_information_t* camera_ai_identification_information)
{
    return mavlink_msg_camera_ai_identification_information_pack(system_id, component_id, msg, camera_ai_identification_information->cap_flags, camera_ai_identification_information->camera_device_id);
}

/**
 * @brief Encode a camera_ai_identification_information struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param camera_ai_identification_information C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_camera_ai_identification_information_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_camera_ai_identification_information_t* camera_ai_identification_information)
{
    return mavlink_msg_camera_ai_identification_information_pack_chan(system_id, component_id, chan, msg, camera_ai_identification_information->cap_flags, camera_ai_identification_information->camera_device_id);
}

/**
 * @brief Encode a camera_ai_identification_information struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param camera_ai_identification_information C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_camera_ai_identification_information_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_camera_ai_identification_information_t* camera_ai_identification_information)
{
    return mavlink_msg_camera_ai_identification_information_pack_status(system_id, component_id, _status, msg,  camera_ai_identification_information->cap_flags, camera_ai_identification_information->camera_device_id);
}

/**
 * @brief Send a camera_ai_identification_information message
 * @param chan MAVLink channel to send the message
 *
 * @param cap_flags  Bitmap of camera AI identification capability flags.
 * @param camera_device_id  Camera id of a non-MAVLink camera attached to an autopilot (1-6).  0 if the component is a MAVLink camera (with its own component id).
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_camera_ai_identification_information_send(mavlink_channel_t chan, uint16_t cap_flags, uint8_t camera_device_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_LEN];
    _mav_put_uint16_t(buf, 0, cap_flags);
    _mav_put_uint8_t(buf, 2, camera_device_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION, buf, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_LEN, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_CRC);
#else
    mavlink_camera_ai_identification_information_t packet;
    packet.cap_flags = cap_flags;
    packet.camera_device_id = camera_device_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION, (const char *)&packet, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_LEN, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_CRC);
#endif
}

/**
 * @brief Send a camera_ai_identification_information message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_camera_ai_identification_information_send_struct(mavlink_channel_t chan, const mavlink_camera_ai_identification_information_t* camera_ai_identification_information)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_camera_ai_identification_information_send(chan, camera_ai_identification_information->cap_flags, camera_ai_identification_information->camera_device_id);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION, (const char *)camera_ai_identification_information, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_LEN, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_CRC);
#endif
}

#if MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_camera_ai_identification_information_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t cap_flags, uint8_t camera_device_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, cap_flags);
    _mav_put_uint8_t(buf, 2, camera_device_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION, buf, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_LEN, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_CRC);
#else
    mavlink_camera_ai_identification_information_t *packet = (mavlink_camera_ai_identification_information_t *)msgbuf;
    packet->cap_flags = cap_flags;
    packet->camera_device_id = camera_device_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION, (const char *)packet, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_LEN, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_CRC);
#endif
}
#endif

#endif

// MESSAGE CAMERA_AI_IDENTIFICATION_INFORMATION UNPACKING


/**
 * @brief Get field cap_flags from camera_ai_identification_information message
 *
 * @return  Bitmap of camera AI identification capability flags.
 */
static inline uint16_t mavlink_msg_camera_ai_identification_information_get_cap_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field camera_device_id from camera_ai_identification_information message
 *
 * @return  Camera id of a non-MAVLink camera attached to an autopilot (1-6).  0 if the component is a MAVLink camera (with its own component id).
 */
static inline uint8_t mavlink_msg_camera_ai_identification_information_get_camera_device_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Decode a camera_ai_identification_information message into a struct
 *
 * @param msg The message to decode
 * @param camera_ai_identification_information C-struct to decode the message contents into
 */
static inline void mavlink_msg_camera_ai_identification_information_decode(const mavlink_message_t* msg, mavlink_camera_ai_identification_information_t* camera_ai_identification_information)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    camera_ai_identification_information->cap_flags = mavlink_msg_camera_ai_identification_information_get_cap_flags(msg);
    camera_ai_identification_information->camera_device_id = mavlink_msg_camera_ai_identification_information_get_camera_device_id(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_LEN? msg->len : MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_LEN;
        memset(camera_ai_identification_information, 0, MAVLINK_MSG_ID_CAMERA_AI_IDENTIFICATION_INFORMATION_LEN);
    memcpy(camera_ai_identification_information, _MAV_PAYLOAD(msg), len);
#endif
}
