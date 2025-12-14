/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = max(212, 36);
                    var_18 = var_9;
                    arr_7 [i_0] [i_0] [i_0 + 1] = var_1;
                    arr_8 [i_1] [i_1] [i_0] = (!248);
                }
            }
        }
    }

    for (int i_3 = 4; i_3 < 13;i_3 += 1)
    {
        var_19 = (!32);
        var_20 ^= ((((max(var_10, (arr_10 [i_3 - 4])))) ? ((-(24965 < 221))) : var_8));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_14 [i_4] = 18446744073709551615;

        for (int i_5 = 4; i_5 < 17;i_5 += 1)
        {
            arr_19 [i_4] = 129;
            var_21 = (max(var_21, ((((((arr_1 [i_4]) ? 2295624326835967283 : 3673353093806004157)) < var_11)))));
            arr_20 [i_4] [i_5] [i_4] = (arr_4 [8] [i_5]);

            for (int i_6 = 1; i_6 < 19;i_6 += 1)
            {
                arr_23 [2] [i_4] [i_4] [2] = 234;
                var_22 = ((((((arr_2 [15] [i_4] [i_6]) >> 0))) ? (((var_1 ? 213 : 13319))) : var_6));
            }
            for (int i_7 = 3; i_7 < 19;i_7 += 1)
            {
                var_23 = (max(var_23, (((var_13 || 11641454182651521982) ? var_1 : (((-(arr_25 [i_4] [11] [i_7]))))))));
                var_24 = 216;
            }
        }
        for (int i_8 = 4; i_8 < 18;i_8 += 1)
        {

            for (int i_9 = 3; i_9 < 18;i_9 += 1)
            {
                var_25 = var_9;

                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    var_26 = (((arr_30 [i_8 - 4] [i_8] [i_4] [i_9 - 2]) + (((arr_27 [i_4]) << (44 - 20)))));
                    var_27 = -135;
                    var_28 = (((var_15 && var_3) ? ((~(arr_13 [i_9] [2]))) : (arr_16 [i_4])));
                    var_29 = (max(var_29, (((49223 ? 6 : (arr_13 [i_8 + 2] [i_8 + 2]))))));
                }
            }
            var_30 = ((-(var_1 <= 129)));
            var_31 = (arr_24 [i_4] [17] [i_8 + 2]);
            arr_32 [i_4] = (1 != var_16);
        }
        for (int i_11 = 3; i_11 < 18;i_11 += 1)
        {
            var_32 = (max(var_32, (arr_12 [i_11 - 1] [i_11 - 2])));
            var_33 |= ((var_10 ? (13319 ^ var_3) : ((((arr_27 [i_4]) >= 126890370851284805)))));

            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                arr_37 [i_4] [i_11] [i_11 + 1] [i_12] = 16151119746873584336;
                var_34 = (((arr_27 [i_4]) | var_11));

                for (int i_13 = 3; i_13 < 18;i_13 += 1)
                {
                    var_35 = var_12;
                    arr_41 [2] [i_11] [i_11] [i_4] = (((arr_2 [i_12] [i_4] [i_11 - 2]) != 6805289891058029653));
                    var_36 = (((arr_16 [i_4]) ? (arr_16 [i_4]) : var_9));
                }
                var_37 = ((12 > ((var_15 ? var_15 : -62))));
            }
        }
    }
    var_38 = max(((min((var_12 != -60), var_0))), (((((var_7 ? 29 : var_15))) ? 14007 : ((118 ? 136 : var_6)))));
    #pragma endscop
}
