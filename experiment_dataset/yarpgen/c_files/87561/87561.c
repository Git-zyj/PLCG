/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;
    var_21 = ((var_14 ? var_4 : var_18));
    var_22 = ((18446744073709551607 ? var_10 : (((((max(var_5, 65535)))) + ((4263530267401369291 ? var_15 : var_3))))));
    var_23 = ((-((var_1 * ((0 ? 65531 : var_14))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_24 = (((!(arr_4 [i_0]))));
                var_25 = 3924017521;
            }
        }
    }
    #pragma endscop
}
