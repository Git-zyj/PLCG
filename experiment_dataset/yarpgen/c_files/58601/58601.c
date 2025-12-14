/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_5 * (~var_17)));
    var_21 = var_16;
    var_22 = (min(var_22, (((-(min(((var_4 ? -10351 : var_0)), (8796496221879733744 > 4))))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_23 += (arr_2 [i_0]);
        arr_4 [i_0] |= (-(arr_0 [i_0 + 2]));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 24;i_1 += 1)
    {
        var_24 -= (((arr_6 [i_1 + 1]) & 18446744073709551601));
        var_25 = (arr_5 [9]);
        var_26 = (min(var_26, (((!(arr_5 [i_1 - 2]))))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_27 = (max(var_27, (min((min((-21346 & 6), var_6)), 0))));
        var_28 = (max(-30591, ((16602692776706156069 ? (arr_7 [i_2]) : (arr_7 [i_2])))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {
                {
                    var_29 = ((18446744073709551594 ^ (((((((arr_15 [i_3]) ? (arr_13 [i_2] [i_4] [15]) : 65535)) > (arr_13 [i_2] [i_2] [i_2])))))));
                    arr_16 [i_2] [i_3] [i_3] = (((((-(arr_11 [i_3] [i_2])))) && (arr_14 [i_2])));
                    arr_17 [10] &= (arr_6 [i_2]);
                    var_30 = (((max(var_14, (arr_15 [i_4 - 1]))) & ((((0 <= (arr_15 [i_4 + 1])))))));
                }
            }
        }
    }
    var_31 ^= 1688408659;
    #pragma endscop
}
