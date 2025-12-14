/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = 16;
                arr_5 [8] = var_16;
                arr_6 [i_1] [i_0] [i_0] = ((56 ? 57 : 1));
                arr_7 [i_0] = ((((((min(var_5, (arr_3 [i_0])))) + 2147483647)) << ((((((~((min(var_9, 1))))) + 8)) - 6))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                arr_14 [i_3] [i_2] = (~1);
                var_19 = (((!(arr_10 [i_3]))) ? (((((arr_1 [i_3]) != 64115)))) : (((!var_9) ? (!var_15) : var_7)));
            }
        }
    }
    #pragma endscop
}
