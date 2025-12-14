/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -var_15;
    var_19 -= (~-var_16);

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_10;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 -= (!var_14);
                    var_21 = var_13;
                    var_22 = var_2;
                    arr_13 [i_1] = var_5;
                }
            }
        }
    }
    for (int i_3 = 3; i_3 < 18;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_23 = (~var_12);
                    var_24 += (((!(~var_4))));
                    var_25 = var_7;

                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_26 = var_5;
                        var_27 = var_11;
                        var_28 = var_10;
                    }
                }
            }
        }
        arr_23 [11] = var_2;
    }
    var_29 &= var_10;
    #pragma endscop
}
