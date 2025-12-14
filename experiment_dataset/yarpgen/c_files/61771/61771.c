/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (max(((var_4 ? 29368 : var_7)), 4064));
    var_13 = var_4;
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = (((max(((2373186279474735382 ? 1805467577372973766 : (arr_1 [12]))), 1))) ? (max((arr_2 [i_0]), (arr_2 [i_0]))) : (arr_6 [i_0]));
                arr_8 [i_0] [i_0] = (((((arr_5 [i_0]) >= var_10)) ? (arr_6 [i_0]) : 2373186279474735382));
            }
        }
    }
    #pragma endscop
}
