

typedef struct 	// to STM
{
	char frame_id = 1;

	float pos_x;
	float pos_y;
	float pos_z;
	float pos_pitch;
	float pos_roll;
	float pos_yaw;

	char meaning_of_life = 42;
} SPIFrame_from_rpi_data;

typedef struct 	// to STM
{
	char frame_id = 2;

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
	char frame_id = 1;

	float pos_x;
	float pos_y;
	float pos_z;
	float pos_pitch;
	float pos_roll;
	float pos_yaw;

	float module1_current;
	float module2_current;
	float module3_current;
	float module4_current;
	float module5_current;
	float module6_current;
	float module7_current;
	float module8_current;

	int8_t engine1;
	int8_t engine2;
	int8_t engine3;
	int8_t engine4;
	int8_t engine5;
	int8_t engine6;

	char meaning_of_life = 42;
} SPIFrame_from_stm;