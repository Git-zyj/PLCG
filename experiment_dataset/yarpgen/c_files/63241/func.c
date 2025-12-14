/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63241
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
    var_15 = ((/* implicit */unsigned int) var_4);
    var_16 = ((/* implicit */_Bool) ((var_12) ? (min((((/* implicit */unsigned int) min((var_5), (var_6)))), (var_11))) : (((unsigned int) var_12))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1 + 1] = ((/* implicit */long long int) ((((/* implicit */int) var_1)) >> (((((unsigned int) arr_2 [i_0 + 1])) - (2464168195U)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] [i_2] [i_3] [(_Bool)1] [i_2] [i_0] = 5059871401505757572LL;
                                arr_16 [i_0] [i_1] [(_Bool)1] [(_Bool)1] [0U] [i_4] &= ((/* implicit */unsigned int) ((_Bool) arr_14 [10U]));
                                var_17 *= ((/* implicit */_Bool) var_2);
                                arr_17 [i_2] = ((/* implicit */long long int) (_Bool)1);
                                arr_18 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) (((_Bool)1) ? (((unsigned int) (_Bool)1)) : (arr_14 [i_2])));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_10 [(_Bool)1] [i_1 + 1] [i_2] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (8799646799628613145LL)));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (~(((/* implicit */int) var_8)))))));
}
