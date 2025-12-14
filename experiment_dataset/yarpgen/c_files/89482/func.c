/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89482
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
    var_11 = ((/* implicit */long long int) var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_2] = ((/* implicit */short) (!(var_4)));
                    arr_8 [i_0] [i_2] = ((/* implicit */unsigned short) ((775896973) - (((/* implicit */int) var_4))));
                    var_12 = ((/* implicit */_Bool) (~((~(arr_6 [i_2])))));
                    arr_9 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_2])) ? (max((((/* implicit */unsigned long long int) var_2)), (arr_6 [i_2]))) : (((/* implicit */unsigned long long int) var_9))));
                }
            } 
        } 
    } 
}
