/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_11;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = var_8;
        var_17 = ((0 ? (arr_1 [i_0] [i_0]) : (((arr_1 [i_0] [i_0]) ? -95091227 : (arr_1 [i_0] [i_0])))));
        var_18 = 0;

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_19 = 2064921007;
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    {
                        var_20 = (max(var_20, -2064921008));
                        var_21 = (((((2064921008 ? (arr_9 [i_0] [16] [i_1] [i_2 + 2] [i_3]) : -2064921007))) ? 10 : (arr_3 [i_2])));
                        arr_11 [i_2] = (((~-var_3) || ((max(-2064921008, 1317331314)))));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 23;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_22 = (((((arr_22 [i_0] [i_4] [i_7]) ? (var_0 | 48) : (((min(1, (arr_6 [i_0] [i_0] [i_0]))))))) == (max(15849258869062326274, (17877895595673945302 < var_3)))));
                            var_23 = (max(var_23, (arr_22 [i_4] [i_0] [i_4])));
                            arr_23 [i_0] [i_4] [i_0] = ((0 ? 192 : 1));
                        }
                        arr_24 [i_0] [i_4] [i_4] = (arr_19 [i_0]);
                    }
                }
            }
            var_24 = max(var_14, (max(-31, (var_2 || 127))));
        }
    }
    var_25 = (var_1 | var_14);
    #pragma endscop
}
