/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_8));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = var_10;
        arr_2 [i_0] = var_12;

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = ((((1 ? (arr_3 [i_1 + 1] [i_1 + 1] [i_1 + 1]) : (arr_3 [16] [i_1 + 1] [16]))) << (var_9 - 19)));
            var_15 = (70 < var_2);
            arr_6 [i_1] [i_0] [i_0] = 1;
        }
        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_16 = var_8;
                            var_17 = (((3916238387 ? 2461644507 : 21411111)));
                            var_18 = (min(var_18, var_6));
                            var_19 ^= (1 != -1);
                        }
                    }
                }
            }
            var_20 = (max(var_20, ((min(((6 ? -21411098 : var_5)), 1)))));
            var_21 = (min(var_21, ((((max(var_0, (arr_0 [i_0] [i_0]))))))));
            var_22 = 2358421672;
            var_23 = ((((min((arr_11 [i_2 + 3] [i_2 + 3] [i_2]), (arr_11 [i_2 + 3] [i_2 + 3] [i_2])))) << (var_10 != var_0)));
        }
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            var_24 = (((var_6 ^ var_4) << (((-39 >= -318508293) / var_10))));
            var_25 *= ((!(!1)));
            var_26 = (min((arr_18 [i_0] [i_0]), var_10));
        }
    }
    var_27 = var_4;
    #pragma endscop
}
