/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [4] = (arr_2 [i_1 + 1]);
                    var_11 = 12;
                    arr_9 [i_0] [i_2] [i_1] [i_0] = (max(var_7, -7917065663020436151));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_12 = ((((arr_10 [i_3]) >= var_8)));
        var_13 ^= (((max(977440888473265618, (arr_10 [i_3]))) % (max(-7917065663020436151, 977440888473265618))));
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    {
                        var_14 -= ((~(17469303185236285997 >= -64)));
                        var_15 = ((((((~(arr_13 [i_3] [i_4 - 1]))) + 2147483647)) >> (((((arr_11 [i_5] [i_4 - 1]) ? (arr_11 [i_4 + 1] [i_4 + 1]) : -2492)) + 2515))));
                    }
                }
            }
        }
    }
    for (int i_7 = 2; i_7 < 19;i_7 += 1)
    {
        arr_21 [i_7 + 1] = ((((977440888473265620 >> (((-32767 - 1) + 32798)))) >> ((((-14 << (((arr_20 [i_7 - 1]) - 23869)))) - 33547224))));
        var_16 &= (arr_13 [i_7 - 1] [i_7 - 1]);
    }
    #pragma endscop
}
