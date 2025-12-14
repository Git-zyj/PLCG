/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83968
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) arr_2 [i_1]))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 23; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_9 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((signed char) (~(((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1])))));
                            var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) 0U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))) : (9339814749835401043ULL)));
                            var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)44))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 23; i_4 += 4) 
                {
                    for (unsigned int i_5 = 1; i_5 < 21; i_5 += 1) 
                    {
                        for (long long int i_6 = 1; i_6 < 24; i_6 += 3) 
                        {
                            {
                                arr_19 [i_0] [i_5] [(unsigned short)9] [(unsigned short)9] [(unsigned short)9] [(unsigned short)9] [i_6 - 1] = ((((/* implicit */int) (signed char)-63)) + (1876228915));
                                arr_20 [i_5] [i_1 + 1] [i_4] [i_5 + 1] [i_6] [i_1 - 1] [i_5] = ((/* implicit */int) arr_18 [(signed char)12] [i_0] [i_0]);
                                arr_21 [i_0] [i_0] [23ULL] [i_5] [i_4] [i_0] = ((/* implicit */long long int) 1876228915);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_7 = 3; i_7 < 23; i_7 += 1) 
                {
                    for (signed char i_8 = 1; i_8 < 24; i_8 += 4) 
                    {
                        {
                            arr_28 [i_8] [i_7] [i_8] [i_8 - 1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 4947919669422394068ULL)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)213))) - (9223372036854775807LL))) : (((/* implicit */long long int) 2119638971U)))), (((/* implicit */long long int) min((((/* implicit */short) (!(arr_16 [i_7] [i_1] [i_7] [i_8 - 1] [i_1])))), ((short)12526))))));
                            var_14 = ((/* implicit */unsigned char) (+((-(((((/* implicit */_Bool) -7912102969558069809LL)) ? (2147483635) : (((/* implicit */int) arr_8 [i_8 - 1] [i_8] [i_1 + 1] [i_1 + 1] [i_0] [i_0]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    for (unsigned short i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((131071U) + (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (unsigned short)65535))) | ((~(((/* implicit */int) var_3))))))))))));
                            var_16 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (short)12526))) - (4294836224U)))))), (((unsigned long long int) -5593343835036951668LL))));
                            arr_35 [i_0] [i_0] [i_9] [i_9] [i_10] = ((/* implicit */int) ((long long int) ((((((/* implicit */_Bool) arr_22 [i_9] [i_1] [i_9] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-34))) : (arr_6 [i_0] [i_1] [i_1]))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) arr_25 [i_0] [i_9] [i_9]))))))));
                            arr_36 [i_9] [i_9] [i_10] = ((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [(unsigned short)6] [i_0] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) -5411614719627529989LL))));
}
