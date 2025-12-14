/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 3081805228261042940;
    var_18 -= (127 ? var_13 : (((!(~18446744073709551615)))));
    var_19 -= var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 -= ((((((96 ? var_10 : var_6))) ? (~84) : 104)));
                    var_21 ^= var_7;
                    var_22 = (max(var_22, ((((!var_4) != ((var_13 ? (max(210, (arr_1 [11]))) : var_14)))))));
                }
            }
        }
    }
    var_23 = (max(var_23, (((9223372036854775807 ? ((((!(!var_0))))) : var_9)))));
    #pragma endscop
}
