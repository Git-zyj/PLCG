/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90721
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
    var_17 = ((/* implicit */int) var_7);
    var_18 = ((/* implicit */unsigned int) var_10);
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (~(((((/* implicit */int) var_15)) << (((((var_12) >> (((((/* implicit */int) var_2)) - (162))))) - (16031470566466982ULL))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned long long int) var_1)) : (var_12)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (arr_3 [i_1])))), (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_12)) ? (arr_1 [i_1]) : (var_14)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 14; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                            {
                                arr_16 [i_4] [i_4] [i_2] [i_0] [(short)15] [i_1] = ((/* implicit */unsigned short) var_7);
                                var_21 -= ((/* implicit */signed char) (~((+(((/* implicit */int) var_2))))));
                                arr_17 [3U] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */int) max((max((((((/* implicit */_Bool) 9U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_1 [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_7))))))), (arr_1 [i_4])));
                            }
                            for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                            {
                                var_22 = ((/* implicit */int) ((((/* implicit */long long int) 3505391510U)) - (1331006243224079464LL)));
                                var_23 -= (unsigned char)232;
                                var_24 = ((/* implicit */unsigned short) ((unsigned char) ((arr_19 [i_0] [i_3 + 3] [i_3] [i_3] [i_3] [i_3 + 2]) > (((/* implicit */unsigned int) ((/* implicit */int) var_15))))));
                                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(var_6)))) / (((((/* implicit */_Bool) arr_11 [i_2 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1])) ? (arr_11 [i_2 + 3] [i_3 + 2] [i_3 + 1] [i_3 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))));
                                var_26 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((1378881952U), (var_14)))) ? (max((var_5), (((/* implicit */unsigned long long int) (unsigned char)27)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-16618))))))), ((+(arr_15 [i_0] [i_0] [i_2])))));
                            }
                            for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
                            {
                                arr_25 [i_0] [i_1] [i_0] [i_3 - 1] [(short)15] = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((arr_13 [i_0] [i_1] [i_0] [i_3] [i_6]) + (9223372036854775807LL))) >> (((((int) -1158246546)) + (1158246577)))))) ? (((((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) & (((/* implicit */long long int) ((((((/* implicit */int) var_9)) + (2147483647))) << (((arr_4 [i_1] [i_2] [i_3 - 2]) - (3503097142271939302LL)))))))) : (min((((/* implicit */long long int) ((((/* implicit */int) var_10)) > (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) var_3)) ? (arr_13 [i_3] [i_3] [i_0] [i_0] [i_0]) : (var_4)))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((arr_13 [i_0] [i_1] [i_0] [i_3] [i_6]) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((int) -1158246546)) + (1158246577)))))) ? (((((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) & (((/* implicit */long long int) ((((((/* implicit */int) var_9)) + (2147483647))) << (((arr_4 [i_1] [i_2] [i_3 - 2]) - (3503097142271939302LL)))))))) : (min((((/* implicit */long long int) ((((/* implicit */int) var_10)) > (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) var_3)) ? (arr_13 [i_3] [i_3] [i_0] [i_0] [i_0]) : (var_4))))))));
                                arr_26 [i_0] [i_1] [i_1] [i_3 - 1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
                            }
                            /* vectorizable */
                            for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
                            {
                                var_27 = ((/* implicit */signed char) (~(((/* implicit */int) arr_2 [i_2 + 3]))));
                                arr_30 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) - (((/* implicit */int) var_8))));
                                arr_31 [i_0] [i_0] [i_2] [i_2] [i_3 + 2] [(unsigned char)16] [i_7] = ((/* implicit */short) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((((/* implicit */int) (short)32)) - (16)))));
                                arr_32 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0] [i_7] = ((/* implicit */unsigned char) (+(((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0] [i_0] [i_2] [i_3] [i_7]))) / (var_6)))));
                                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_2 + 2] [(short)9] [i_3 - 1] [i_3])))));
                            }
                            arr_33 [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_2 + 1])) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_2 - 1])) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_2 - 1]))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (var_5)))));
                        }
                    } 
                } 
                var_29 = var_15;
                var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) (unsigned short)54396))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [i_0] [i_0]))))))))));
            }
        } 
    } 
    var_31 = ((/* implicit */short) (((~(max((2644888197488721770ULL), (((/* implicit */unsigned long long int) 1U)))))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_0), ((short)-14130)))) & (((/* implicit */int) (short)-32)))))));
}
