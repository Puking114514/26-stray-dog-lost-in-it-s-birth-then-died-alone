#ifndef CODE_ASR_CTRL_H_
#define CODE_ASR_CTRL_H_

#define ASR_TARGET_IP           "ws-api.xfyun.cn"
#define ASR_TARGET_PORT         "80"
#define ASR_DOMAIN              "wss://ws-api.xfyun.cn/v2/iat"
#define ASR_AUDIO_ADC           ADC1_CH0_A16
#define ASR_BUTTON              P22_1
#define ASR_PIT                 CCU60_CH0

#define ASR_WIFI_SSID           "LAPTOP-5OUV92DQ 5168"                         // wifi名称 wifi需要是2.4G频率
#define ASR_WIFI_PASSWORD       "31&b2L67"                            // wifi密码

#define ASR_APIID               "6541598f"                              // 讯飞的id
#define ASR_APISecret           "MzdhOWYwODFkNDk3NTU3ZDVkMjIzMmQ3"      // 讯飞的Secret
#define ASR_APIKey              "e1496d1aeb75209a2cf26bd7d445ddc2"      // 讯飞的Key

#define RANDOM_NUM_ADC          ADC0_CH5_A5                             // 使用ADC生成随机数

#endif /* CODE_ASR_CTRL_H_ */
