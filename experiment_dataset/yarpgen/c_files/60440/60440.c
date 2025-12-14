/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_10;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_21 = (min(var_21, ((((((var_11 || (arr_6 [i_0] [i_1] [i_3]))) && 2147483647))))));
                        arr_13 [1] [i_0] [1] [i_0] [i_2] [i_3 - 1] = (max(var_4, ((~(((var_7 <= (arr_3 [i_0] [10]))))))));
                        var_22 = (((((((-9223372036854775807 - 1) ? (arr_6 [i_1] [i_2] [1]) : (arr_4 [i_0] [i_1] [1]))) ^ (-2147483634 + var_2))) & (arr_2 [7] [i_0])));
                    }
                }
            }
        }
        arr_14 [i_0] = (~(arr_5 [i_0]));
    }
    #pragma endscop
}
