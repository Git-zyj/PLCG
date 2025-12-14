/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min((((-6 ? -8192 : var_10))), (max(var_12, 4110128938306609353))))) ? (min(var_1, (var_12 - var_0))) : var_10));
    var_15 = (-7729745854683361008 % 56);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 &= (min(1, 1327650913));
                    arr_9 [i_2] = ((!((max(61557, -5062)))));
                }
            }
        }
    }
    #pragma endscop
}
