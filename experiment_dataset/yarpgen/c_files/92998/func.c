/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92998
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
    var_11 |= ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) ((-2147483646) > (((/* implicit */int) var_3))))) >> (((min((var_1), (((/* implicit */long long int) (short)9865)))) + (6462463692010699526LL)))))), (min((var_9), (var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [i_0] [13U] = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1] [i_1])) != (((/* implicit */int) arr_0 [i_0 - 1]))))));
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((short) arr_1 [i_1] [i_0])))));
                arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned long long int) max((((/* implicit */short) arr_3 [i_0] [i_1] [i_0 - 1])), (min((((/* implicit */short) arr_3 [i_0 + 2] [i_0] [i_0 - 1])), ((short)992)))));
            }
        } 
    } 
}
