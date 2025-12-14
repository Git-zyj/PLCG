/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [4] |= ((max((min(5712597559142697155, 93)), ((((-99 + 2147483647) << (((arr_1 [i_0] [i_0]) - 59532))))))));
        var_11 = (var_2 + ((var_7 ? (arr_1 [i_0] [i_0]) : 0)));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] = (arr_5 [i_1 - 1]);
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    {
                        arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 - 3] = (((~var_1) / ((((arr_8 [i_1 - 4] [i_1 - 4]) ? -105 : (arr_8 [i_2] [i_2]))))));
                        arr_17 [i_1] [i_1] = ((-(arr_1 [i_1 + 1] [i_2 - 1])));
                        arr_18 [i_2] [i_2] [i_1] [i_2] [i_2] = ((((((arr_11 [i_3] [i_3]) + (arr_13 [i_1] [i_2] [i_2] [i_1] [i_4 + 3])))) ? -214 : (arr_11 [i_1 - 3] [i_1 - 3])));
                    }
                }
            }
        }
        arr_19 [i_1] = ((~(((arr_4 [i_1]) ? -84 : 27863))));
    }
    var_12 = (max(var_8, 10275));
    var_13 = (max(var_13, var_4));
    var_14 = ((((max(var_3, var_6))) ? ((((min(var_1, -56))) ? var_8 : var_5)) : (((~(var_4 != var_1))))));
    #pragma endscop
}
