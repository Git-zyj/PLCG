/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [6] = -var_6;
                    arr_9 [i_0] [10] [i_2] = ((-((-(arr_6 [3] [1] [i_0])))));
                    arr_10 [4] [4] = (max((((var_13 * 55) && (arr_2 [i_1]))), ((((((arr_2 [i_0 - 1]) ^ (arr_4 [i_0])))) && (arr_1 [i_0 - 2] [i_1])))));
                }
            }
        }
    }
    var_15 = ((!((((var_1 ? -90 : var_5))))));
    var_16 = 15;
    #pragma endscop
}
