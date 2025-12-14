/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (((arr_1 [i_1] [i_1]) ? 37 : ((+((min((arr_3 [i_1]), (arr_3 [i_0 + 2]))))))));
                var_15 = (max(((max(((max(-120, -38))), (max((arr_3 [i_0 - 1]), (arr_3 [i_0 - 1])))))), (((min((arr_0 [i_1]), 98)) << (((arr_0 [i_0]) - 460843155))))));
                arr_7 [i_0] [i_1] = (!((max((arr_4 [i_1]), -9223372036854775785))));
            }
        }
    }
    #pragma endscop
}
