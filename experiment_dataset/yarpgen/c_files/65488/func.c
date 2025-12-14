/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65488
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
    var_14 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */_Bool) (~((-(((/* implicit */int) var_10))))));
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_1])) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) != (arr_3 [i_1 + 1] [i_0]))))))) ? ((-(arr_3 [i_0 + 3] [i_1 - 2]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((arr_4 [i_1]), (((/* implicit */short) var_11))))))))));
                arr_5 [i_0 - 1] [i_1] [i_1 + 1] = ((/* implicit */short) ((unsigned int) min((arr_2 [i_0 + 2]), (((/* implicit */unsigned long long int) var_1)))));
                var_17 = ((/* implicit */signed char) min((((/* implicit */int) var_10)), (((((/* implicit */int) var_1)) % (((/* implicit */int) var_4))))));
                var_18 &= ((/* implicit */_Bool) (-(((max((var_5), (((/* implicit */int) arr_4 [i_1])))) + (((/* implicit */int) arr_0 [i_0 - 3]))))));
            }
        } 
    } 
    var_19 ^= ((/* implicit */unsigned int) (!(min(((!(((/* implicit */_Bool) var_10)))), ((!(((/* implicit */_Bool) (signed char)-118))))))));
}
