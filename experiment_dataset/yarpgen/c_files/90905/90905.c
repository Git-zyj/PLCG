/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    arr_8 [5] [11] [i_2] = (arr_3 [i_1 + 1]);
                    var_10 = (((var_8 ? 1 : (arr_6 [i_1] [i_2] [i_2 + 1] [i_1 + 2]))));
                    var_11 = ((41163 ? (arr_6 [i_0] [i_1 + 1] [i_1] [i_2 + 1]) : (arr_6 [i_2 + 1] [i_1 + 2] [i_0] [1])));
                }
                arr_9 [i_0 - 1] = (min((((arr_5 [i_0 + 1] [i_1 + 1]) <= (arr_3 [i_0 + 1]))), ((((1 ? (arr_0 [i_0]) : var_6)) <= (arr_2 [i_0] [9])))));
                var_12 = 320468629114968700;
            }
        }
    }
    var_13 = (max(var_13, var_9));
    #pragma endscop
}
