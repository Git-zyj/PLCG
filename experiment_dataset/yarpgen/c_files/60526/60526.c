/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((var_0 <= (30796 % var_6))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = (max(var_14, (6181669639021647449 >= 6)));

        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            arr_7 [i_0] [i_1 - 3] [i_0] = (max(var_1, (((var_6 <= ((var_12 ? 1 : var_1)))))));
            var_15 *= ((~((((max(150, 10))) ? 10421 : (min(-1, 16486))))));
        }
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_14 [i_3] [i_2 - 1] [i_2] [i_4] = ((-(min((4294967295 ^ var_4), 0))));
                        arr_15 [i_3] = (((min(((14778133860989317295 ? 10428 : 245)), ((var_2 ? var_6 : 19)))) * (((((-32755 ? 65512 : (arr_0 [14]))) >= (arr_11 [i_3] [i_3] [i_3]))))));
                    }
                }
            }
        }
        var_16 -= (((arr_2 [7]) >= (((((var_8 << (((arr_12 [i_0] [i_0] [i_0] [i_0]) - 1509823815)))) - (~var_5))))));
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 9;i_6 += 1)
        {
            {

                for (int i_7 = 3; i_7 < 8;i_7 += 1) /* same iter space */
                {
                    var_17 = (max(62278, (max(6181669639021647428, (-38 >= var_9)))));
                    arr_24 [i_7] = (~62);
                    var_18 = (min(var_18, 255));
                }
                /* vectorizable */
                for (int i_8 = 3; i_8 < 8;i_8 += 1) /* same iter space */
                {
                    arr_27 [i_8] [i_8] = (((arr_25 [i_6 - 1]) < 4611686018427322368));
                    arr_28 [i_5] [i_6 - 1] [i_8] [i_6] = var_11;
                }
                var_19 = (max(var_19, var_11));
                var_20 = (min(var_20, (((~(!var_8))))));
                var_21 = (min(var_21, ((max(-13, (((1902782392 >> ((((max(37500, 245))) - 37475))))))))));
            }
        }
    }
    var_22 &= var_7;
    #pragma endscop
}
