/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_2 > ((~((var_8 ? var_4 : var_2))))));
    var_12 = var_6;
    var_13 = (var_7 | var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [7] [i_1] = var_10;
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 ^= ((14084660928690308525 ? 0 : -483071458));
                            arr_12 [i_0] [18] [i_2 - 3] [i_3] [i_2 - 1] [0] = ((((((((-26 - (arr_10 [5] [i_2])))) ? (((arr_0 [5]) & var_1)) : (0 % 25)))) * (arr_8 [i_0] [13])));
                        }
                    }
                }
                arr_13 [17] = (arr_10 [i_1 - 2] [i_1 - 1]);
            }
        }
    }
    #pragma endscop
}
