/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (!3371726208)));
    var_19 = (((((var_17 ? var_17 : (var_13 + var_11)))) ? (max(var_8, -30)) : var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 ^= 3371726208;
                    var_21 = (max(var_21, (1152921504472629248 - var_8)));
                }
            }
        }
    }
    #pragma endscop
}
