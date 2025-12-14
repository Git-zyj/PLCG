/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59188
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_2] = ((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))) / (min((-4955355123099682170LL), (((/* implicit */long long int) (unsigned short)13024))))))));
                    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_0] [i_1])), (arr_1 [i_2])))) ? (max((((/* implicit */long long int) 1403869411U)), (-625897979439667855LL))) : (min((arr_1 [i_0]), (((/* implicit */long long int) arr_2 [i_0] [i_1]))))));
                    var_14 += (-(((/* implicit */int) arr_4 [(unsigned char)24] [i_1] [(unsigned char)24])));
                    var_15 = ((/* implicit */unsigned int) ((short) min((arr_1 [i_1]), (arr_1 [i_0]))));
                    arr_9 [(unsigned char)5] [i_0] [i_0] [i_0] = ((/* implicit */int) var_11);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) ((((/* implicit */long long int) var_3)) > (625897979439667855LL)));
    var_17 = ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    var_18 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_3] [i_4] [i_4] [i_5]))))), ((~(max((((/* implicit */long long int) var_12)), (-625897979439667849LL)))))));
                    arr_19 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) min((((((/* implicit */int) (short)-20466)) | (((/* implicit */int) arr_4 [i_3] [i_4] [i_5])))), (((((/* implicit */_Bool) arr_4 [i_3] [i_4] [i_5])) ? (((/* implicit */int) arr_4 [i_3] [i_4] [i_5])) : (((/* implicit */int) arr_4 [i_5] [i_4] [i_3]))))));
                }
                /* LoopNest 3 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) 
                        {
                            {
                                arr_29 [i_3] [(signed char)17] [i_6] = ((/* implicit */signed char) ((((arr_7 [i_8] [i_7] [i_7] [i_6 - 1]) <= (arr_7 [i_7] [i_8] [i_7] [i_6 - 1]))) ? (((((/* implicit */_Bool) 625897979439667854LL)) ? (arr_7 [i_8] [(unsigned short)13] [i_6 - 1] [i_6 - 1]) : (arr_7 [(signed char)5] [(_Bool)1] [i_6] [i_6 - 1]))) : (((/* implicit */int) ((signed char) (signed char)117)))));
                                var_19 *= ((/* implicit */unsigned int) 625897979439667847LL);
                                var_20 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_22 [i_3])) + (var_6)))) ? (((unsigned int) arr_12 [i_3])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_6] [i_6] [i_6 - 1] [i_6] [i_6] [i_6]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
