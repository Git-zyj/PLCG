/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((-16 ? ((var_8 ? ((59 ? var_5 : var_9)) : ((196 ? var_1 : 0)))) : ((max(565890514, var_4)))));
                var_16 = (max((max(7349395229503855841, 2147483647)), 37192));
            }
        }
    }
    var_17 = 214;
    var_18 = (0 >> 4);
    var_19 = 56293;
    #pragma endscop
}
