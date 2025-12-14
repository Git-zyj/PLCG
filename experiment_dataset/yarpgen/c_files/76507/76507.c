/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    var_11 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_12 = ((((((arr_2 [i_1] [i_0]) ? (arr_2 [i_1] [i_0]) : (arr_2 [20] [i_1])))) && (~458632241)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] = 16383;
                            arr_14 [i_0] [i_2] [i_2] [i_3] &= (((((arr_6 [i_0] [i_0] [i_2]) != 27044)) || ((min((arr_7 [i_0] [i_2] [i_3]), 6)))));
                            var_13 ^= ((+((((((arr_11 [i_0] [i_0] [i_0]) ? (arr_9 [i_0] [i_1] [i_2] [i_3]) : (arr_12 [i_0] [i_1] [i_0] [i_0] [i_1])))) ? (arr_4 [i_0] [i_1]) : ((147065035 & (arr_2 [i_0] [i_0])))))));
                        }
                    }
                }
                var_14 = ((((max((var_3 < var_7), 650))) << (((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_1]) ? (((0 ? (arr_3 [i_0]) : -86))) : ((-1 & (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1]))))) - 18446744073709551502))));
            }
        }
    }
    var_15 &= (min((~var_2), var_9));
    #pragma endscop
}
