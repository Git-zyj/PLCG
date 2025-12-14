/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = (max(((-(0 && 3819854837))), ((0 ? 184 : 134217727))));

                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    var_17 = (((~var_15) * (arr_0 [i_0] [i_1])));
                    var_18 = (max(var_18, ((min(var_10, ((var_9 + (arr_6 [i_2 - 1] [i_0] [i_1 + 1]))))))));
                    arr_7 [i_2] [i_2] = 1079139043;
                }
                arr_8 [i_0] [9] &= var_0;
            }
        }
    }
    var_19 = var_1;
    #pragma endscop
}
