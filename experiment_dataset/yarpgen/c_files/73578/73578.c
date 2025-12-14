/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = (148 ^ -16);
                    var_19 = (min(var_19, ((((arr_2 [i_0] [i_2]) ? (((var_8 - var_0) * ((15 ? 292252668 : 4398046511103)))) : ((((var_4 * var_10) ? 2251799813685244 : ((18446739675663040513 ? (arr_6 [i_0] [i_1] [i_1]) : 2090234534410961253))))))))));
                }
            }
        }
    }
    var_20 -= (18446739675663040523 / 35465847065542656);
    var_21 = var_2;
    #pragma endscop
}
