/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60619
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
    var_19 = ((/* implicit */signed char) var_15);
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_7))));
    var_21 |= ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (short)32746)))), (((/* implicit */int) max((var_4), (var_4))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) max((((unsigned long long int) arr_2 [i_0] [i_2 + 3])), (((/* implicit */unsigned long long int) (~(arr_2 [i_1] [i_2 + 2]))))));
                    arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_14);
                    arr_11 [i_0] [i_0] [i_1] = (~(((unsigned long long int) arr_3 [i_1])));
                    var_22 = ((/* implicit */_Bool) -293643276);
                }
            } 
        } 
    } 
    var_23 = max((max((((((/* implicit */_Bool) 2147483647)) ? (15320425965626470964ULL) : (((/* implicit */unsigned long long int) -216332504)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_8)), (var_10)))))), (var_16));
}
