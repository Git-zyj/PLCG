/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83998
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */_Bool) 2147483647);
                var_20 = -727881801;
                var_21 = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0] [i_1 - 2]))))) ^ (((((/* implicit */_Bool) -30)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24576))) : (arr_2 [i_0] [i_1]))))), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 + 1]))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((unsigned short) ((int) 29)));
}
