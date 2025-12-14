/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_16 ? (min(var_10, (max(15378585341421817280, 109)))) : var_15));
    var_18 = (min((!-36), (min(((722897882 ? var_13 : var_7)), var_4))));
    var_19 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_2] [i_0] = (max((~var_11), 6312));
                    arr_8 [i_2] [i_1] [i_1] [i_0] = 53;
                    var_20 *= (arr_3 [i_0]);
                }
            }
        }
    }
    var_21 = ((-var_0 > ((max(var_3, (((0 <= (-32767 - 1)))))))));
    #pragma endscop
}
