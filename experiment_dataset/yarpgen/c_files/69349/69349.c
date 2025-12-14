/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_7 ? (max((~var_5), -24799)) : 1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [i_0] [i_0]) ? 0 : (arr_0 [i_0])));
        var_16 = (min(var_16, ((((3232 >= 0) && 177)))));
        var_17 = (min(var_17, (((1 ? (arr_2 [i_0] [i_0]) : (arr_1 [1] [1]))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] = 1;
                    arr_10 [i_1] [i_0] [i_1] [i_2] = (((arr_1 [i_1 + 1] [i_2]) * 2340));
                }
            }
        }
        arr_11 [i_0] = ((((var_6 ? (arr_6 [i_0] [3] [1] [i_0]) : var_13)) - (((!(arr_6 [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_18 = (max(var_18, (((((max((((arr_13 [i_3]) ? 1 : (arr_13 [i_3]))), (arr_12 [i_3] [i_3])))) ? ((-((42 ? 1 : (arr_14 [i_3] [i_3]))))) : (max(((max(230, -18))), ((245 ? 0 : (arr_13 [i_3]))))))))));
        arr_15 [i_3] [i_3] |= (max(((min((min(var_6, 233)), (((184 <= (arr_14 [13] [i_3]))))))), ((-((min(1, (arr_14 [10] [i_3]))))))));
    }
    var_19 = (((65524 ? var_10 : 0)));
    #pragma endscop
}
