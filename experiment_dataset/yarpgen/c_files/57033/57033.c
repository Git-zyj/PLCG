/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [9] [i_1 + 2] [i_1 + 2] = var_2;
                    var_20 = (max(var_20, (((((((min(var_4, var_7))) ? (arr_2 [i_0] [i_1 + 2] [i_2]) : (max(var_4, var_5)))) & ((((((arr_7 [19] [i_1] [i_1] [i_2]) ^ 7792))))))))));
                    arr_9 [i_0] [i_1 - 2] [i_1] [i_2] |= ((~(min((arr_7 [13] [13] [i_0] [i_1 - 1]), (((-(arr_4 [i_0] [i_1] [i_2]))))))));
                    arr_10 [i_0] [i_1] [i_0] = -var_1;
                    var_21 = (arr_6 [i_0] [i_1] [i_2] [i_2]);
                }
            }
        }
    }
    var_22 = var_2;
    #pragma endscop
}
