/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 ^= -454763558;
                    var_16 = (max(var_16, ((max((max(54333815, -41)), (max(var_7, (arr_6 [i_0 - 1]))))))));
                    var_17 = -43622;
                    var_18 = -41;
                    arr_8 [1] [i_0] [i_0] = (((max((var_6 * var_3), (max(-44, var_12)))) - (((-41 ? (arr_5 [i_0] [i_1] [i_0 - 1]) : -41)))));
                }
            }
        }
    }
    var_19 = (((max(4240633482, 10)) + var_14));
    #pragma endscop
}
