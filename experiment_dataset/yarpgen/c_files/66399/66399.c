/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = (min(2, 1));

                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    var_16 = (min(var_16, ((((((((((min(var_11, (arr_6 [18] [i_1])))) + 2147483647)) >> (((arr_0 [i_0] [i_2]) - 155))))) <= ((32704 ^ (var_6 | -32705))))))));
                    arr_8 [i_0] [i_0] [i_0] &= (arr_4 [i_2] [i_1] [i_0]);
                    arr_9 [i_2] [i_1] [i_0] [18] &= (~var_2);
                    var_17 = -32726;
                    arr_10 [7] [7] [7] = 1;
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    arr_15 [i_0] [i_1] [i_0] [i_3] = ((((((arr_6 [i_1] [i_3]) ? var_12 : var_0)) ^ (var_6 * -54))));
                    arr_16 [i_3] [i_0] [i_0] = (((max((arr_0 [i_0] [i_0]), -32722))) / (arr_0 [i_3] [i_3]));
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_18 = (min(var_18, var_8));
                                arr_25 [i_0] [i_4] [i_4] [i_4] [i_5] [5] = ((min((arr_21 [i_5] [i_6]), (arr_21 [2] [i_1]))));
                            }
                        }
                    }
                    arr_26 [5] [i_1] [i_1] [i_4] = (arr_4 [i_0] [8] [i_4]);
                    arr_27 [i_0] [i_0] |= (max(((var_4 ^ (min((arr_23 [i_0] [i_1]), (-2147483647 - 1))))), ((max((arr_20 [i_1]), (arr_20 [i_0]))))));
                }
            }
        }
    }

    for (int i_7 = 1; i_7 < 21;i_7 += 1)
    {

        for (int i_8 = 2; i_8 < 24;i_8 += 1) /* same iter space */
        {
            arr_32 [i_7] [i_7] [i_7 - 1] = (((17590 && 0) ? (max((arr_29 [i_7]), ((min(176, var_2))))) : (((((min(56, var_5))) ? (arr_28 [14] [i_8]) : (-32767 - 1))))));
            arr_33 [22] &= (((var_14 * ((~(arr_29 [i_7]))))));
            arr_34 [i_7] [i_7] = (arr_28 [i_7] [i_7]);
        }
        for (int i_9 = 2; i_9 < 24;i_9 += 1) /* same iter space */
        {
            arr_37 [12] [i_7] = var_9;
            arr_38 [i_7 + 2] [i_9] [i_7] = (min((((arr_29 [i_9 + 1]) ^ (arr_29 [i_9 - 1]))), ((min(53, 2147483647)))));
        }
        for (int i_10 = 2; i_10 < 24;i_10 += 1) /* same iter space */
        {
            arr_41 [i_7] [i_7] [i_10 - 2] = (18446744073709551602 ? 1 : 0);
            var_19 ^= arr_40 [4];
        }
        for (int i_11 = 2; i_11 < 24;i_11 += 1) /* same iter space */
        {
            arr_46 [i_7 + 3] [i_7] [i_7] = (((var_0 ^ var_4) / 1073217536));
            arr_47 [i_7] [i_11] = -32694;
            var_20 -= 1;
        }
        arr_48 [i_7] = (~1073217529);

        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            var_21 = (max(var_21, 32719));
            var_22 = (max(var_22, var_4));
            arr_51 [i_7] [i_7] [i_7] = ((!((max(var_4, -32705)))));
        }
    }
    var_23 = (min(var_3, (!32719)));
    #pragma endscop
}
