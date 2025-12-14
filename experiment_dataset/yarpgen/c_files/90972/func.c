/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90972
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) <= (max((246152169U), (((/* implicit */unsigned int) (unsigned char)79)))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1] [i_1] [i_2])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)76)))))));
                    var_19 = ((/* implicit */unsigned long long int) (((+(arr_3 [i_1] [i_1 + 1]))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 246152169U)) ? (((/* implicit */int) (short)22542)) : ((~(((/* implicit */int) var_2)))))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        var_20 -= ((/* implicit */unsigned long long int) ((int) ((4048815127U) << (((arr_1 [i_3] [i_1]) - (3288320201U))))));
                        var_21 = ((/* implicit */unsigned short) -656303076);
                        arr_9 [i_0] [i_2] = ((/* implicit */signed char) max(((-(((unsigned int) arr_3 [i_0] [i_0 - 1])))), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 246152151U))))))))));
                        var_22 = arr_0 [i_1];
                    }
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned char) min((max((2631173980U), (((((/* implicit */_Bool) 4048815127U)) ? (4048815123U) : (1588802055U))))), (2631173985U)));
                        arr_13 [i_0] [i_1 - 2] [i_2] [i_0] = ((/* implicit */long long int) (~(4048815127U)));
                        arr_14 [i_0] [i_1] [i_2] [i_4] [i_4] |= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((arr_6 [i_1] [i_1 - 1] [i_2] [i_2 - 3]), (arr_6 [i_1] [i_1 - 3] [i_4] [i_4])))), (max((((/* implicit */unsigned int) (unsigned char)0)), (1663793329U)))));
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            var_24 = ((/* implicit */signed char) arr_4 [i_0 - 1] [i_5]);
                            var_25 += (((((_Bool)1) ? (((unsigned long long int) 246152195U)) : (15535832740260546393ULL))) << (((((/* implicit */int) var_4)) - (13382))));
                            arr_17 [i_0] [i_2] = ((/* implicit */long long int) min((((/* implicit */int) arr_7 [i_0 - 1] [i_1 - 3] [i_2] [i_4] [i_5])), ((~(((/* implicit */int) ((short) (unsigned char)177)))))));
                            var_26 = ((/* implicit */unsigned int) (((~(arr_11 [i_0] [i_1 - 3]))) ^ (((/* implicit */int) arr_12 [i_1] [i_2] [i_4] [i_5]))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((max((4048815138U), (1663793315U))) & (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) var_8)) - (129))))))))) | (((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_0 - 1] [i_1] [i_2] [i_4])) >> (((((/* implicit */int) var_1)) + (11055)))))) ? (((16478680576801266281ULL) | (((/* implicit */unsigned long long int) 246152169U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) >> (((var_3) - (3632710931U)))))))))))));
                            arr_20 [i_6] |= ((/* implicit */unsigned int) ((((((long long int) (_Bool)1)) / (((/* implicit */long long int) (+(246152204U)))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_1 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2631173980U))))));
                            arr_21 [i_0 - 1] [i_1 - 3] [i_0] [i_4] [i_0] [i_4] [i_6] = max((((((/* implicit */_Bool) 2631173966U)) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_1 + 1] [i_0 - 1] [i_4]))))), (1203404355U));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 18; i_7 += 3) 
                    {
                        for (short i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            {
                                var_28 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_16 [i_2 - 1] [i_7] [i_0 - 1] [i_7] [i_8])))) ? (((((/* implicit */_Bool) ((-437413641909173283LL) / (((/* implicit */long long int) 246152173U))))) ? (((/* implicit */unsigned long long int) max((2631173969U), (246152169U)))) : (((((/* implicit */_Bool) 660234235U)) ? (15535832740260546393ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64)))));
                                arr_27 [i_8] [i_0] [i_2 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((arr_5 [i_2 - 1] [i_2] [i_2 - 2] [i_2 - 3]) < (((/* implicit */int) var_4))))) >> (((arr_8 [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 - 2] [i_1 + 2]) - (6548396323178681179LL)))))) ? (1663793316U) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) && (((/* implicit */_Bool) (unsigned short)40014))))))))));
                                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) << ((+(0U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_30 = ((/* implicit */_Bool) max((var_30), (arr_26 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1])));
        var_31 = ((/* implicit */signed char) ((unsigned short) 0U));
        var_32 = ((/* implicit */unsigned char) max((max((var_16), (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)0)))))));
    }
    for (short i_9 = 0; i_9 < 24; i_9 += 1) 
    {
        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) arr_30 [i_9]))));
        var_34 = ((/* implicit */_Bool) arr_30 [i_9]);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 4) 
    {
        for (unsigned char i_11 = 1; i_11 < 10; i_11 += 2) 
        {
            {
                var_35 &= ((((((/* implicit */int) (unsigned short)34480)) | (-1619452440))) ^ ((-(((/* implicit */int) (short)9)))));
                var_36 = ((/* implicit */unsigned long long int) (signed char)-64);
                var_37 = ((/* implicit */unsigned char) 246152175U);
            }
        } 
    } 
    var_38 = ((unsigned char) (~(((((/* implicit */_Bool) 4048815101U)) ? (var_5) : (((/* implicit */int) var_15))))));
    var_39 = ((/* implicit */_Bool) var_8);
}
