/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((-((2474363125 ? -21832 : var_17)))) < ((((4758980116047265651 / var_17) ? (-27 / 1588027520) : ((var_10 ? var_18 : var_1)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = var_15;
                    arr_9 [i_2] [i_0] [3] = ((var_5 ? (((var_4 && (3356907814 <= 1073741792)))) : 23101));
                }
            }
        }
    }
    var_21 = (200 << 1);
    var_22 = ((((((((3035067604 ? 0 : 255))) ? (70 < 35993) : (12 % var_5)))) ? var_7 : (((((var_1 == var_9) || var_12))))));
    #pragma endscop
}
