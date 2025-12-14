/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84625
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
    var_17 = ((/* implicit */unsigned int) (!(((((/* implicit */unsigned long long int) 865474073U)) >= (6193621562774544237ULL)))));
    var_18 = ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))) | (min(((~(865474073U))), (((/* implicit */unsigned int) var_9))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 3; i_3 < 20; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((arr_3 [i_1] [i_2] [i_3]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))))));
                        var_20 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) 623934240)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 623934237)) || (((/* implicit */_Bool) (short)-2)))))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (5239213124527978962LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                        var_21 = min(((-(var_14))), ((-(((/* implicit */int) ((_Bool) 9223372036854775807LL))))));
                    }
                    for (unsigned int i_4 = 3; i_4 < 19; i_4 += 3) 
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (unsigned short)41374)) >= (((/* implicit */int) arr_2 [i_0] [i_2] [i_4])))))) ? (((var_13) ? (arr_9 [i_0] [i_4 - 2] [i_4] [i_4]) : (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_10 [i_4] [i_1] [i_2] [i_4] [2ULL])) ? (-623934252) : (134215680))))))));
                        var_23 = ((/* implicit */unsigned int) ((unsigned short) (+(((/* implicit */int) ((arr_8 [i_4]) == (((/* implicit */int) (_Bool)1))))))));
                        var_24 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_11 [i_4 - 3] [i_4 - 3] [i_2] [i_4] [i_0 - 2])), (arr_10 [i_4] [i_0] [i_4] [i_2] [i_4]))), (((/* implicit */unsigned long long int) min((((unsigned short) arr_9 [i_0] [i_1] [i_2] [i_4 - 2])), (((/* implicit */unsigned short) min((var_12), ((signed char)-64)))))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned char) ((max((436933620U), (((/* implicit */unsigned int) arr_6 [i_0 - 1] [i_0] [i_0 - 1])))) << (((((int) ((((/* implicit */_Bool) (short)-14691)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) - (58546)))));
                        var_26 += ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) 1778334601U)))));
                        var_27 = ((/* implicit */unsigned int) ((unsigned long long int) ((12253122510935007397ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63340))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 4) 
                    {
                        for (long long int i_7 = 3; i_7 < 19; i_7 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */short) 12253122510935007363ULL);
                                var_29 = ((/* implicit */unsigned long long int) max((var_29), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 + 1])) * (((/* implicit */int) arr_1 [i_0 + 1]))))), (((arr_12 [i_6] [i_6] [i_0 + 1] [i_6 - 2]) * (((/* implicit */unsigned long long int) -280618990))))))));
                                var_30 = ((/* implicit */long long int) ((short) max((arr_13 [i_7] [i_0] [i_7 - 1] [i_7 - 3]), (((/* implicit */unsigned long long int) (unsigned short)63325)))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) 623934240)) ? (((/* implicit */int) (unsigned short)60243)) : (-623934272)));
                }
            } 
        } 
    } 
}
