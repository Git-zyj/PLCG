/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 = 536870911;
        var_17 = 49664;
    }

    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_18 = (((min((arr_3 [i_1 - 1]), 5343831471512573488)) - (1 / 6510056657816084621)));
            var_19 = (((arr_4 [i_2] [1]) ? (((-((14415235952862539745 ? var_4 : var_8))))) : (max(((((arr_5 [i_1 - 1] [i_2]) ? (arr_5 [i_1] [i_2]) : (arr_6 [i_2])))), -var_13))));
            arr_7 [i_2] [1] [i_1 - 1] = ((((((var_3 ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 - 1]))) + 2147483647)) << (min(((13876785946855532348 ? (arr_3 [i_2]) : (arr_1 [i_1]))), ((((arr_3 [i_1]) > 2692292941004187798)))))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        {
                            arr_15 [i_5] [i_5] [i_3] [i_5] [0] [i_5] &= ((max(127, (max(var_13, 16330827909501027274)))));
                            arr_16 [i_1] [i_2] [i_3] [i_3] [i_2] [i_4] [8] = (max((arr_9 [i_1] [i_2]), 393947605));
                            var_20 = ((-((var_1 ? 2115916164208524361 : (arr_0 [i_2])))));
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            var_21 = (((arr_13 [2] [2] [i_1] [5] [1] [i_6]) ? (min(-2115916164208524347, var_1)) : 2115916164208524335));
            var_22 = (1 | (arr_12 [i_1 - 1] [0]));
            var_23 = ((-(min(var_12, 573696163))));
            arr_20 [i_1] = 15358363646325299298;
            arr_21 [i_1] = (25 || -40);
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    {
                        arr_29 [i_1] [1] [i_7] [1] [i_8] [i_9] = (((((((432022850 ? 446917502 : (arr_12 [i_8] [i_8])))) ? ((min(220310952, 1))) : (((arr_22 [i_7]) ? 16330827909501027270 : (arr_8 [i_9 - 1] [i_7] [i_1]))))) == 2115916164208524361));
                        arr_30 [i_1 - 1] [i_7] [i_1 - 1] [i_8] [i_9] = (arr_24 [i_1] [i_1] [i_1 - 1]);
                    }
                }
            }
            arr_31 [i_1 - 1] [i_7] &= ((((min(4354296339981183754, (max(var_0, var_10))))) ? ((((arr_12 [i_1] [8]) <= (arr_12 [i_1] [1])))) : ((((((arr_24 [i_1] [i_7] [i_1]) ? 3889112134 : var_5)) <= ((max(var_3, (-127 - 1)))))))));
            var_24 += (min(((((5790517312191477730 <= 1) == (max(268435456, (arr_14 [i_1 - 1] [1] [1] [i_7] [i_7] [1] [i_7])))))), var_8));
        }
        var_25 = (max(var_25, (arr_26 [5] [i_1 - 1] [i_1])));
    }
    var_26 |= ((((5790517312191477725 ? var_13 : (18446744073709551594 + var_15))) - (var_3 / 1)));
    var_27 += ((var_0 ? ((var_6 ? (~var_2) : var_7)) : ((min(8, var_2)))));
    var_28 |= (4184183690 * var_4);
    #pragma endscop
}
