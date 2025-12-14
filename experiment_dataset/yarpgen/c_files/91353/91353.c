/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((max((max(17011952157035442369, var_9), var_9))))));
    var_14 = (((((var_3 ? (var_5 & var_2) : (!var_8)))) ? (max((0 <= -3195453115170815965), (max(var_12, var_7)))) : -1789589065));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_15 = ((((max((arr_2 [i_2 + 1] [i_2 - 1] [i_1 + 1]), ((((arr_2 [i_2] [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_1]))))))) ? (min(((max((arr_6 [i_2] [i_2] [i_2] [i_0]), (arr_6 [i_0] [i_0] [i_2] [i_0])))), (~var_4))) : (arr_1 [i_0])));
                    var_16 = ((((min(17011952157035442369, 3750889432490451343))) ? (arr_3 [i_2 + 2]) : (arr_0 [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
