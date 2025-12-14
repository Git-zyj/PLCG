/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((~-4498318412118250912), -82));
    var_14 = (max(var_14, ((((((~var_6) / ((-82 ? var_11 : var_8)))) < ((~(min(var_12, 255)))))))));
    var_15 = var_12;
    var_16 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_0] = (max(13900, 51635));
                    arr_10 [i_0] [i_0] = (((-9223372036854775807 - 1) != ((((min((arr_6 [i_0] [1] [5]), 87))) ? (arr_2 [i_1]) : (arr_0 [i_0])))));
                    var_17 -= (arr_5 [i_0]);
                    arr_11 [i_0] [i_0] [i_1] [i_0] = (arr_8 [6] [6] [6] [i_2]);
                    arr_12 [i_0] [i_0] [i_2] |= (((((-(arr_6 [i_0] [i_0] [i_2])))) ? (min((arr_2 [i_0]), var_11)) : (arr_2 [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
