/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1;
    var_16 |= var_1;
    var_17 = 1;
    var_18 = var_10;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = (arr_2 [i_0]);
                    arr_8 [i_1] [i_1] = (arr_0 [i_0 + 3]);
                    arr_9 [i_0] [i_1] [i_2] [7] = 1910632697;
                    arr_10 [i_1] [i_1] = ((((123 < (arr_4 [2] [i_1] [1]))) ? (arr_6 [i_0 + 2] [i_0 + 2]) : (arr_4 [i_0] [i_1] [i_0])));
                }
            }
        }
        arr_11 [i_0] [7] = (((((~(arr_2 [11])))) + ((-(arr_4 [i_0] [i_0] [1])))));
    }
    #pragma endscop
}
