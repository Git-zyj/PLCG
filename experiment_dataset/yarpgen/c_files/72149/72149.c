/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [12] = ((((min(var_12, (max((arr_3 [i_1 + 2] [i_2 - 1]), var_0))))) ? (((arr_5 [i_0] [i_2]) ? 1 : (((-33760261 + 2147483647) >> (15892010631643263936 - 15892010631643263925))))) : ((((max(var_11, var_11))) >> (-4175730753 - 119236514)))));
                    arr_10 [i_0 + 1] [i_0] [i_2] = (arr_8 [8] [i_1]);
                    arr_11 [12] [12] [i_2] = (arr_7 [18] [i_1 + 2] [i_0]);
                }
            }
        }
    }
    var_18 = (-226 | var_6);
    var_19 = var_9;
    var_20 = ((1 ? 160 : 52075));
    #pragma endscop
}
