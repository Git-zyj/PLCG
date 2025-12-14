/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92509
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
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (+(min((((/* implicit */int) max(((short)-25312), ((short)-3728)))), ((-(((/* implicit */int) var_8)))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */signed char) var_1);
                    var_13 = ((/* implicit */unsigned char) min((((/* implicit */int) var_2)), (155945170)));
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_3);
                    var_14 += ((/* implicit */signed char) min(((~(((/* implicit */int) (short)-13349)))), (((/* implicit */int) var_1))));
                }
            } 
        } 
    } 
}
