/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_2] = (arr_5 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_2]);
                    var_20 = (min(var_20, (arr_0 [i_2])));
                    arr_7 [15] [i_1] [i_2] = ((var_5 < -63) * (arr_1 [i_0] [i_0 + 2]));
                    arr_8 [i_2] = (((var_15 < var_10) >= ((var_13 ? (arr_2 [i_0 - 3] [i_0 - 3] [i_0 - 1]) : -63))));
                }
            }
        }
        var_21 = ((var_18 ? 46 : ((var_16 ? 150 : (min((arr_3 [i_0 - 1] [i_0 - 2]), 11666666959189343927))))));
        var_22 |= ((((((255 && 1) ? 1 : ((min(74, var_13)))))) && ((!((min((arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2]), var_4)))))));
        var_23 = (max((((var_6 ? (((arr_1 [i_0 - 1] [i_0]) ? 4326071653046566841 : -63)) : (-30 * var_18)))), var_11));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_24 |= var_17;

        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
        {
            var_25 = ((-((255 ? (arr_3 [i_3] [i_4]) : var_12))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {
                        arr_19 [i_3] [i_3] [i_3] [i_3] [i_3] = min((arr_2 [i_3] [i_3] [i_3]), (min(((min(var_18, (arr_10 [i_3] [i_4])))), var_2)));
                        var_26 = ((((((arr_15 [i_3] [5] [i_3]) ? (((var_0 ? var_0 : (arr_3 [i_6] [i_4])))) : ((177 ? var_7 : -354860084795791209))))) ? ((max(0, (arr_10 [i_3] [i_6])))) : -var_7));
                    }
                }
            }
            arr_20 [2] |= (min((var_4 >= 2147483647), ((min(var_1, 2147483621)))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
        {
            var_27 = (var_0 < 1);
            arr_24 [i_3] [i_7] = 255;
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
        {
            var_28 = (max(var_28, (((-((((((min(var_17, var_12)))) < (var_1 / -4376352939970621892)))))))));

            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                var_29 ^= (((max(-1555937771, 4166783378013281179)) >= (--46)));
                var_30 &= -32;
            }
        }
        for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
        {
            var_31 = ((((((arr_2 [i_10] [i_10] [i_3]) ? (arr_2 [20] [i_10] [i_10]) : (arr_2 [i_10] [i_10] [i_3])))) ? var_12 : (arr_2 [8] [i_10] [i_3])));
            var_32 = var_7;
            /* LoopNest 3 */
            for (int i_11 = 2; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        {
                            var_33 = (max(var_33, (((((((arr_4 [i_11 + 1] [20] [i_3]) ? (arr_4 [i_11 - 1] [22] [i_11 + 2]) : var_10))) ? (~191) : ((18 / (arr_9 [i_12 - 1]))))))));
                            arr_43 [i_3] [i_3] [8] [10] [i_3] = ((((min((((!(arr_36 [i_13] [i_3] [i_3])))), (((arr_5 [i_3] [i_11 - 2] [i_12 + 1] [i_13]) ? (arr_40 [i_3] [i_3]) : var_15))))) ? (min(0, (var_8 * var_5))) : (max(255, (arr_0 [i_12 - 1])))));
                            arr_44 [i_3] [i_12 - 2] [0] [i_12 - 1] = (((~12546) ? ((~(0 ^ 1))) : ((~((min(var_5, (arr_27 [i_10]))))))));
                        }
                    }
                }
            }
        }
        var_34 *= 1;
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 20;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            {
                var_35 = ((!(!254)));
                var_36 = (min(var_36, (((((arr_45 [i_14]) ? var_8 : (-55 * var_7))) * 0))));
                arr_49 [i_14] [10] [i_15] |= ((((min(((var_17 ? var_10 : var_6)), (arr_0 [22])))) ? (((min(var_12, var_3)))) : (min(-var_13, (~var_10)))));
            }
        }
    }
    #pragma endscop
}
