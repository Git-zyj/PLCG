/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_15 = (((((~(arr_2 [i_0 + 2])))) ? ((((arr_0 [i_0 + 2]) / (arr_0 [i_0 + 2])))) : (arr_1 [i_0 + 2] [i_0])));
        arr_3 [i_0] = (((4294967295 - -6187130715340441626) - (arr_0 [i_0 + 1])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_16 = ((((arr_5 [i_1]) ? (max(2567131896, var_1)) : (((((arr_0 [i_1]) >= var_0)))))));
        var_17 = (arr_5 [i_1]);
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] |= (max(((-(max((arr_8 [i_2]), 393888156)))), ((((arr_8 [i_2]) >> ((((max((arr_7 [i_2]), (arr_7 [i_2])))) - 186)))))));
        var_18 += (max((arr_7 [22]), (arr_8 [i_2])));
        var_19 *= (arr_8 [i_2]);
        var_20 ^= (arr_8 [i_2]);
        var_21 = (((((!(arr_7 [11])))) > (((((((arr_7 [i_2]) & (arr_7 [i_2])))) < 4194303)))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] = ((-(arr_10 [i_3])));
        var_22 = var_5;
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            {
                var_23 ^= 5;
                arr_18 [i_5] [i_4] [i_4] = (max((min(1838640849, (arr_14 [i_4] [i_5]))), (((!((((arr_13 [i_4] [i_4]) ? (arr_11 [i_4] [21]) : (arr_4 [i_5])))))))));
                arr_19 [i_4] [i_5] = ((var_14 >= (((((arr_14 [i_4] [i_5]) != (arr_14 [i_5] [i_5])))))));
                var_24 = var_7;
            }
        }
    }
    var_25 = var_12;
    var_26 = var_14;
    var_27 = (var_12 || var_12);
    #pragma endscop
}
