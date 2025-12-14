/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((-(((arr_5 [i_1 - 1] [i_0] [i_0]) & ((199 ? (arr_3 [i_1]) : 12441048672174109875))))));
                arr_7 [i_0] [i_0] = (((((var_9 ? 1 : (arr_1 [i_0] [i_0])))) ? (min(var_6, (~-9179087))) : ((max((arr_5 [i_0] [i_1] [i_1 - 1]), (arr_0 [i_1 + 1] [i_1 + 1]))))));
                var_11 -= (((((var_7 ? var_10 : (~var_3)))) ? (!-42) : (((((var_6 ? (arr_5 [i_1] [i_0] [i_1 + 1]) : var_5))) ? var_2 : (arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1])))));
            }
        }
    }
    var_12 = (max(((-(~47))), ((((var_0 / var_1) && -127)))));
    #pragma endscop
}
