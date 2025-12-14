/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1331997968;
    var_15 = (min((!var_6), (max(1331997952, 140668768878592))));
    var_16 *= (((((((!var_2) > 1390941303)))) == ((var_4 ? var_0 : var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = (((!var_4) ? (arr_2 [i_0]) : (arr_4 [i_0])));
                var_17 = (max(var_17, ((max((min((~-903716), -975792617)), (max(var_12, var_12)))))));
            }
        }
    }
    var_18 = (min((((max(12172864345912263263, 12518749860666036336)))), var_4));
    #pragma endscop
}
