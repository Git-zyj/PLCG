/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_11 || ((var_1 || (!var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (max((max(((3274 ? -5258901394745509750 : 1)), (((var_16 ? var_12 : 1))))), ((((~var_2) >= (((arr_3 [i_0] [i_0] [i_1]) << (((((-2147483647 - -2147483636) + 16)) - 4)))))))));
                var_19 *= ((~((3230890721 ? (arr_3 [i_0] [i_1] [i_1]) : (141 ^ var_11)))));
                arr_5 [i_0] = ((((max(((397336034 ? (arr_3 [i_1] [i_1] [6]) : var_5)), var_9))) ? (!258273) : (max(((var_4 ? 1 : var_4)), var_13))));
            }
        }
    }
    #pragma endscop
}
