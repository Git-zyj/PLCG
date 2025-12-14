/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78457
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
    var_19 &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_14), (((/* implicit */signed char) var_12))))))))) + (((max((var_0), (((/* implicit */unsigned long long int) var_3)))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [(signed char)15] = ((/* implicit */signed char) min((min((arr_5 [i_0] [i_1]), (arr_5 [i_0] [i_1]))), (arr_5 [i_0] [(_Bool)0])));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((/* implicit */signed char) arr_0 [i_0] [i_1])), (arr_3 [i_0])))), (min(((~(arr_1 [i_0]))), (((/* implicit */unsigned long long int) (!(arr_0 [i_0] [i_1]))))))));
            }
        } 
    } 
}
