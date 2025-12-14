/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69994
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_2] = ((/* implicit */int) max((((/* implicit */signed char) ((var_6) < (((/* implicit */long long int) max((((/* implicit */int) arr_2 [i_1] [i_1])), (var_3))))))), (var_7)));
                    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) max((((/* implicit */int) arr_4 [i_0] [i_1] [i_2])), (min((968445723), (((/* implicit */int) (_Bool)1)))))))));
                    var_13 &= ((/* implicit */_Bool) arr_0 [i_0] [i_2]);
                    arr_7 [i_0] [i_2] [1ULL] = (!(((/* implicit */_Bool) -166752258)));
                    var_14 = max((arr_5 [i_2] [i_1] [i_1] [i_2 + 1]), (((((/* implicit */_Bool) 436814076)) ? (5076940671509570897ULL) : (arr_5 [i_2] [i_1 + 1] [i_0] [i_0]))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (_Bool)0))));
}
