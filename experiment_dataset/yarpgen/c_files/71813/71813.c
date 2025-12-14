/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 = var_2;
    var_14 &= ((!var_11) ? var_9 : ((((var_7 || var_4) ? var_8 : (min(7871, var_2))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [2] [5] = ((var_5 << ((((((arr_1 [i_0]) && 33))) - 1))));
        var_15 -= 225;
        var_16 = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_9 [i_1] [i_1] = (~-1962954835);
            var_17 = ((6204925939111860600 ? 6204925939111860611 : (arr_7 [i_1] [i_2])));
            var_18 = (max(var_18, ((((arr_7 [i_1] [i_1]) % (arr_6 [i_1] [i_2] [i_1]))))));
        }
        for (int i_3 = 3; i_3 < 8;i_3 += 1)
        {
            var_19 = (min(var_19, (arr_0 [i_1])));

            for (int i_4 = 2; i_4 < 9;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                {
                    var_20 = (min(var_20, ((((arr_8 [i_1] [i_3 - 2]) <= 12241818134597691005)))));
                    var_21 = (min(var_21, ((((arr_12 [i_5] [i_4 - 2] [i_3] [i_3 + 1]) ? (~1) : ((var_2 ? 1 : 1)))))));
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                {
                    var_22 = (max(var_22, ((((((arr_15 [i_1] [i_3] [6] [i_4 - 2] [i_6]) ? var_4 : var_8))) ? var_3 : var_10))));
                    var_23 = (((arr_7 [i_1] [i_3]) ? ((~(arr_12 [i_1] [i_3 - 2] [i_4] [i_6]))) : (283726776524341248 < var_7)));
                    arr_18 [i_1] [i_4] [i_4] [i_6] = ((~(arr_15 [i_3 + 1] [i_3 + 1] [i_4 + 1] [i_4 - 1] [i_4])));

                    for (int i_7 = 3; i_7 < 6;i_7 += 1)
                    {
                        var_24 ^= (arr_1 [i_1]);
                        var_25 += var_4;
                    }
                }
                var_26 = (1080863910568919040 != var_4);
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 7;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            var_27 ^= 44596;
                            arr_26 [i_4] [i_3] = (((((var_10 << (var_11 - 14196401360814091734)))) != ((~(arr_4 [i_1])))));
                            arr_27 [i_4] = 1469523820;
                            arr_28 [i_3] [i_4] [i_4] [i_3] [i_4] [i_1] = ((~(~var_7)));
                        }
                    }
                }
                var_28 = (var_8 || 510);
                var_29 = (-var_2 ? (arr_23 [i_4]) : 1);
            }
            for (int i_10 = 2; i_10 < 6;i_10 += 1)
            {
                arr_31 [i_10 + 1] [i_3 - 2] [i_3] [i_1] = ((arr_11 [i_1] [i_3] [i_10 + 4]) ? (arr_11 [i_1] [i_3 - 2] [i_3 - 2]) : (arr_6 [i_1] [i_3] [i_1]));
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        {
                            arr_38 [i_1] [i_1] [9] [i_3 - 2] [i_12] [i_10] [i_12] = (~18);
                            arr_39 [i_1] [i_3] [1] [4] = (((arr_6 [i_3 - 2] [i_3] [i_3 - 1]) >= (arr_13 [i_10 + 1] [8] [i_1])));
                            arr_40 [1] [1] [6] [i_11] [i_11] = (11958811754744009098 ? 30 : (((var_3 + 2147483647) >> (577210774 - 577210753))));
                            var_30 &= (((((283726776524341257 ? var_6 : 32))) ? var_1 : (arr_20 [i_1] [0] [i_10 + 4] [i_11 - 1])));
                        }
                    }
                }
                var_31 = var_3;
                arr_41 [i_1] [i_3] [i_10] [i_10 - 2] = var_8;
                var_32 = (max(var_32, -var_9));
            }
            var_33 = (min(var_33, (arr_37 [i_1])));
            var_34 = (((var_9 || 255) && (((1 ? var_7 : 23888)))));
        }
        for (int i_13 = 0; i_13 < 10;i_13 += 1)
        {
            var_35 = (var_0 && 226);
            var_36 ^= (((((~(arr_23 [i_1])))) ? var_2 : ((21389 ? (arr_11 [2] [2] [i_13]) : var_11))));
        }
        for (int i_14 = 1; i_14 < 7;i_14 += 1)
        {

            for (int i_15 = 2; i_15 < 7;i_15 += 1)
            {
                arr_50 [4] [i_14 + 2] [4] [i_1] |= (((((arr_22 [i_15] [i_14] [i_1]) && 2)) ? (arr_25 [i_15] [i_15 - 1]) : var_5));
                var_37 &= ((((!(arr_23 [i_15]))) || (arr_32 [7] [7] [i_14 + 1])));
            }
            arr_51 [4] = (!var_5);
        }
        var_38 = -40365;
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 17;i_16 += 1)
    {
        arr_55 [i_16] = (arr_53 [i_16]);
        /* LoopNest 2 */
        for (int i_17 = 2; i_17 < 16;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 17;i_18 += 1)
            {
                {
                    var_39 = (((arr_53 [i_17 - 1]) ? var_5 : (arr_53 [i_17 - 2])));
                    var_40 = var_8;
                }
            }
        }
    }
    var_41 = var_5;
    #pragma endscop
}
