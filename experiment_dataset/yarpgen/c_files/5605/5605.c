/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_7;
    var_20 = ((~(min(var_9, (~var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_7 [i_0 - 2] = (max((arr_4 [i_0] [i_0 + 2]), 32767));
                    arr_8 [i_0 + 1] [i_1] [i_1] [i_2] = (((((var_12 ? -14776 : (arr_4 [i_0 + 2] [i_0 + 2])))) ? (arr_6 [i_0] [i_0] [i_2]) : ((max(-17726, var_7)))));
                }
                arr_9 [i_1] [i_0 - 2] = ((-20448 ? -1 : -20450));
            }
        }
    }
    #pragma endscop
}
