/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79945
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        var_12 = (-(((/* implicit */int) arr_9 [i_0] [i_1 + 1])));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 4) /* same iter space */
                        {
                            var_13 = ((/* implicit */unsigned long long int) ((((_Bool) arr_2 [i_0])) ? (((/* implicit */int) ((unsigned short) arr_1 [i_4]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_4 - 2])))))));
                            var_14 = ((/* implicit */signed char) (-(((arr_2 [i_0]) & (var_1)))));
                            var_15 *= ((/* implicit */unsigned int) ((long long int) (_Bool)1));
                        }
                        for (unsigned long long int i_5 = 3; i_5 < 16; i_5 += 4) /* same iter space */
                        {
                            var_16 -= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (10511476172404825711ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))));
                            var_17 += ((/* implicit */unsigned long long int) ((int) var_3));
                        }
                    }
                    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) arr_9 [i_1] [i_2]))));
                        var_19 = ((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_2])) ? (((((/* implicit */_Bool) arr_5 [i_2] [i_0])) ? (((/* implicit */int) ((_Bool) var_3))) : (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0])));
                        arr_19 [i_1] [i_0] [i_1 + 1] [i_1] = ((/* implicit */long long int) var_8);
                        var_20 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((+(2802208458U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_6]))))))))));
                        arr_20 [i_0] [i_0] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_13 [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1] [i_1 + 3])) : (((/* implicit */int) arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 3]))))));
                    }
                    for (long long int i_7 = 4; i_7 < 14; i_7 += 2) 
                    {
                        var_21 *= ((/* implicit */unsigned short) (unsigned char)36);
                        var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)172))));
                    }
                    var_23 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_14 [i_0] [i_1] [i_1] [i_2]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1)))))) & ((-(((/* implicit */int) arr_4 [i_2]))))))) & (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_1] [i_2]))) >= (18446744073709551615ULL))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) arr_17 [(_Bool)1] [i_0]))))))))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_0]))))), (((signed char) ((((/* implicit */_Bool) 2450479965U)) || (((/* implicit */_Bool) var_5)))))));
    }
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) var_5)), (var_4)))))) ? ((+(var_1))) : ((((-(var_4))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_0))))))));
    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) var_5))));
    var_27 = ((/* implicit */_Bool) (+((-(((var_0) / (var_0)))))));
}
