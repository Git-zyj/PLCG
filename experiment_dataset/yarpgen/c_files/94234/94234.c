/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 += (-(min(0, ((var_14 % (arr_4 [i_0] [i_1]))))));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_12 [i_0] = ((1 ? 2044 : 13576018653393717844));
                        var_16 = (min(var_16, (arr_7 [i_0] [i_0] [i_2] [i_3])));
                    }
                }
            }
        }
        var_17 = (max(var_17, ((((((((var_1 ? (arr_3 [i_0] [10] [i_0]) : (arr_1 [4] [1])))) ? (29732 | 444328487) : (((arr_5 [i_0] [i_0]) ? var_7 : (arr_11 [i_0] [i_0] [13]))))) != (-var_8 <= -1))))));
        var_18 += (arr_7 [i_0] [i_0] [i_0] [i_0]);
    }
    var_19 &= (((~((max(var_9, 1))))) & var_5);

    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_20 &= ((~(arr_14 [i_4])));
        var_21 += (min((min((2729984942 ^ 24), (arr_14 [i_4]))), ((((arr_13 [i_4]) < 1)))));
        arr_15 [i_4] = (((~((-(arr_14 [i_4]))))));
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                {
                    arr_20 [i_4] [i_5] [i_5] = arr_18 [i_5] [i_5];
                    arr_21 [i_5] = (!var_9);
                }
            }
        }
        var_22 = (min((((-(!1)))), ((-(arr_18 [i_4] [i_4])))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        var_23 = (((((1 ? 0 : 2199022993408))) ? (arr_23 [i_7]) : (arr_22 [i_7])));
        var_24 *= 0;
        var_25 = ((((~(arr_23 [i_7]))) + 0));
    }
    #pragma endscop
}
