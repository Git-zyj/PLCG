/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((((var_13 ? var_0 : var_12))) ? 1 : ((7 ? 15 : var_4))))) ? (((~(var_0 < var_6)))) : ((1603420367 | ((-1603420367 ? -1603420359 : var_11))))));
    var_15 &= (((((~249) ? ((562949953421311 ? -107 : 1603420367)) : ((2937845566587861438 ? var_3 : 1603420386)))) + ((32767 >> (-1603420367 + 1603420387)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 7;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = (((max(var_3, (arr_3 [i_0]))) % (arr_3 [i_0])));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((4294967269 + (((((min((arr_0 [i_0]), 193)) == 12))))));
                }
            }
        }
    }
    var_16 = var_7;
    #pragma endscop
}
