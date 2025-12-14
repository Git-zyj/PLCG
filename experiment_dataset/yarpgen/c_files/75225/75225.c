/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((~var_0), (min((~4571962123664200821), (-1350081312 ^ -8084230038438171408)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 &= ((((max((arr_1 [i_2]), (arr_1 [i_2])))) ? (((-4571962123664200821 != (arr_1 [i_1])))) : (arr_1 [i_2])));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        var_21 = 236;
                        var_22 = ((!(arr_5 [i_0 - 1] [i_0] [i_0])));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_23 *= -96;
                            var_24 -= ((((4571962123664200821 >= (arr_6 [i_0 + 1] [i_4] [i_0 + 1]))) ? (arr_6 [i_0 - 1] [i_4] [i_0 + 1]) : (((min((arr_6 [i_0 + 1] [i_4] [i_0 + 1]), 29672))))));
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_25 = (min(var_25, (((~(max(-20, ((((arr_6 [i_1] [i_4] [i_6]) <= (arr_0 [1])))))))))));
                            arr_17 [i_0] [i_0] [i_2] = -3690121529123939169;
                            var_26 = -1934557111;
                            var_27 &= (arr_15 [i_4] [i_6] [i_2] [i_4] [i_6]);
                            var_28 = ((min((arr_5 [5] [i_0] [i_0]), (arr_5 [i_0 - 1] [3] [i_0]))));
                        }
                        var_29 = ((!(arr_0 [5])));

                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 9;i_7 += 1)
                        {
                            arr_22 [i_0] [i_0] [i_2] [i_2] = ((13625 / (arr_19 [i_0] [i_4] [i_2] [3] [i_0])));
                            var_30 = var_18;
                        }
                    }

                    for (int i_8 = 3; i_8 < 7;i_8 += 1)
                    {
                        arr_25 [i_0] [i_0] [i_2] [i_2] = (max((-127 - 1), 117));
                        var_31 += ((((0 - 15989) + (arr_21 [4] [i_1]))));
                    }
                    arr_26 [i_0 - 1] [i_0] [1] [2] = (arr_4 [i_0 + 1] [i_1] [i_2] [5]);
                }
            }
        }
    }
    #pragma endscop
}
