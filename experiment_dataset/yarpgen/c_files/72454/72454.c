/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(min(116702432695851454, 1290540361098781088))));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_15 ^= (max((((max(2097148, (arr_0 [i_0 + 3]))) >> (((arr_1 [i_0]) + 24154)))), ((+(((arr_0 [i_0]) ? (arr_0 [i_0]) : -1290540361098781092))))));
        var_16 -= (arr_1 [i_0]);
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    arr_10 [i_1] = (arr_4 [i_1 - 1] [i_1 - 1]);
                    var_17 = var_9;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 9;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 10;i_6 += 1)
                {
                    {
                        arr_17 [i_1 - 1] [i_4] [i_5] [i_5] [i_6] [i_4] = (arr_16 [i_1] [i_1] [9] [i_1] [i_5] [i_1]);
                        arr_18 [i_5] = var_5;
                    }
                }
            }
        }
        var_18 = (max(((1535430634916021929 ? (arr_11 [i_1 - 1] [i_1] [i_1 - 1]) : -28)), 1));
        arr_19 [i_1] = -288230101273804800;
    }
    for (int i_7 = 4; i_7 < 24;i_7 += 1)
    {
        var_19 &= (~-1290540361098781095);
        var_20 ^= (min(-19618, -6491));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        var_21 = ((((24 >> (-1290540361098781092 + 1290540361098781119)))) ? -2097152 : 19638);
        var_22 = 9223372036854775807;
        arr_24 [i_8] [i_8] = (!-1290540361098781092);
    }

    /* vectorizable */
    for (int i_9 = 1; i_9 < 22;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            arr_32 [12] [i_10] = (1 == (arr_27 [i_9 + 3]));
            arr_33 [6] [i_10] &= (19599 - 444121493787093619);
            var_23 = 0;
            arr_34 [i_10] [i_10] [i_10] = ((((-80 ? 0 : -2097152)) ^ (((((arr_28 [i_10] [i_10]) + 9223372036854775807)) << (6689504846147293244 - 6689504846147293244)))));
        }
        for (int i_11 = 1; i_11 < 23;i_11 += 1)
        {
            var_24 &= 1;
            arr_37 [i_11] [i_11] = (!65);
            var_25 &= ((-(arr_26 [i_11])));
            var_26 *= ((-36 ? (arr_21 [i_9 + 2]) : 36));
        }
        var_27 = (min(var_27, (((~(arr_26 [i_9 - 1]))))));
    }
    #pragma endscop
}
