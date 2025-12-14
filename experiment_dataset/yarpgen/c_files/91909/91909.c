/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_14 ^= 59409;
            var_15 -= 68;
        }
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            var_16 = 223;
            arr_7 [i_0] [i_0] [i_0] = 32;
        }
        for (int i_3 = 4; i_3 < 17;i_3 += 1)
        {
            var_17 += (arr_0 [i_0]);
            var_18 ^= (((arr_3 [i_0] [i_0]) > -126));
        }
        var_19 = (min(var_19, (arr_3 [i_0] [i_0])));
        var_20 = (arr_2 [i_0]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        arr_14 [i_4] [i_4] = (arr_2 [i_4]);
        arr_15 [i_4] = (arr_8 [i_4]);
    }
    var_21 = (max(var_21, ((min(var_2, var_9)))));
    var_22 = (min(var_22, -109));

    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_23 = 105663499395781295;
        var_24 = ((+((((arr_16 [i_5]) == (max(0, (arr_16 [i_5]))))))));
        arr_18 [i_5] = (-127 - 1);
    }

    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 21;i_8 += 1)
            {
                {
                    arr_26 [i_6] [i_7] [i_6] = (arr_17 [i_6]);
                    var_25 = 1;
                }
            }
        }
        var_26 = (arr_19 [i_6]);
        var_27 = (41110 <= 67);
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        arr_31 [i_9] = (!2146927110);
        var_28 = (((arr_21 [i_9] [i_9] [i_9]) > 8331223890579381001));
        var_29 = (arr_23 [i_9] [i_9] [i_9]);
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        arr_36 [i_10] = ((-661284178 ? (arr_10 [i_10]) : (arr_10 [i_10])));
        arr_37 [i_10] = 109;
        var_30 = (arr_11 [i_10] [i_10]);
    }
    #pragma endscop
}
