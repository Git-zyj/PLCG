/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_17 + (max(((var_9 ? var_1 : var_6)), (((var_1 >> (-312334198 + 312334224))))))));
    var_19 = ((((((var_3 && var_17) ? var_12 : -5))) || -612537336));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [i_2] = (-(((((arr_2 [i_2] [i_1]) ? (arr_3 [i_2] [i_1]) : 1)) >> (var_6 - 2453832668))));
                    var_20 = ((~((((!(arr_7 [i_2])))))));
                    var_21 = ((~((var_12 ? (arr_7 [1]) : (((312334197 ? var_8 : var_16)))))));
                }
            }
        }
    }
    #pragma endscop
}
