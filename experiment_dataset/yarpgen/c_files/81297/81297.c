/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = -5549;
                arr_7 [i_0] [i_1 - 1] [i_1 + 2] = ((((max(-5549, -1097454441))) ? (((((3 ? (arr_1 [i_1]) : 31))) ? (min(var_12, (arr_2 [i_0] [i_1 + 1]))) : ((((arr_2 [4] [4]) ? 1501152474 : -5549))))) : (arr_0 [i_0])));
            }
        }
    }
    var_16 = (var_2 ? ((1359620433 ? 23 : 1519926852)) : var_7);
    var_17 -= 226;
    var_18 = 2027544265;
    #pragma endscop
}
