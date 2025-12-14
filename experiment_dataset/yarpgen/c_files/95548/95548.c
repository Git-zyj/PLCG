/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_13 = ((~(((arr_2 [i_1]) ? 1 : (arr_2 [i_0])))));
                    var_14 = (arr_2 [i_2]);
                    var_15 = (min(var_15, ((((arr_4 [10]) ? (((arr_6 [i_1]) ? (min((arr_5 [i_0] [i_1] [i_2] [i_0]), (arr_4 [12]))) : 3)) : (((arr_5 [i_0] [i_1] [i_0] [i_0]) ? (arr_5 [i_0] [i_0] [i_1] [i_1]) : (arr_4 [24]))))))));
                    arr_7 [i_0] [i_1] [i_2] = ((1 ? 1 : 1));
                }
            }
        }
        arr_8 [i_0] = (((((+(min((arr_5 [i_0] [1] [i_0] [i_0]), (arr_3 [1] [12] [12])))))) ? (max((arr_3 [i_0] [20] [i_0]), (arr_0 [i_0]))) : (((((max(var_4, (arr_3 [22] [18] [22])))) ? (arr_4 [8]) : 10139)))));
        var_16 = ((((max((arr_4 [12]), (arr_4 [6])))) ? (arr_3 [i_0] [0] [i_0]) : ((14443599564949401959 ? 1 : var_12))));
        var_17 = 147;
    }
    var_18 = (((var_8 ? 1 : 5385451166944986678)));
    #pragma endscop
}
