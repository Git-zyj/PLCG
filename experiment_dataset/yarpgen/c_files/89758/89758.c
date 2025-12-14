/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((min((min((-2147483647 - 1), 2947106737369554939)), var_15)) == (((~((var_6 ? 62228 : var_14)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, 0));
                    arr_7 [i_0] [i_0] [i_2] = (min(((((arr_0 [i_0]) ? (arr_1 [8] [i_1]) : ((var_0 ? 62228 : (arr_3 [7] [1] [i_0])))))), (((var_3 | var_8) & var_3))));
                }
            }
        }
    }
    var_21 |= min(62245, (min((62237 > var_8), var_3)));
    var_22 = (min(((min(0, 3308))), (((-4196199965163920317 == (((var_17 ? 225189105 : 2147483647))))))));
    #pragma endscop
}
