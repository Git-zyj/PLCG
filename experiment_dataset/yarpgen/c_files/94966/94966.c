/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((((~var_17) << (((6569702381475610451 >> 1) - 3284851190737805218)))), (((max(var_1, var_0))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (1 < 1220664145028401431);
        var_19 = -4037564265;
        arr_4 [i_0] [14] = ((((((1 ? 560631530 : 13690582265566768368)) / 2147483647)) >= ((max((4145083465 ^ 8478167663890796282), (8589934591 & -8589934592))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_20 = ((~(max((arr_5 [i_1]), 127))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                {
                    var_21 = 2131272895660025908;
                    var_22 = (max((((-994705434475218703 / 18446744073709551599) ? (var_12 / var_9) : (1 / 1))), (((71 ? 1 : -1384919496441088836)))));
                    arr_12 [i_1] [i_1] [i_1] [i_1] = max(((((1 ? 8223302165446544234 : 65520)) * (var_0 / var_4))), ((((arr_11 [i_3 - 1] [i_3] [i_3 + 1] [i_2]) ? (var_2 & 17979214137393152) : (var_10 + var_2)))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] = (~0);
        arr_18 [i_4] [i_4] = var_1;
        var_23 = (min(var_23, -432905643741601457));
        arr_19 [i_4] = -7;
    }
    var_24 = var_7;
    #pragma endscop
}
