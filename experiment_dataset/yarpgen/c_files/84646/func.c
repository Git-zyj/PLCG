/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84646
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
    var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) ((_Bool) var_11))) == (((((/* implicit */_Bool) var_4)) ? (var_16) : (var_16))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        arr_11 [i_3] [i_2] [i_2] [i_1] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((arr_6 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 1]) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) / (((((/* implicit */unsigned long long int) max((var_14), (arr_8 [i_3] [(unsigned short)6] [i_1 + 1] [i_1 + 1] [i_1] [i_0])))) & (((((/* implicit */_Bool) -563173784)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)102))) : (6238135113327287663ULL)))))));
                        /* LoopSeq 3 */
                        for (short i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            var_21 ^= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) ^ (((/* implicit */int) ((((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_4]))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_17)) > (((/* implicit */int) (_Bool)1)))))))))));
                            arr_14 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */long long int) (((-(((/* implicit */int) var_17)))) / (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_1] [i_4 - 1])), (arr_3 [i_1 - 1]))))));
                        }
                        for (int i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)200)) || (((((/* implicit */unsigned long long int) 1363633926U)) == (114064365255718194ULL))))))) * ((-(34359738367LL))))))));
                            arr_18 [i_1 + 1] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) var_15)))));
                        }
                        for (signed char i_6 = 1; i_6 < 15; i_6 += 2) 
                        {
                            arr_21 [i_0] = ((/* implicit */long long int) ((((var_19) - (((/* implicit */unsigned long long int) var_18)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_12 [i_6 + 1] [i_1 - 1] [i_1 + 1]) == (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)75)) ? (17850376594585493080ULL) : (((/* implicit */unsigned long long int) 2119281598U)))))))));
                            var_24 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (var_19)))));
                        }
                    }
                    arr_22 [i_0] [i_0] [16ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_19 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1] [i_1] [i_1 - 1]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1173585630U)) ? (8080276713712093802ULL) : (((/* implicit */unsigned long long int) 5751715125137493128LL)))))));
                    var_25 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) 204898096)) ? (4294967295U) : (((/* implicit */unsigned int) 1230220054)))));
                    var_26 = ((/* implicit */_Bool) min((var_26), (((_Bool) ((_Bool) 1273638910U)))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) ((_Bool) 9126073362177743740LL))))));
    /* LoopSeq 3 */
    for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
    {
        arr_26 [i_7] = ((/* implicit */_Bool) max((max((((/* implicit */long long int) (_Bool)1)), (4734898335019592437LL))), (((((/* implicit */long long int) arr_25 [i_7] [i_7])) + (((long long int) (signed char)-115))))));
        var_28 = ((/* implicit */unsigned long long int) ((signed char) ((short) ((unsigned short) var_1))));
        arr_27 [(unsigned char)19] [14LL] = ((/* implicit */_Bool) max(((((-2147483647 - 1)) ^ (((((/* implicit */int) (unsigned short)42985)) << (((((/* implicit */int) (unsigned short)22183)) - (22178))))))), (((((((/* implicit */int) (short)-12540)) + (2147483647))) << (((((/* implicit */int) var_13)) - (125)))))));
        var_29 = ((/* implicit */unsigned long long int) ((((((arr_24 [i_7] [i_7]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [(unsigned short)20]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) < (((/* implicit */long long int) ((/* implicit */int) var_7))))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)-50))))));
    }
    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 1) 
    {
        var_30 = ((/* implicit */unsigned char) max((((/* implicit */int) ((_Bool) 17591863450381211482ULL))), (((arr_25 [i_8] [i_8]) / (arr_25 [i_8] [i_8])))));
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            for (int i_10 = 0; i_10 < 22; i_10 += 1) 
            {
                {
                    var_31 = ((/* implicit */unsigned char) ((max((10422623148676056989ULL), (((/* implicit */unsigned long long int) (signed char)119)))) << (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)208))))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 1; i_11 < 21; i_11 += 1) 
                    {
                        var_32 = ((/* implicit */int) ((short) ((((/* implicit */int) ((((/* implicit */int) (short)-20640)) <= (-1256642872)))) | (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (121354610) : (((/* implicit */int) (_Bool)1)))))));
                        var_33 = ((/* implicit */unsigned long long int) max((var_33), (max((((7750045497761590095ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_9 + 1] [(unsigned short)16]))))), (((/* implicit */unsigned long long int) ((-1673802913) >= (((/* implicit */int) (short)-7786)))))))));
                        var_34 = ((/* implicit */unsigned short) ((unsigned char) ((((-4050347057513172952LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_9] [i_9]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_10)))) : (var_3))));
                        arr_37 [i_9] [i_9] [i_9] [i_9] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) <= (((/* implicit */int) (signed char)(-127 - 1)))));
                    }
                }
            } 
        } 
        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned short)25276), ((unsigned short)64755)))) >> (((((((/* implicit */int) (signed char)30)) | (-641080925))) + (641080915)))))) || (((3720905677U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)70)))))));
    }
    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 1) 
    {
        var_36 = ((/* implicit */unsigned short) min((((/* implicit */int) ((_Bool) arr_39 [(short)13]))), (((((/* implicit */int) arr_39 [i_12])) >> (((/* implicit */int) arr_39 [i_12]))))));
        var_37 = ((/* implicit */short) ((((((((/* implicit */int) (signed char)-118)) > (((/* implicit */int) arr_39 [i_12])))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_39 [i_12])) >= (((/* implicit */int) var_4)))))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) != (((/* implicit */unsigned int) var_15))))))));
    }
    var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) min((((unsigned char) var_4)), (((unsigned char) var_15)))))));
}
