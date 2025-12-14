/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97908
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
    var_12 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 858112440U)) ? (858112440U) : (4294967295U)))) ? (4U) : (((4186212070U) >> (((var_3) - (1587044982U)))))))) ? (2589640810U) : (1942775358U));
    var_13 = var_10;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    var_14 = min((((((/* implicit */_Bool) arr_2 [i_2 - 3])) ? (arr_2 [i_2 - 3]) : (var_11))), (min((arr_2 [i_2 - 3]), (arr_2 [i_2 - 3]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_15 = (-(((4294967295U) + (4294967295U))));
                                arr_13 [i_4] [i_3] [i_2 + 3] [i_4] [i_4] = (((-(((((/* implicit */_Bool) var_0)) ? (0U) : (370145640U))))) & (min((((108755232U) >> (((arr_0 [i_1] [i_3]) - (2371248695U))))), ((-(var_8))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_16 ^= max(((-(((arr_5 [i_0]) & (arr_10 [9U] [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1]))))), ((-(max((arr_6 [i_0 + 1]), (var_4))))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 1; i_5 < 13; i_5 += 4) /* same iter space */
    {
        var_17 = ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 3436854855U)))) ? (arr_10 [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 - 1]) : (((arr_1 [i_5 + 1] [i_5 - 1]) * (108755232U))));
        arr_17 [i_5 - 1] = ((/* implicit */unsigned int) ((((3894983082U) & (var_11))) <= (var_6)));
        var_18 = arr_0 [i_5] [6U];
    }
}
