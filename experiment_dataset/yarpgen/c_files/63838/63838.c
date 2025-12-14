/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = var_6;
    var_13 = ((var_6 ? var_2 : var_9));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (62695 || 2830);
                var_14 = (max((((((6487361299389997697 ? 11959382774319553911 : 11959382774319553907)) > 29525))), var_10));
            }
        }
    }
    #pragma endscop
}
