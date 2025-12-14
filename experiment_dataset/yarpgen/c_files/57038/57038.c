/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 &= ((((((2774041738 ^ 0) ? ((125 ? (arr_1 [i_0]) : 1)) : 1))) ? (((1 <= (max(var_13, (arr_2 [i_0])))))) : (((!(arr_0 [21]))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = -305731401;
            arr_7 [i_0] [i_0] [i_1] = (((!1) && (((-(arr_5 [i_0] [i_1]))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((min(((max(3989235894, -32750))), ((7 ? var_12 : 1)))) >= ((min(305731393, 1)))));
                        var_18 = ((((((max(var_15, 1))) && (((1 ? var_6 : 1))))) ? ((((min(0, 4176))) >> (((arr_1 [1]) - 6181815958712114319)))) : ((max(-25, (((23142 >= (arr_2 [3])))))))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_16 [i_0] [i_4] [i_0] = (-23165 | var_13);
                            var_19 = (max(var_19, var_5));
                        }

                        /* vectorizable */
                        for (int i_5 = 4; i_5 < 22;i_5 += 1)
                        {
                            arr_19 [i_1] [22] [i_1] [i_1] [i_5] |= (((((1520925556 ? 1024 : 11))) ? var_2 : (1 || 1)));
                            arr_20 [i_0] [i_1] [i_2] [1] [i_5] = (1 * 1);
                            var_20 = (1 && 1);
                            arr_21 [i_1] [i_0] [i_3] [1] = (!1);
                        }
                    }
                }
            }
            var_21 = ((1 ? var_10 : (arr_11 [i_1] [i_1] [i_0] [i_0])));
            var_22 = var_16;
        }
        for (int i_6 = 3; i_6 < 22;i_6 += 1)
        {
            var_23 = (min(var_3, (~var_11)));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 21;i_8 += 1)
                {
                    {
                        arr_30 [i_0] [i_6 - 1] [i_7] [i_8 + 1] = var_2;
                        var_24 = (min(var_24, (max(((((~(arr_1 [i_8 - 1]))) << 1)), 2628579204))));
                    }
                }
            }

            for (int i_9 = 2; i_9 < 22;i_9 += 1)
            {
                var_25 = (!1);
                var_26 ^= ((~(~var_3)));
                arr_34 [i_0] [18] [i_9 + 1] = (min(((((var_8 ? 116 : var_1)))), 1));

                /* vectorizable */
                for (int i_10 = 2; i_10 < 22;i_10 += 1)
                {
                    var_27 = ((250 ? 1 : -81));
                    arr_38 [i_0] [i_0] = (arr_0 [i_6 - 1]);
                }
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        {
                            var_28 = (max(var_28, (((3027 ? -19 : -3026)))));
                            arr_47 [i_0] [i_0] = ((((!(-123 || 3989235900))) ? 1 : 14));
                            arr_48 [i_11] [i_11] [i_11] [18] [i_11] [i_0] [i_11] = (1 && 305731372);
                            arr_49 [i_0] [i_0] [i_0] [i_12] [i_0] |= var_10;
                        }
                    }
                }
                arr_50 [i_6] [i_0] = (min(3729288077, ((max(var_8, ((var_12 ? var_10 : var_14)))))));
            }
            arr_51 [20] &= ((((3729288077 <= (((min(var_2, 1)))))) ? -14 : ((0 ? 1601357621 : var_6))));
        }
    }
    var_29 = var_6;
    #pragma endscop
}
