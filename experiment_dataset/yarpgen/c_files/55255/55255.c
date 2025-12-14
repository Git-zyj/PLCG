/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_3 ? (-2851908797370090317 ^ -1219675978) : 52776558133248))) ? ((~(~2308448375770020006))) : (((var_1 >> (-929217911357542930 + 929217911357542945))))));
    var_12 = 330648829170951727;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] = -2072681464;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_13 = (max(var_13, ((-2308448375770020007 ^ ((~(~31)))))));
                            arr_11 [i_2] = ((~((~(max(-2308448375770020007, var_6))))));
                        }
                    }
                }
                var_14 = 929217911357542929;
                arr_12 [i_0] = var_5;
            }
        }
    }

    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = (var_0 - 2308448375770020009);
        var_15 = (((arr_13 [i_4] [i_4]) ? ((((arr_13 [i_4] [i_4 + 1]) ^ (arr_13 [i_4] [i_4 + 1])))) : (((arr_13 [i_4] [i_4 + 1]) ? (arr_13 [i_4] [i_4]) : -2308448375770020016))));
    }
    #pragma endscop
}
