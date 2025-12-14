/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((var_1 && var_2) ? ((-615980543 ? 6876783965387543585 : (~var_5))) : (((218 | -615980543) & (~245)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_0] = ((((2147483647 > var_0) ? (arr_5 [2]) : 32)));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_13 = (((~615980540) ? ((~((6876783965387543601 ? (arr_7 [i_0] [i_0] [i_2]) : 1)))) : (var_9 < var_5)));
                        var_14 = -615980529;
                        var_15 = 140600049401856;
                        arr_11 [i_0] [i_1] [i_0] [i_3] = var_11;
                    }
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_4] = ((127 - (((arr_9 [i_0]) ? -36 : (arr_9 [i_0])))));
                        var_16 = (((((~(max((arr_9 [i_0]), var_1))))) && (((((6876783965387543601 == (arr_3 [i_0] [i_0]))) ? (~var_11) : 42)))));
                        var_17 = ((((min((((arr_0 [i_0] [i_0]) ? (arr_10 [i_2] [i_2] [i_2] [i_2]) : 1469428151)), (arr_10 [6] [i_4 + 2] [i_4] [i_4])))) ? ((~(~var_3))) : (((((var_2 ? 4398046511103 : var_8)))))));
                    }
                }
            }
        }
    }
    var_18 = (!65535);
    var_19 = (((4294967295 ? 496 : 254)) != (((((~26566) + 2147483647)) << (!var_10))));
    #pragma endscop
}
