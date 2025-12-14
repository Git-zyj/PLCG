/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (max(var_19, (((((1 * (arr_0 [i_0]))) / (arr_0 [i_0]))))));

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_0] = -2147483631;
            arr_5 [i_0] [i_0] [i_0] = arr_3 [i_0] [i_1 + 1];
            arr_6 [i_0] = (max((arr_2 [17] [17]), (((arr_0 [i_1 + 2]) - (arr_0 [i_1 - 1])))));
        }
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (((max(((min((arr_2 [i_2] [i_2]), var_4))), ((~(arr_7 [i_2]))))) >> (var_8 + 152)));

        /* vectorizable */
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            arr_12 [i_2] = ((((((arr_7 [i_2]) && (arr_7 [5])))) == var_14));
            var_20 = 2147483631;
        }
        for (int i_4 = 3; i_4 < 8;i_4 += 1)
        {
            var_21 = ((((~(arr_10 [i_2] [i_4 - 1]))) | 154));
            arr_15 [i_2] = (-9223372036854775794 + 524427156);
            arr_16 [i_2] = ((((((min((arr_0 [i_4 + 2]), (arr_10 [i_2] [i_2])))) ^ (~2147483631))) - (((var_3 == (((((arr_0 [i_2]) + 2147483647)) << (((((arr_14 [i_2] [i_2]) + 30757)) - 26)))))))));
        }
        arr_17 [i_2] = (min((arr_14 [i_2] [i_2]), (arr_0 [i_2])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                {
                    arr_22 [i_2] [i_5] [i_6 + 1] &= ((4807634490581880803 ? (-2147483647 - 1) : 2147483631));
                    arr_23 [i_2] [i_2] [i_2] = ((!(arr_18 [i_2] [i_6 - 1])));
                    arr_24 [i_2] [i_2] [i_6] = (((arr_18 [i_2] [i_6 - 1]) - ((-37 ? (arr_21 [i_2] [i_2] [i_2]) : (arr_11 [i_2] [i_5])))));
                }
            }
        }
        var_22 ^= ((((((arr_19 [i_2] [i_2] [i_2]) == (arr_19 [i_2] [i_2] [i_2])))) ^ (1284809516 ^ 2203)));
    }
    var_23 = (min((-2147483647 - 1), -2147483642));

    for (int i_7 = 2; i_7 < 15;i_7 += 1)
    {
        arr_28 [i_7 + 3] [i_7 + 2] = (((-32767 - 1) ^ 0));
        arr_29 [i_7] [i_7] = (arr_3 [i_7] [i_7]);
        arr_30 [i_7] [i_7] = ((-(min((arr_26 [i_7 + 2]), (arr_27 [i_7 + 2])))));
        arr_31 [1] = ((-var_14 == ((((((arr_0 [i_7]) ^ 0))) ? (~2147483641) : 54))));
    }
    #pragma endscop
}
