/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= ((((((arr_0 [i_0 - 2]) ? -25938 : var_1))) ? var_14 : (arr_0 [i_0 + 1])));
        arr_3 [i_0] = (((((~(((var_3 + 2147483647) >> (((arr_1 [9]) - 13844221027209838918))))))) ? ((-(arr_0 [i_0 - 2]))) : -var_2));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_18 ^= ((!(((0 | (arr_5 [i_1] [i_2]))))));
            var_19 = (((((var_2 >> (((arr_5 [i_2] [i_1]) - 43901))))) ? ((max(-26284, (!32736)))) : (!var_1)));
        }
        var_20 = (~var_4);
        var_21 = ((((((arr_9 [i_1]) ? 0 : (arr_9 [i_1])))) ? (!-943543838) : (((arr_9 [i_1]) ? 120 : 4270297693407711580))));
        var_22 = (((((((-(arr_8 [i_1] [5] [10])))) && ((!(arr_7 [7] [i_1] [2]))))) ? (arr_6 [i_1]) : (((!((max(var_0, var_4))))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    arr_21 [i_3] = (var_11 | 1839305840);
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_23 = (max(var_23, (!var_14)));
                                arr_26 [i_3] [i_7] [i_5] [i_6] [i_7] [i_7] |= ((1330 % (arr_23 [i_6 - 1] [9] [i_6] [13])));
                            }
                        }
                    }
                    arr_27 [i_3] [i_3] = var_9;
                }
            }
        }
        var_24 = (max(var_24, var_4));
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
    {
        var_25 = ((~((min(122, 1330)))));
        arr_32 [i_8] [i_8] = (var_4 > var_3);
    }
    var_26 = var_10;
    var_27 |= (((((((-9223372036854775807 - 1) || var_7)))) ? (((1651945859982806408 || var_10) ? var_11 : (max(var_14, var_10)))) : var_6));
    var_28 = ((((((!(!-19108))))) > (max(((max(var_1, 79))), (min(1143914305352105984, 1330))))));
    var_29 = (min((((!(-9223372036854775807 - 1)))), (~13402)));
    #pragma endscop
}
