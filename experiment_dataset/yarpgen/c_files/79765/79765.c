/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = ((18446744073709551601 ? (max(3086539602, var_11)) : (((((arr_3 [i_1]) <= (arr_3 [i_1])))))));
                    arr_8 [i_1] [i_1] [i_2] = (min((max(-1, 1868268601380851592)), ((((arr_4 [i_2 - 3] [i_1] [i_1 + 1]) ? (arr_4 [i_2 - 2] [i_1] [i_1 - 2]) : var_3)))));
                }
            }
        }
    }
    var_13 = 116;
    #pragma endscop
}
