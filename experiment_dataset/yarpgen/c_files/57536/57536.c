/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_19);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((~var_8) ? (arr_3 [4] [8]) : ((((((var_7 ? 4194303 : var_6))) ? ((11180 << (((arr_2 [i_0]) - 1387898957)))) : (arr_1 [i_1 - 1] [i_1 - 1]))))));
                arr_7 [i_0] [i_0] [i_0] = max(15713, ((-var_18 ? var_15 : (((arr_1 [i_0] [i_1]) ? (arr_0 [12] [8]) : (arr_5 [i_0] [i_1] [i_1]))))));
            }
        }
    }
    var_21 |= var_3;
    #pragma endscop
}
