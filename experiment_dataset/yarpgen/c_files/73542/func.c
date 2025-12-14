/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73542
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) 814693324U)), ((-9223372036854775807LL - 1LL))))) ? (((arr_0 [i_0]) & (arr_0 [i_0]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_11)))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [20LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 3522482871274676641LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_2 + 2] [(short)16] [i_0])))) >> (((arr_1 [i_2 - 1]) - (1199377438)))))) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((3480273971U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37887))))))))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65519)) ^ (((/* implicit */int) (unsigned short)0))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2 - 1] [i_3] [i_4] [(unsigned short)15] [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_10 [2ULL] [i_2 - 1] [i_2 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_3 [i_4] [i_1] [i_0])))) : (var_2)))));
                                var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((long long int) var_18)), (((/* implicit */long long int) arr_12 [i_0] [i_0] [(short)22] [i_0] [i_4] [i_4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) max((((/* implicit */unsigned short) var_17)), (var_4)))))) : (((max(((_Bool)1), ((_Bool)1))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)122))) : (var_2))) : (((unsigned long long int) 697305197))))));
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0])) ? (min(((~(((/* implicit */int) arr_2 [i_0] [i_1])))), (((/* implicit */int) arr_6 [i_2 - 1] [i_2 + 1] [i_2 - 1])))) : ((((((-(1342142048))) + (2147483647))) << (((((/* implicit */int) min(((unsigned short)65519), (((/* implicit */unsigned short) (short)8866))))) - (8866)))))));
                                var_23 = ((/* implicit */unsigned short) min((var_3), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_11 [i_4] [20ULL] [i_2 + 2] [i_1] [20ULL])), (((arr_9 [(_Bool)1] [i_1] [i_2 + 2] [i_2 + 2] [i_0]) ? (arr_0 [i_0]) : (4243801292U))))))));
                                arr_15 [i_1] [i_4] [i_0] [i_2 + 1] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((short) (short)26114))), ((unsigned short)0)))) ? ((-(((/* implicit */int) (short)-26114)))) : (((/* implicit */int) (short)26114)));
                            }
                        } 
                    } 
                    arr_16 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((var_12), (((/* implicit */unsigned long long int) var_13)))) / (max((14589678965569752054ULL), (((/* implicit */unsigned long long int) var_6))))))) ? (((((/* implicit */_Bool) arr_2 [i_2 - 1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (17755639638911535721ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) != (((((/* implicit */_Bool) -3952994832712954575LL)) ? (((/* implicit */int) (short)-18426)) : (arr_1 [i_0])))))))));
                }
            } 
        } 
        var_24 = ((/* implicit */signed char) ((unsigned char) ((var_18) << (((((((/* implicit */_Bool) 350848705U)) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) (short)18428)))) - (216))))));
        arr_17 [i_0] = ((/* implicit */unsigned short) ((unsigned char) -6953818222682600482LL));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_5] [5U] [i_5])) ? (((/* implicit */int) arr_5 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_5 [i_5] [i_5] [15]))));
        arr_20 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_18) : (((/* implicit */int) (short)18428))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5] [i_5] [i_5] [i_5] [i_5]))) : (var_19)));
        var_26 *= ((/* implicit */_Bool) var_3);
        arr_21 [i_5] = (-(((/* implicit */int) var_14)));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_25 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_6] [i_6]))) : (3080159186U)));
        var_27 = (~(((/* implicit */int) (unsigned short)2966)));
        arr_26 [i_6] = ((/* implicit */short) var_4);
        arr_27 [i_6] [i_6] = ((/* implicit */int) ((arr_3 [i_6] [i_6] [i_6]) + (((/* implicit */long long int) ((((/* implicit */_Bool) ((6192628877024045400ULL) + (((/* implicit */unsigned long long int) arr_0 [i_6]))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_23 [i_6] [i_6])))))));
    }
    var_28 = ((/* implicit */signed char) ((max(((+(((/* implicit */int) var_9)))), (var_18))) >> (((/* implicit */int) min((max((((/* implicit */short) (_Bool)1)), ((short)2115))), (((/* implicit */short) var_6)))))));
    var_29 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)103))) - (1692563572U))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
}
