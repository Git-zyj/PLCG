/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58814
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) min(((~(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_0 [i_3 - 1])))))), (((/* implicit */int) arr_0 [i_0])))))));
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) (short)32767)), (6102379347155159146LL))) + (max((((/* implicit */long long int) 3956047223U)), (-1LL)))))) + (((((/* implicit */unsigned long long int) ((var_11) - (((/* implicit */long long int) var_8))))) - (arr_1 [i_0] [i_0]))))))));
                                var_19 += ((/* implicit */long long int) ((((_Bool) -8LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_8 [i_3 - 1] [i_3] [i_3] [i_3 - 1])))) : ((~(((4294967295U) - (var_10)))))));
                                var_20 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((_Bool) arr_7 [13] [(unsigned char)8] [i_3] [i_3] [i_3 - 1] [i_3 - 1]))), (max((((/* implicit */long long int) var_16)), (((((/* implicit */_Bool) var_0)) ? (-20LL) : (var_2)))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) (short)696);
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 11; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 702764517)) ? (1671275805U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)212))))) << (((((var_3) + (arr_14 [i_0] [i_0] [i_0] [i_0]))) - (528560789381708534LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (6547458824545018265ULL)));
                                var_23 = ((/* implicit */long long int) max((var_23), ((~(((((/* implicit */_Bool) arr_14 [i_6] [i_6 + 3] [i_6 - 1] [i_6 + 1])) ? (arr_14 [i_6] [i_6 - 1] [i_6 - 1] [i_6 + 2]) : (-1LL)))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_15 [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_16))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 702764502)) ? (-1LL) : (var_11)))) ? (((((/* implicit */_Bool) -5LL)) ? (((/* implicit */long long int) -702764517)) : (4294967295LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)6532)))))))) : (((((((/* implicit */_Bool) var_0)) ? (12671913730590951080ULL) : (arr_8 [(short)4] [(unsigned char)2] [i_5] [i_5]))) | (((/* implicit */unsigned long long int) max((-1LL), (((/* implicit */long long int) var_8)))))))));
                    var_25 = ((/* implicit */int) (unsigned char)81);
                    arr_19 [i_5] [i_5] [i_0] [i_5] = ((/* implicit */unsigned long long int) (unsigned char)255);
                }
                for (unsigned char i_8 = 0; i_8 < 15; i_8 += 4) 
                {
                    arr_22 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)253)) ^ (((/* implicit */int) var_9))))), (arr_14 [i_0] [(short)8] [i_0] [10LL])))) ? (30188280U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 702764493)))))) < (3203363680095984740ULL))))));
                    var_26 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (short)32767)) ? (arr_2 [i_0]) : (((/* implicit */long long int) 3320380073U)))), (((/* implicit */long long int) -702764527))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_9 = 2; i_9 < 14; i_9 += 4) 
                {
                    var_27 = (~(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (12ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1156))))));
                    arr_25 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(983090694508910135ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_1] [i_1])) >> (((-702764504) + (702764508)))))) : (18047067517105004063ULL)));
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3458764513820540928LL)) ? (((/* implicit */long long int) 4294967289U)) : (-1LL)));
                    var_29 &= ((/* implicit */unsigned int) arr_12 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 - 2] [i_9 - 2] [i_9 - 2]);
                }
            }
        } 
    } 
    var_30 &= ((/* implicit */unsigned int) (~(((/* implicit */int) ((max((18446744073709551615ULL), (var_12))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 702764512)) ? (702764509) : (-702764522)))))))));
    var_31 = ((/* implicit */long long int) var_9);
    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_12)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_4))))))))))));
}
