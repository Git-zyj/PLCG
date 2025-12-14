/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 = (max(var_14, ((max(((min((((arr_1 [i_0]) % (arr_1 [i_0]))), ((((arr_1 [i_0]) || 4282509180)))))), (arr_0 [21]))))));
        arr_3 [i_0] = ((((min((((var_13 ? 70 : var_10))), (min(12458115, 1547706611))))) || ((((arr_0 [i_0]) ? (((var_13 ? var_8 : var_9))) : (arr_2 [i_0]))))));
        var_15 = (~63);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_16 = ((-(arr_7 [i_0] [i_0] [i_2])));
                    var_17 = (min(var_17, (((((((1547706606 ? -16813 : (arr_1 [i_0]))))) ? ((((((var_10 ? (arr_7 [i_0] [20] [i_2]) : 45))) ? var_2 : (-1547706607 != var_4)))) : 12458128)))));
                }
            }
        }
    }
    var_18 += -var_3;
    var_19 = (((var_13 - var_9) - (((18446744073709551600 + var_0) + (var_8 + var_6)))));
    #pragma endscop
}
