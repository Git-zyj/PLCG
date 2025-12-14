/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~21);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_4 [i_0] [i_1] [i_0] = (((((18446744073709551609 ? 0 : (arr_2 [i_0] [i_0] [i_0])))) ? (var_0 + var_0) : (arr_0 [i_1])));
            var_13 = (arr_0 [i_0]);
            arr_5 [i_0] = ((~(~26)));
        }
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_14 -= (max(234, var_3));
                        var_15 = (min(var_15, (((-((-((241 ? 33 : -6160833844324166144)))))))));
                    }
                }
            }
            var_16 = (((44 ? 239 : 1)));
            var_17 *= ((~((234 ? (arr_0 [i_2]) : (var_7 + 7969950128048569319)))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_18 -= (((-7969950128048569319 ^ 21) ? (var_10 && var_6) : (var_7 / var_2)));
            var_19 = (arr_3 [i_0] [i_0] [i_0]);
        }
        arr_15 [i_0] &= (1 || 6);
        arr_16 [i_0] [i_0] = (arr_13 [i_0]);
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    {
                        var_20 = var_3;
                        var_21 = 1;
                    }
                }
            }
        }
    }
    var_22 = (min(((((var_10 | var_7) != -7969950128048569319))), var_0));
    #pragma endscop
}
