/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = ((!(((((((arr_0 [i_0]) ? (-2147483647 - 1) : (arr_3 [i_0])))) ? (-2068940293 <= var_5) : (((arr_5 [i_1] [i_0] [16]) * (arr_4 [i_1] [i_0] [i_0]))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_19 = ((~(arr_0 [i_0])));
                    arr_10 [i_1] = (1 < 2165245677);
                }
            }
        }
    }
    var_20 = var_2;
    var_21 = var_18;
    var_22 = (~var_4);
    #pragma endscop
}
