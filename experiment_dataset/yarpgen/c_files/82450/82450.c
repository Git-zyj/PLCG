/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [14] [15] [3] = (((((-(!4673704420400517225)))) ? (((((min(24343, 999896563))) ? ((-(arr_5 [i_0] [i_0] [i_0]))) : var_7))) : (((181 ? 9223372036854775807 : 125601734)))));
                var_18 = ((!(!336724683598954197)));
            }
        }
    }
    var_19 = max((!var_9), 0);
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_3] [i_4] = (~448);
                    var_20 = var_0;
                }
            }
        }
    }
    var_21 = (~var_7);
    var_22 = var_7;
    #pragma endscop
}
