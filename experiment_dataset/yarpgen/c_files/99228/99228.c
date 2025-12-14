/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 &= ((!((((~3441974844) ? -16892126836074313948 : 18400963164079381841)))));
                    var_12 = (max(-var_3, (((var_7 || var_10) ? (min(34, -1192520023548059191)) : (max(var_0, var_4))))));
                }
            }
        }
        arr_7 [i_0] = ((((min(-13383, var_6))) ? (max(1505473696, 0)) : (((((((var_2 ? 1 : var_2))) < (var_3 / 766375574)))))));
    }
    var_13 = (max(var_13, var_2));
    #pragma endscop
}
