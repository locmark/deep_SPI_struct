#define RPI_DATA_FRAME_ID 1
#define RPI_SETTINGS_FRAME_ID 2
#define STM_FRAME_ID 1

typedef struct 	// to STM
{
	char frame_id = RPI_DATA_FRAME_ID;

	float dest_pos_x;
	float dest_pos_y;
	float dest_pos_z;
	float dest_pos_pitch;
	float dest_pos_roll;
	float dest_pos_yaw;

	char meaning_of_life = 42;
} SPIFrame_from_rpi_data;

typedef struct 	// to STM
{
	char frame_id = RPI_SETTINGS_FRAME_ID;

	bool module1_power_switch : 1;
	bool module2_power_switch : 2;
	bool module4_power_switch : 3;
	bool module3_power_switch : 4;
	bool module5_power_switch : 5;
	bool module6_power_switch : 6;
	bool module7_power_switch : 7;
	bool module8_power_switch : 8;

	float PID1_P, PID1_I, PID1_D;
	float PID2_P, PID2_I, PID2_D;
	float PID3_P, PID3_I, PID3_D;
	float PID4_P, PID4_I, PID4_D;
	float PID5_P, PID5_I, PID5_D;
	float PID6_P, PID6_I, PID6_D;

	char meaning_of_life = 42;
} SPIFrame_from_rpi_settings;

typedef struct 	// to rpi
{
	char frame_id = STM_FRAME_ID;

	float current_pos_x;
	float current_pos_y;
	float current_pos_z;
	float current_pos_pitch;
	float current_pos_roll;
	float current_pos_yaw;

	float module1_current;
	float module2_current;
	float module3_current;
	float module4_current;
	float module5_current;
	float module6_current;
	float module7_current;
	float module8_current;

	int8_t engine1_speed;
	int8_t engine2_speed;
	int8_t engine3_speed;
	int8_t engine4_speed;
	int8_t engine5_speed;
	int8_t engine6_speed;

	char meaning_of_life = 42;
} SPIFrame_from_stm;