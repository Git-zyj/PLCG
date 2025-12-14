/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_3;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 &= ((var_0 ? (arr_3 [i_1]) : (arr_0 [i_0 + 1])));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_13 = 2038872152;
                        var_14 = (arr_4 [i_0 - 2] [i_0] [i_0 - 2]);
                        arr_11 [i_0 + 2] [i_0] [i_0 - 3] [i_3] = (arr_9 [7] [i_3] [3] [i_1] [2]);
                    }
                    var_15 = ((-32764 ? 2776828460 : (arr_8 [i_0 + 1] [i_1])));
                    arr_12 [i_0 + 1] [15] [5] [i_0] = 1518138824;
                    arr_13 [4] [i_1] [i_0] [i_1] = (var_1 == 0);
                }
                var_16 = ((((!4294967295) ? (var_3 > var_5) : ((var_5 ? (arr_0 [i_0 - 3]) : 4294967295)))));
            }
        }
    }
    #pragma endscop
}
