/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max(var_5, 12045);
    var_15 = (max(((var_10 ? (-12045 | var_0) : (~42290))), var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_8 [i_1] [i_1 + 1] [i_2] = (arr_1 [i_0] [i_1 - 1]);
                    var_16 |= 48651;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    arr_11 [i_1] [7] [i_3] [i_3] = ((((32269 ? 16475 : var_5)) << (var_5 + 3475)));
                    var_17 &= (arr_6 [i_0] [i_1] [i_0] [i_0]);
                }
                arr_12 [i_1] [6] [6] = max(((((((arr_6 [i_1] [i_1] [4] [i_0]) >> 0)) + (((60707 >= (arr_9 [i_1]))))))), ((12119 ? var_10 : var_4)));
                arr_13 [i_1] [i_1] = (+-16905);
                var_18 = ((25929 > (min(0, var_4))));
            }
        }
    }
    #pragma endscop
}
