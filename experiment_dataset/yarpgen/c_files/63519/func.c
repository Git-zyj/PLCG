/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63519
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) -5946865662434163757LL)) ? (arr_3 [i_0]) : (max((5946865662434163776LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) -5946865662434163757LL))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) arr_0 [i_1]))))) ? (((arr_5 [i_2] [i_1] [i_4]) / (((/* implicit */long long int) 3166548146U)))) : (((((/* implicit */_Bool) arr_0 [i_3])) ? (arr_5 [i_2] [(_Bool)1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
                                var_21 = max((((/* implicit */long long int) (_Bool)0)), (((-5946865662434163746LL) ^ (-5853816532962734442LL))));
                                var_22 = ((/* implicit */unsigned int) arr_5 [i_1] [i_1] [i_1]);
                                arr_17 [i_1] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */_Bool) arr_3 [5U]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 += ((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (var_4)));
}
