/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91678
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
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (_Bool)1))));
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) var_8))));
    var_15 = ((/* implicit */signed char) ((long long int) var_5));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                arr_7 [(short)9] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) min((arr_3 [i_0]), (((/* implicit */unsigned long long int) (-2147483647 - 1)))))))));
                arr_8 [i_0] = (-(min((arr_3 [i_1 - 2]), (arr_3 [i_1 - 2]))));
                arr_9 [3ULL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [14ULL] [i_1 + 1])))))));
                arr_10 [21] [(signed char)21] [19ULL] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)112))))), (((unsigned long long int) arr_0 [(_Bool)1] [i_1 + 1]))));
                var_16 = ((/* implicit */unsigned long long int) 16711680);
            }
        } 
    } 
}
