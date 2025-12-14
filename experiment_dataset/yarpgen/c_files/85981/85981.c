/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = (((arr_5 [i_0] [i_1] [i_0] [i_2 + 3]) ? (((((((arr_3 [i_0]) + 1759141275))) ? -206 : (arr_0 [i_0])))) : ((-var_8 ? (arr_2 [i_0] [i_0] [i_0]) : ((var_13 ? (arr_0 [i_1]) : (arr_7 [i_0] [i_0] [i_2])))))));
                    arr_9 [i_0] = ((((~(((arr_7 [i_0] [i_1] [i_2]) | (arr_0 [i_0]))))) | (((((arr_1 [i_2 + 3] [i_2 + 2]) < (arr_1 [i_2 + 3] [i_2 + 3])))))));
                }
            }
        }
    }
    var_17 = ((((((((var_12 ? 4294967286 : var_0))) ? -1759141275 : ((65535 ? var_3 : var_1))))) - -var_5));
    var_18 |= ((var_11 ? (((((var_8 ? -140598682 : 119))) | (var_6 & var_4))) : (var_4 * var_8)));
    #pragma endscop
}
