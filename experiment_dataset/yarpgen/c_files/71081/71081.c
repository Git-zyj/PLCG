/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_9 ? ((((max(var_10, 7))) * (~57706))) : var_10));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = ((max(((-1633747196 ? var_8 : var_7)), -2049318057)));
                    arr_7 [i_1] [i_2] = (((max(((var_6 ? (arr_2 [i_2] [i_0]) : 2049318057)), -8)) & ((((min(2049318029, (arr_4 [i_2]))))))));
                }
            }
        }
    }
    #pragma endscop
}
