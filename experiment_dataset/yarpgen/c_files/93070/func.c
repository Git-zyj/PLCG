/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93070
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) & (((/* implicit */unsigned int) min((((/* implicit */int) var_5)), (var_4))))))) ? (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))))), (max((((/* implicit */long long int) var_8)), (var_2))))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (min((((/* implicit */unsigned int) ((short) var_7))), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        var_13 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) arr_1 [9]))))) ? ((+(arr_0 [i_0]))) : (((/* implicit */unsigned long long int) (+(arr_1 [i_0 + 2]))))));
        var_14 |= ((/* implicit */int) ((((arr_0 [i_0]) / (arr_0 [i_0]))) - (arr_0 [i_0 + 1])));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 1])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 16; i_1 += 3) 
    {
        var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (0) : (((/* implicit */int) (unsigned short)5182))))) ? (((var_2) + (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) arr_4 [i_1]))));
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) arr_3 [i_1 - 1] [i_1]))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            for (unsigned char i_3 = 2; i_3 < 17; i_3 += 4) 
            {
                {
                    var_17 = ((/* implicit */long long int) (-(((/* implicit */int) var_8))));
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (-(((/* implicit */int) ((unsigned char) 11642950605376751883ULL))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        for (long long int i_5 = 2; i_5 < 16; i_5 += 1) 
                        {
                            {
                                arr_18 [(unsigned char)17] [i_4] [i_3] [i_4] [i_5 + 1] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)29723))));
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_1])))))));
                                arr_19 [i_1] [i_2] [i_4] [i_4] [i_5 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)35816)) * (((/* implicit */int) arr_11 [i_1] [i_2] [i_5 + 2]))));
                                arr_20 [i_5] [i_4] [i_4] [i_4] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_4] [i_3 + 2] [i_3 + 2] [i_5 + 4] [i_5])) || (((/* implicit */_Bool) arr_16 [i_4] [i_3 + 2] [i_3 + 1] [i_5 - 2] [i_5 - 1]))));
                            }
                        } 
                    } 
                    var_20 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_13 [i_3 - 2] [i_2] [i_2] [i_1 + 4]))));
                }
            } 
        } 
        var_21 = var_6;
    }
}
