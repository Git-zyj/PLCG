/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = (max((min((arr_5 [i_0] [i_0] [i_0]), (arr_1 [i_0]))), (arr_0 [i_0])));
                    arr_7 [6] [i_2] |= (((arr_4 [i_0] [4] [8]) ^ ((min((!0), (arr_2 [6]))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_14 = (((arr_10 [i_3] [i_3]) ? ((var_6 + (60712 - var_7))) : (max(var_4, (3262013066 <= var_9)))));
                    var_15 -= ((((var_10 ? var_5 : ((var_8 ? (arr_8 [i_3]) : 4294967295)))) ^ ((min((arr_5 [i_3] [9] [i_5]), var_4)))));
                }
            }
        }
    }
    var_16 = var_3;
    var_17 -= var_2;
    #pragma endscop
}
