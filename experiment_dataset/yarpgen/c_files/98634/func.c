/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98634
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
    var_17 = ((/* implicit */unsigned int) min((var_17), ((-(var_2)))));
    var_18 = var_14;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_19 = ((var_5) << ((((~(max((var_6), (var_5))))) - (554907082U))));
                var_20 = ((((/* implicit */_Bool) (-(var_11)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [i_0] [i_1]) : (arr_0 [i_0]))) : ((+(arr_4 [i_1] [i_1]))));
                var_21 = ((((/* implicit */_Bool) 4238237627U)) ? (max((655364193U), (295027535U))) : (min((var_4), (((unsigned int) var_2)))));
                var_22 = ((/* implicit */unsigned int) max((var_22), (max((arr_0 [8U]), (((((/* implicit */_Bool) min((arr_0 [i_1]), (1269221716U)))) ? (((unsigned int) arr_4 [i_0] [i_0])) : (min((var_4), (var_2)))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            arr_9 [i_3] [i_3] |= ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) min((arr_8 [i_3] [i_1]), (arr_5 [i_0] [i_0] [i_0] [i_0])))) ? (var_3) : (arr_1 [i_2] [i_3]))) : (((arr_5 [i_0] [i_1] [i_0] [i_1]) >> (((arr_5 [i_0] [2U] [i_0] [0U]) - (2998255920U))))));
                            var_23 *= (+(((((/* implicit */_Bool) ((unsigned int) arr_3 [7U] [i_3]))) ? (((((/* implicit */_Bool) var_7)) ? (3142205588U) : (var_0))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_5 [i_0] [14U] [i_0] [0U]) : (var_9))))));
                            var_24 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [0U] [i_2])) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_3] [i_3])) ? (var_2) : (var_1))) : ((~(536870880U)))))) ? (arr_2 [i_0] [i_2 - 1]) : (((((((/* implicit */_Bool) var_10)) ? (var_6) : (arr_0 [i_2]))) ^ (((var_15) << (((var_2) - (3392383242U))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
