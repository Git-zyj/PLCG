/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_20 = (1 ? (((!(((134 ? 7 : (arr_0 [i_0] [i_0]))))))) : (24 / 7));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_21 = (max(var_21, ((max(((((arr_1 [i_0 + 1]) && (arr_1 [i_0 + 1])))), (arr_1 [i_0]))))));
            var_22 = (+-2);
            arr_6 [i_1] = (arr_0 [5] [i_0 + 1]);
        }
    }
    var_23 = var_15;

    for (int i_2 = 3; i_2 < 9;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((min(var_4, 25)));
        var_24 ^= ((16322519126198369687 || ((max(((-3 ? -8 : 161746070)), 1)))));

        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        arr_19 [i_4] [5] [i_3] [i_4 - 3] [5] [i_4] = 250;
                        var_25 -= (~((((4329323216686978899 * (arr_5 [i_3 + 1]))) * var_15)));
                        arr_20 [i_4] [i_4 - 2] = ((!((((arr_14 [i_4 - 1] [i_4 - 2] [i_4 - 3] [i_4]) ? (arr_14 [i_4 - 1] [i_4 - 2] [i_4 - 3] [i_4]) : var_1)))));
                    }
                }
            }
            arr_21 [i_3] [8] [i_3] = ((((max((((1262282204 ? var_12 : var_3))), 4201127984))) ? (((((min(var_10, var_16))) || ((((arr_12 [i_2] [i_2]) ? var_14 : 1)))))) : var_2));
        }
    }
    for (int i_6 = 3; i_6 < 9;i_6 += 1) /* same iter space */
    {
        var_26 = (((arr_9 [i_6 + 1]) ? (arr_0 [i_6] [i_6]) : (((((((arr_9 [i_6]) ? var_5 : (arr_7 [1] [1]))) >= (arr_15 [i_6] [i_6])))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 9;i_8 += 1)
            {
                {
                    var_27 *= ((((max(var_1, var_17))) ? (((arr_12 [i_6] [i_6]) ? ((max(62766, var_5))) : (((arr_0 [i_6] [i_6 - 3]) ? var_4 : 9223372036854775807)))) : ((((((var_5 ? (arr_17 [i_6 - 3] [2] [1] [i_7] [i_7] [2]) : 0))) ? (arr_13 [i_6 - 3] [i_6] [i_6 - 3]) : (arr_18 [8] [2] [i_8 + 1] [i_7]))))));
                    var_28 = (max(var_28, (((+(((arr_0 [i_8 - 1] [i_6 - 1]) ? (var_3 || var_14) : (min((-9223372036854775807 - 1), var_15)))))))));
                }
            }
        }
    }
    var_29 = var_19;
    #pragma endscop
}
