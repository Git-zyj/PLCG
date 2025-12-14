/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66543
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
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_18 |= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (2147483647) : (var_1)))) ? (((/* implicit */unsigned long long int) var_3)) : (min((((/* implicit */unsigned long long int) arr_1 [i_1])), (3696983576823937265ULL))))), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [(signed char)6] [i_2] [8] [i_3] = ((/* implicit */signed char) ((arr_0 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (5612959828682108051LL) : (var_3))))));
                            var_20 = ((/* implicit */unsigned int) ((_Bool) -576275456));
                            arr_12 [i_2] = ((/* implicit */short) (((!(((/* implicit */_Bool) max((4408100342363513091LL), (var_5)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (max((((((/* implicit */_Bool) -5612959828682108051LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)55))) : (5612959828682108053LL))), (-7505708025041646094LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) min((var_21), (((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)35)) ? (var_8) : (var_5)))) ? (max((((/* implicit */long long int) var_0)), (var_12))) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
}
