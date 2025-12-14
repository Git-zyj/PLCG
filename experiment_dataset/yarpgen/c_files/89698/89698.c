/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((~(~89))) == (((var_7 ? 18446744073709551615 : var_11)))));
    var_19 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (max((((var_14 ? (arr_0 [i_0 - 1] [i_0 + 3]) : (arr_0 [i_0 + 1] [i_0])))), (max(42415, var_10))));
                var_20 = -var_14;
            }
        }
    }
    var_21 = (42428 ? 236718560 : 1);
    #pragma endscop
}
