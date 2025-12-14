/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_19 ^= var_18;
                var_20 = (min((max(var_1, ((var_8 ? var_1 : 83)))), ((max(8131055384972421129, 83)))));
                arr_4 [i_1] = var_13;
                var_21 *= var_2;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                var_22 = 56;
                arr_11 [i_3] = (((0 & -1) & (var_10 && var_17)));
                var_23 = (max(var_23, -246));
            }
        }
    }
    #pragma endscop
}
