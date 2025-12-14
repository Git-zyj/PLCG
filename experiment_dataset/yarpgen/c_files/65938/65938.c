/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 6;i_3 += 1)
                {
                    {
                        var_13 = (((arr_10 [i_1] [i_1] [i_3 - 2] [i_2]) % (arr_11 [i_0] [1] [i_3 - 2] [i_2])));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_14 = var_5;
                            var_15 = 25588;
                            var_16 |= arr_6 [i_2 - 1];
                            var_17 = 5014346574126612729;
                            var_18 = (5014346574126612729 <= 1966080);
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_5 = 3; i_5 < 8;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 8;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {
                        {
                            arr_20 [i_0] [i_1] [i_1] [i_5 - 1] [i_6] [i_5] [i_7 - 1] = (((arr_16 [i_5 - 2] [4] [i_6] [i_6 + 1] [i_5] [i_7 + 1]) || 0));
                            var_19 = 1;
                        }
                    }
                }
            }
            var_20 += 1284;
            var_21 = (((((var_11 ? var_5 : var_2))) ? var_7 : 65524));
        }
        var_22 = (arr_2 [i_0]);
        arr_21 [i_0] = (((((50114 ? -26 : 70368744177663))) ? (((65524 ? var_0 : (arr_9 [i_0])))) : (arr_10 [i_0] [i_0] [4] [i_0])));
        var_23 = ((var_10 ? var_11 : var_8));
    }
    for (int i_8 = 4; i_8 < 23;i_8 += 1)
    {
        arr_26 [9] = (max((arr_23 [i_8 - 2]), -11));
        arr_27 [i_8] = ((var_0 ? 6834299919028609620 : 9292599654126165929));
    }
    var_24 = (min(var_24, var_5));
    var_25 = var_2;
    var_26 = (((((var_7 ? var_5 : var_5) > var_5))));
    var_27 &= ((0 / ((max(var_0, (max(48549, 65520)))))));
    #pragma endscop
}
