/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            var_13 = (min(var_13, ((max(var_11, (!26))))));
            var_14 = (max(var_14, (((28890 ? ((max(((max((arr_1 [16]), 230))), 0))) : 0)))));
            var_15 ^= 4294967280;
            var_16 += (((~var_6) ? (arr_1 [8]) : 255));
        }
        var_17 *= max(2266563810, 230);
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 21;i_3 += 1)
            {
                {
                    arr_15 [i_0] = 26;
                    arr_16 [i_0] = (min((((arr_3 [i_0 - 2] [i_0]) ? 255 : 4294967284)), -19365));
                    var_18 = (min(var_18, (((((~((max((arr_6 [8] [i_2] [i_3]), 0))))) < (max((((var_6 + 2147483647) >> (1048448 - 1048438))), (arr_2 [i_3 + 2] [i_2 - 1]))))))));
                }
            }
        }
        var_19 = (arr_5 [i_0]);
    }
    var_20 = (max(var_3, (max(var_1, 17192721881217373103))));
    var_21 &= 10;
    #pragma endscop
}
