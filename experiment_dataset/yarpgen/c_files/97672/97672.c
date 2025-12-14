/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_1;
    var_19 = ((((var_12 ? (min(2147483647, var_17)) : (2748833066 >= var_9))) * ((var_6 ? 1 : (17789 == 959849024)))));
    var_20 = 1116597233;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_21 ^= ((!(1 > 1895)));
                var_22 |= (--5);
            }
        }
    }
    #pragma endscop
}
