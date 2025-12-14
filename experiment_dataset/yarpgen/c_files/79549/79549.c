/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, ((max((((var_7 ? (arr_4 [i_0] [i_0] [i_2]) : 65530))), (((max(var_14, (arr_0 [i_0] [i_1 + 1]))))))))));
                    var_18 = (max(var_18, var_1));
                    arr_6 [i_0] [i_1] [i_2] [i_2] = ((((((((arr_0 [i_0] [i_1]) ? (arr_2 [i_1] [i_2]) : var_0))) ? ((((arr_5 [19] [i_1] [i_2]) < (arr_2 [20] [i_2])))) : ((65 ? 63186 : 191))))) ? (((arr_4 [i_0 + 1] [i_1 + 1] [i_1 - 1]) ? 382988102 : 2507793267676175379)) : ((((arr_4 [i_1 - 1] [i_0 - 1] [i_0 + 2]) ? (arr_4 [i_1 + 1] [i_0 - 2] [i_0 + 2]) : var_5))));
                }
            }
        }
    }
    var_19 &= ((((-((var_11 ? var_15 : var_0)))) >> ((((var_0 ? var_1 : (var_10 + 21264))) - 6695488849612965412))));
    #pragma endscop
}
