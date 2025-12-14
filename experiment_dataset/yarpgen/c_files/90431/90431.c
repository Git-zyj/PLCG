/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_10));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_16 = var_7;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_3] [i_3] [i_2] [i_3] [i_0] |= ((-1952014969920518397 ? (((arr_7 [12] [i_1]) >> (var_10 + 45))) : -818084731));
                        arr_11 [i_0] [i_0] [i_2] [i_0] [i_3] = (((arr_6 [i_3] [i_2] [i_0]) > (arr_1 [i_3])));
                        arr_12 [i_2] = (var_1 + var_14);
                    }
                }
            }
        }
        arr_13 [17] = (arr_6 [i_0] [14] [i_0]);

        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            arr_16 [i_0] |= (((!(arr_14 [i_4 + 2] [i_4 + 2]))));
            var_17 = var_8;
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    {
                        arr_23 [i_0] [i_0] [i_5] [i_5] [i_6] [i_7] = var_12;

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            var_18 = (arr_19 [i_0] [i_5] [i_0]);
                            arr_26 [3] [3] [i_6] [i_6] = var_8;
                        }
                        for (int i_9 = 3; i_9 < 19;i_9 += 1)
                        {
                            var_19 = ((-7 || (!var_0)));
                            var_20 += (~11603862137673034515);
                            arr_30 [i_0] [i_5] [i_6] [i_0] [20] = (max(-4568, ((((~(arr_17 [i_0] [i_9])))))));
                            var_21 = (max(var_21, 140));
                            arr_31 [i_0] [i_0] [9] [i_0] [i_0] = (+-4568);
                        }
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            arr_36 [i_0] [i_0] [i_6] &= ((-(255 && 1952014969920518396)));
                            var_22 = (max(var_22, (~208044991985385372)));
                            var_23 *= (((((arr_20 [i_10] [i_6] [2] [i_0]) && (var_1 || var_5))) ? ((~(arr_19 [18] [i_6] [6]))) : (((!(arr_24 [i_0] [i_6]))))));
                        }
                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] = var_0;
                            var_24 = ((~((((var_10 >= (arr_15 [i_6] [i_5])))))));
                        }
                        var_25 = (min(var_25, ((((6756 / 4324677320396262293) ? var_3 : (((arr_24 [i_0] [i_5]) + -var_5)))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    {
                        arr_47 [i_0] [i_12] [i_5] [i_12] [i_12] = (-var_13 + (((arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ^ (arr_18 [i_0]))));
                        arr_48 [i_12] [i_5] [i_5] [i_12] [i_13] = var_5;
                    }
                }
            }
            arr_49 [i_0] [18] = (arr_37 [i_5] [i_0] [i_0] [i_0] [i_0]);
        }
        var_26 = var_6;
    }
    var_27 = 56825;
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 18;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 18;i_15 += 1)
        {
            {
                arr_55 [i_14] = (((((((!(arr_28 [i_14] [i_14] [i_14] [9] [i_14]))) ? var_3 : ((((arr_7 [i_15] [i_14]) || 2)))))) ? -var_3 : ((((((!(arr_29 [i_14] [i_15] [i_15])))) < ((-(arr_22 [i_14] [i_15]))))))));
                arr_56 [i_14] [i_14] = ((+(((arr_15 [i_15] [i_14]) | (arr_15 [i_14] [i_15])))));
            }
        }
    }
    var_28 = 9494826121887523027;
    #pragma endscop
}
