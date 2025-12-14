/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 31;
    var_19 = var_6;
    var_20 |= min(1, 11);

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_21 = (min(var_21, (arr_3 [i_0 + 1])));
        var_22 |= ((min(31, 2305842871774740480)));

        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                var_23 = (((arr_4 [i_2] [i_2 - 1] [i_2 - 1]) > (arr_4 [i_2 - 1] [9] [i_2 + 1])));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_24 |= (arr_5 [i_2 + 1] [i_4 - 1] [10]);
                            var_25 = (max(var_25, (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 1] [5])));
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    var_26 |= ((1 ? 32965 : -1));
                    var_27 = (arr_12 [i_0 - 1] [i_0] [i_1 + 1] [i_5]);
                    var_28 = (((arr_8 [i_1] [i_0 + 1] [i_1]) >= 97));
                    var_29 &= ((((((arr_16 [i_0 - 1] [i_0 - 1] [1] [10] [i_0] [i_0 - 1]) % -116))) ? 6173 : (arr_14 [4] [i_2 - 1] [i_1] [i_1] [4])));
                }
                var_30 = (min(var_30, 0));
            }
            /* vectorizable */
            for (int i_6 = 1; i_6 < 15;i_6 += 1) /* same iter space */
            {
                var_31 *= 2;
                var_32 = ((arr_20 [i_6 + 2] [i_1 - 1] [i_0 + 1]) ? (arr_10 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1]) : 57);
            }
            for (int i_7 = 1; i_7 < 15;i_7 += 1) /* same iter space */
            {
                var_33 = (max(((3019940448655900222 / (arr_6 [i_7 + 1] [i_7] [i_7 + 2]))), ((min(33, (arr_22 [i_0] [i_0 - 1] [i_1 - 3]))))));
                var_34 = 636496001;
                var_35 |= 1;
            }
            var_36 = 1;
        }
    }
    var_37 = ((18418201498157494625 <= (min(-var_4, var_5))));
    #pragma endscop
}
