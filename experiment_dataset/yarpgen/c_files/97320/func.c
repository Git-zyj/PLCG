/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97320
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
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (~((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_4))))))))));
    var_21 &= ((/* implicit */short) var_7);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((402653184U) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(_Bool)1] [i_1] [(unsigned short)22])))))))))));
                /* LoopSeq 4 */
                for (unsigned char i_2 = 2; i_2 < 24; i_2 += 3) 
                {
                    var_23 -= ((/* implicit */unsigned long long int) ((arr_8 [0LL] [(_Bool)1] [22LL] [0LL]) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1901529860U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                    var_24 = ((/* implicit */long long int) max((((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned long long int) var_4))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (arr_5 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */unsigned int) var_18))));
                    var_25 |= ((/* implicit */unsigned int) var_0);
                }
                /* vectorizable */
                for (unsigned int i_3 = 2; i_3 < 24; i_3 += 4) 
                {
                    var_26 = ((/* implicit */unsigned int) var_14);
                    arr_11 [i_0] [i_3] [i_1] [i_0] = ((/* implicit */unsigned short) 0U);
                }
                for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    var_27 -= ((/* implicit */short) ((unsigned short) arr_4 [10LL] [i_1] [10LL]));
                    var_28 = ((/* implicit */long long int) max((var_28), (((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_12 [i_4] [i_4] [10LL] [i_0])) ? (arr_0 [(unsigned short)0]) : (((/* implicit */long long int) 268402688U)))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_1)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((4026564608U) - (0U)))))) : (((arr_4 [10U] [i_0 - 1] [10U]) / (arr_4 [22ULL] [i_0 - 2] [22ULL])))))));
                    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((unsigned char) var_7)))));
                }
                /* vectorizable */
                for (short i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    var_30 = arr_13 [i_0] [i_1] [i_1] [i_0];
                    var_31 = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
                    var_32 = ((/* implicit */long long int) max((var_32), (((arr_17 [i_5]) / (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (arr_18 [i_0 + 1] [i_0 + 1])))))));
                    var_33 = ((/* implicit */unsigned char) arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_5]);
                }
                /* LoopNest 3 */
                for (short i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            {
                                var_34 = ((/* implicit */short) (((((_Bool)1) ? (((arr_27 [i_0] [i_0] [(short)2] [i_7] [i_0]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))) * ((~(((/* implicit */int) ((unsigned char) (unsigned char)95)))))));
                                var_35 = ((/* implicit */unsigned short) (_Bool)0);
                                var_36 = ((_Bool) (unsigned char)236);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_37 = ((/* implicit */_Bool) min((var_37), (((((((/* implicit */_Bool) ((1178570632U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((unsigned short) arr_17 [(unsigned char)2]))) : (((/* implicit */int) var_18)))) > (((/* implicit */int) ((((_Bool) 2799596233U)) && (((/* implicit */_Bool) ((long long int) arr_29 [i_9] [i_9]))))))))));
        var_38 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)49152)) && (((/* implicit */_Bool) -57637580851782925LL)))) ? (max((arr_29 [i_9] [i_9]), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)20))) ^ (0LL)))) | (((((/* implicit */_Bool) arr_20 [i_9] [i_9] [i_9] [i_9])) ? (arr_23 [i_9] [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))))));
    }
}
