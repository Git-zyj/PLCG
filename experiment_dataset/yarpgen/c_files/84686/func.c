/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84686
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
    var_12 += ((/* implicit */long long int) (!(((/* implicit */_Bool) max((-1LL), (((long long int) var_1)))))));
    var_13 += min((((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned short) var_3))))) ? (var_7) : (var_0))), (((/* implicit */int) (_Bool)1)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_14 += ((((((/* implicit */int) ((((/* implicit */unsigned int) var_10)) == (var_2)))) * (((((/* implicit */_Bool) var_10)) ? (var_7) : (arr_12 [i_0] [(_Bool)1] [i_2] [i_3] [4U]))))) * (((/* implicit */int) ((short) arr_0 [i_0] [i_1]))));
                                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_0)) : (arr_1 [i_4] [(short)18]))), (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (var_8)))))), (((/* implicit */long long int) ((((arr_3 [i_3] [i_4 + 1]) || (((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) var_7))))))))));
                                var_16 += ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_12 [i_3 - 2] [i_4 - 1] [i_2] [i_2] [i_4])) ? (((/* implicit */long long int) arr_12 [i_3 + 1] [i_4 - 1] [(_Bool)1] [i_3] [i_4])) : (var_9)))));
                                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_7 [i_0] [i_1] [i_3 - 1] [i_3 - 1]))) ? ((~(arr_11 [i_0] [i_1] [i_3 + 2] [i_1] [3LL] [i_4 + 1]))) : ((~(var_5)))));
                                var_18 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_3] [i_1] [i_0]))));
                            }
                        } 
                    } 
                    var_19 += ((/* implicit */short) ((((/* implicit */_Bool) 4565376758738321051LL)) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-6775)))) : (-1926916143)));
                }
            } 
        } 
    } 
}
