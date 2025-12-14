/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = (min(var_17, (((((arr_1 [i_0]) ? (arr_1 [i_0]) : (min(-1479647130, (arr_0 [i_0])))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_11 [i_1] = ((((((((-(arr_4 [i_0] [i_1] [i_2])))) ? ((2600847032324669721 ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [1]) : 3333184951)) : (((-(arr_6 [i_0] [i_0] [i_0]))))))) ? (((arr_4 [i_2 - 1] [i_2 - 1] [i_2]) % (arr_0 [i_3]))) : (((((28 ^ (arr_5 [i_3] [i_2 + 1] [i_1])))) ? 1 : ((~(arr_1 [i_0])))))));
                        var_18 = (min(var_18, (((~(((arr_8 [i_0] [i_1] [i_2]) | ((-(arr_9 [i_1] [i_1] [i_1] [i_1] [2] [i_1]))))))))));
                    }
                }
            }
        }
        var_19 = (((((arr_7 [i_0]) ? (arr_7 [i_0]) : (arr_7 [i_0]))) % ((7409974825825778484 ? 58617 : ((((arr_3 [i_0] [i_0] [i_0]) != (arr_10 [i_0] [1] [i_0] [i_0]))))))));
    }
    var_20 &= var_6;
    var_21 -= ((var_14 ? ((min((var_2 > var_8), (961782344 != var_5)))) : (((!((max(var_5, var_3))))))));
    var_22 ^= var_1;
    #pragma endscop
}
