/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_10;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0]);
        var_20 = (((max(var_7, ((~(arr_0 [i_0]))))) == ((((!(arr_1 [i_0])))))));
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_21 = var_11;
                        arr_15 [i_1] [i_1] [1] [i_1] = ((var_0 ? ((((72057594037927920 ? -162915486 : 6144)))) : ((~(min(var_11, 2092150789177147917))))));
                        var_22 += (((~(~13447206622820867898))) >> (18374686479671623702 - 18374686479671623652));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_23 = (((((arr_20 [i_1] [i_1] [i_5] [i_6] [1] [i_7]) && var_18)) || ((((arr_5 [i_6] [i_7]) ? var_1 : 219)))));
                        var_24 = (((max(((((arr_14 [i_1] [i_5] [i_5] [i_7]) & (arr_11 [17] [17] [i_7])))), var_7)) * ((((!(((~(arr_20 [12] [i_7] [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_1]))))))))));
                        arr_22 [i_1] [i_5] [15] [i_7] = (arr_7 [i_7] [i_5]);
                    }
                }
            }
        }
        var_25 = (max(var_25, ((((((arr_20 [i_1] [i_1] [i_1] [10] [i_1] [10]) & (arr_4 [i_1 + 1]))) << (((arr_8 [i_1] [i_1]) - 2104488145)))))));
    }
    var_26 = (min(var_26, var_11));
    #pragma endscop
}
