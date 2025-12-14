/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 ^= ((-1 ? (((((var_11 >> (((arr_3 [i_1]) - 5946740785518376015))))) ? 4 : (arr_6 [1]))) : (arr_2 [i_0 + 1] [i_0 - 1])));
                    var_14 = (max(((~(arr_1 [i_0] [i_1]))), ((max((arr_1 [i_0] [i_2]), (arr_1 [i_0] [i_0]))))));
                    var_15 &= (((min((arr_3 [i_0 - 1]), (arr_3 [i_0 - 1]))) >> ((((arr_4 [1] [i_0 - 2]) <= var_11)))));
                    arr_8 [i_0] = ((!(arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 2])));
                }
            }
        }
    }
    var_16 = var_11;
    var_17 = (min(var_3, (min(((min(0, var_11))), ((-20240 ? -3 : -3080359615075762659))))));
    #pragma endscop
}
