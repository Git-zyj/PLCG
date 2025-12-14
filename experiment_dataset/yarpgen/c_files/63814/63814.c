/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_13 ^= var_0;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = ((var_2 | (((((var_3 == (arr_1 [i_1]))) && (arr_8 [i_2] [i_1] [i_0 - 4]))))));
                    var_15 = ((((((arr_3 [i_1 - 1] [i_0]) ? (arr_3 [i_1 + 1] [i_0]) : (arr_3 [i_1 + 1] [i_1])))) ? (((arr_0 [i_1 + 1]) + (arr_0 [i_1 + 1]))) : ((((arr_1 [i_0]) << (((3661400834 % var_2) - 5476)))))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_16 ^= (min(25, 63));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_17 = (((((((max(var_1, (arr_4 [i_3] [i_1] [i_2 - 3])))) % (arr_4 [i_0 - 2] [i_0 - 1] [i_0 - 2])))) >= var_11));
                            arr_13 [i_2] = ((((max(((1 ? -91 : 26)), (((!(arr_4 [i_3] [i_2 - 3] [i_0]))))))) ? (!18446744073709551615) : var_3));
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_18 = (min(((77 | ((26 ? (arr_1 [i_2 - 2]) : 2810683384944446999)))), (((var_11 * (arr_5 [i_1 - 1]))))));
                            var_19 = ((max((arr_9 [i_0] [i_1 + 1] [i_1] [i_1 - 1] [i_1 + 1] [0]), ((var_3 >> (((arr_8 [i_1] [i_2] [i_1]) - 18047645028862203990)))))) + 1);
                        }
                        var_20 = 8892887301767272632;
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_21 ^= var_8;
                        var_22 = ((((arr_2 [i_0 + 1]) / ((var_11 / (arr_15 [14] [2] [i_0] [i_0]))))));
                        var_23 = ((+(((arr_16 [i_0 + 1] [i_1 + 1] [i_2 + 1] [i_6]) ? (arr_16 [i_1] [i_1 + 1] [i_6] [i_6]) : (arr_8 [i_0] [i_1 + 1] [i_2])))));
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_24 = (i_2 % 2 == zero) ? ((max(((var_0 * (1 == 96))), (((((var_2 ? -1 : 194))) ? (((arr_7 [i_0] [i_2]) >> 43)) : 32767))))) : ((max(((var_0 * (1 == 96))), (((((var_2 ? -1 : 194))) ? (((((arr_7 [i_0] [i_2]) + 9223372036854775807)) >> 43)) : 32767)))));

                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            var_25 ^= -var_4;
                            var_26 &= (min(3661400834, 24));
                            var_27 = (min(var_27, ((max((min(1392, ((-26 ? (arr_15 [i_1 - 1] [8] [i_2] [i_1 - 1]) : 1234094640)))), ((154 ? 2385527772 : 1)))))));
                            arr_23 [i_0] [i_1] [11] [i_2] [i_8] = var_7;
                            var_28 &= var_7;
                        }
                    }
                }
            }
        }
        var_29 = (var_4 ^ -7841);
        arr_24 [i_0] [i_0 - 1] = (arr_19 [i_0 - 1]);
        var_30 = ((-(arr_18 [4])));
    }
    /* vectorizable */
    for (int i_9 = 4; i_9 < 13;i_9 += 1) /* same iter space */
    {
        var_31 = ((365290510766265706 ? 1 : -26));
        var_32 = ((var_12 | (arr_1 [i_9 + 1])));
    }
    var_33 = ((((((var_8 ? var_11 : var_5)) ? var_0 : (max(var_6, var_3))))));
    #pragma endscop
}
