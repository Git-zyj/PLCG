/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = ((~(arr_2 [i_1])));
                arr_5 [i_1] [i_1] = 120;
                var_15 = (arr_0 [i_0] [i_1 - 3]);

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {

                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        var_16 = (max(var_16, (((((((arr_11 [8] [i_3 - 2] [i_3] [i_0] [i_0] [8]) ? (arr_11 [14] [i_2] [i_2] [i_2] [i_1] [14]) : (arr_11 [i_3 + 2] [i_1] [i_1 - 2] [i_3 - 3] [i_0 - 2] [20])))) ? (((arr_11 [i_0] [i_1 - 1] [i_2] [i_0] [i_0] [16]) ? (arr_11 [i_0] [i_0 - 1] [i_2] [i_0] [i_3] [22]) : (arr_11 [i_0] [18] [i_0 - 1] [i_1 - 2] [14] [2]))) : ((((!(arr_11 [i_0 + 1] [i_0 + 1] [i_2] [12] [i_0] [2]))))))))));
                        var_17 |= (~10);
                    }
                    arr_13 [i_0] [i_1] [i_2] [i_2] = (arr_11 [i_1] [i_1 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1]);
                }
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    arr_17 [i_1] = (arr_9 [i_0 + 1] [i_1] [i_0 + 1] [i_0]);
                    arr_18 [i_1] [i_1] [15] = arr_2 [i_1];
                }
                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    var_18 = 55091;
                    arr_21 [i_1] [i_1 + 1] [i_1] = (~7);
                    arr_22 [i_0] [i_1 + 3] [i_1] = 13098;
                }
            }
        }
    }
    var_19 = ((((var_8 ? var_3 : var_5)) >= (max(((max(65535, 1))), 24543))));
    #pragma endscop
}
