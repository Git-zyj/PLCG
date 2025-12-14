/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_13 = (min(var_13, var_12));

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_14 *= ((1 & (arr_2 [i_0 - 1] [i_1 - 1])));
            var_15 = ((+(((var_7 + 2147483647) >> (((arr_3 [i_0] [i_0]) - 1035564468))))));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_7 [i_0 - 1] [i_0] [i_0] = (arr_3 [i_2] [i_2]);

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                arr_12 [i_0] [i_2] [i_2] [2] = (16439177220410463244 ? ((0 | (arr_6 [i_3]))) : (((1127563685 ? (arr_9 [i_0] [i_2] [i_3] [i_2]) : var_4))));
                var_16 = (arr_11 [i_3] [i_0] [i_0]);
            }
        }
        var_17 = (max(var_17, var_12));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    var_18 |= (!23);

                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = (12020738425832761120 ? 255 : 44);
                            arr_26 [i_0] = (((arr_1 [i_0 - 1] [i_0 - 1]) ? (arr_16 [i_0 + 1] [i_0 - 1]) : (1877 ^ var_9)));
                            var_19 = ((-var_8 % (arr_5 [i_0] [i_0] [i_0])));
                        }
                        var_20 = (max(var_20, (var_1 > 8372224)));
                    }
                    var_21 = (var_8 | var_2);
                    var_22 = (((!5092550180056844304) ? (arr_1 [i_0 - 1] [i_0 - 1]) : ((((arr_4 [i_0] [i_4] [i_5]) != (arr_18 [i_0]))))));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_23 = (max(var_23, ((((min(var_3, (arr_27 [1])))) ? (((!(arr_27 [i_8])))) : 1127563685))));
        var_24 = (max((((arr_27 [i_8]) | (arr_28 [i_8]))), (-99 > 3167403584)));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                for (int i_11 = 4; i_11 < 24;i_11 += 1)
                {
                    {
                        arr_35 [i_8] [i_8] [i_10] [i_11] = (arr_34 [i_8] [i_11 - 1]);
                        var_25 -= (min((8 > 1059499199), ((!(arr_31 [i_8] [i_9] [i_11 + 1] [i_8])))));
                        arr_36 [i_8] [i_9] [i_9] [i_10] [i_11] = (((((min(65186, var_10)))) ^ (((((!(arr_31 [i_11] [i_10] [i_9] [1])))) << (-220 + 230)))));
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 12;i_12 += 1)
    {
        var_26 = arr_6 [i_12];
        arr_39 [i_12] [4] = ((167 && (((6933345423607380309 ? (min(681504728176187113, 3167403611)) : 8616277276925898612)))));

        for (int i_13 = 3; i_13 < 10;i_13 += 1)
        {
            var_27 = max(((~((37340 >> (86 - 62))))), (((-1127563725 > (var_5 - var_3)))));
            var_28 = (((var_4 == (536870911 ^ var_7))) ? ((((12020738425832761125 > 15057760422717591180) > (arr_3 [i_13 + 2] [i_13 + 1])))) : (((var_9 | 4544916570720154453) ? ((174 ? 21436 : 170)) : 23313)));
            var_29 = (min(var_29, 1548746633));
            var_30 = (min(var_6, (((max(89, -7987862091888321360))))));
        }
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            var_31 = (!((min(-31, (!var_1)))));
            arr_47 [i_14] [i_14] = (arr_10 [i_14] [i_12]);
            arr_48 [i_12] [i_12] = ((((min((~350), (~var_8)))) ^ ((((max(-97, var_5))) ? ((1 ? 356 : -2209688679650534649)) : var_10))));
        }
    }
    var_32 *= (min((min((var_1 || var_11), var_11)), var_1));
    var_33 = ((max(((30127 ? -19097 : var_6), var_5))));
    #pragma endscop
}
