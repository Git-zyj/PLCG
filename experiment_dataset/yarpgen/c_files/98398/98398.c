/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, (((((((((var_2 ? var_4 : var_6))) ? var_7 : var_6))) ? var_1 : ((((arr_5 [i_0] [i_0] [i_0]) ? ((max(var_4, (arr_2 [i_0])))) : (min(var_0, (-2147483647 - 1)))))))))));
                    arr_9 [6] [i_0] [i_0] = (arr_7 [i_2] [i_2] [i_2] [i_2]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                var_13 = ((((((((var_5 ? var_8 : var_3))) ? (!var_5) : (arr_2 [i_3])))) ? (((!((((arr_7 [i_3 + 1] [i_4] [i_3] [i_3]) ? var_3 : (arr_4 [i_3 - 2] [i_3 - 2]))))))) : var_2));
                arr_14 [i_3] [i_4] [i_3] = (arr_7 [i_3] [i_3] [i_3 - 1] [i_4]);
                var_14 = (min(var_14, (((((!(((var_9 ? (arr_2 [13]) : var_7))))) ? (min(var_6, -var_3)) : var_5)))));
            }
        }
    }
    var_15 = (max(-var_4, var_8));
    #pragma endscop
}
