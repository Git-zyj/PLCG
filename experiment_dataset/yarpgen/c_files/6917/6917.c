/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = var_14;
                arr_5 [i_0] [i_1] = (((((8847249210958110503 ? var_8 : var_12))) ? -8847249210958110503 : (((((8847249210958110533 ? (arr_0 [1]) : (arr_4 [0] [0] [i_1])))) ? 8847249210958110501 : (arr_3 [i_0] [i_1])))));
            }
        }
    }
    var_16 = var_8;
    var_17 = var_12;
    #pragma endscop
}
