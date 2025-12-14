/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_13 ^= ((!(arr_3 [i_1])));
            var_14 = ((!(arr_4 [18] [i_1] [i_1])));
            var_15 = (((arr_4 [i_1] [7] [i_0]) == (!33345)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_16 = ((!(arr_3 [i_0])));
                        var_17 ^= 1097463454;
                    }
                }
            }
            var_18 = (((arr_2 [5] [i_1] [i_1]) < var_10));
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
        {
            var_19 = (((arr_7 [i_0] [i_4] [i_4]) ? (arr_7 [i_0] [i_4] [i_4]) : var_9));
            arr_12 [5] [16] [5] = (arr_1 [i_4]);
        }
        var_20 = 7859393421574976313;

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_21 = (29308 != var_3);
            var_22 += (arr_8 [i_0]);
        }

        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            var_23 = ((-1118915369 ? 42491 : (arr_10 [i_0] [i_0] [i_6])));
            var_24 = 82;
        }
        for (int i_7 = 1; i_7 < 15;i_7 += 1)
        {
            var_25 = ((!(((8 ? 1118915369 : 1351699429)))));
            var_26 = ((var_8 ? ((1118915355 ? 0 : var_9)) : 24182));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        {
                            var_27 -= (((arr_18 [i_10 - 1] [i_7]) ? var_2 : (arr_18 [i_10 + 1] [i_7])));
                            var_28 = (((arr_23 [i_10 + 1] [i_10] [i_7] [1] [i_8] [1]) ? (arr_28 [i_10 - 1] [i_10 - 1] [i_10] [8] [i_10 + 1]) : var_3));
                            var_29 = (((arr_15 [10]) ? var_4 : 72));
                        }
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
    {
        var_30 = (min(var_8, ((((min(18446744073709551615, 104))) ? 32760 : 0))));
        var_31 = (((((~(arr_24 [i_11] [10] [i_11] [i_11])))) ? ((~(arr_24 [i_11] [i_11] [i_11] [i_11]))) : (~-2325536104900591359)));
    }
    for (int i_12 = 0; i_12 < 14;i_12 += 1)
    {
        arr_34 [i_12] = (((~(min(456089230, 177)))));

        for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
        {
            var_32 = ((!((((-118 ? 68 : var_11)) <= ((var_10 ? var_9 : var_2))))));
            var_33 = (max(((var_10 & (arr_23 [i_12] [i_13] [i_13] [i_13] [i_13] [i_13]))), ((max((arr_23 [10] [i_13] [12] [1] [i_12] [10]), 49)))));
        }
        for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
        {
            var_34 = ((+(((arr_15 [i_14]) ? -29209 : (arr_15 [i_14])))));
            var_35 = -693457640;
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 14;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 12;i_16 += 1)
                {
                    for (int i_17 = 3; i_17 < 13;i_17 += 1)
                    {
                        {
                            arr_48 [i_14] [i_14] [i_15] [i_16] [4] = ((-(max(((5835556936407541613 ? -737969598 : -8216105825183302610)), ((-38 ? -5835556936407541613 : 3176051927))))));
                            arr_49 [i_17 - 1] [i_14] [i_14] [i_16] [12] [1] = (!var_0);
                        }
                    }
                }
            }
            var_36 = ((89 ? ((((max(4617160427756959458, 7749220737203773090))) ? (((229 ? 0 : 231))) : 45762991)) : (((~(arr_7 [i_12] [i_14] [i_14]))))));
        }
    }
    var_37 *= ((var_12 ? ((~(~var_10))) : -0));
    var_38 = 1374947916;
    var_39 ^= var_10;
    #pragma endscop
}
