/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_12 ^= ((!((((!(arr_0 [i_0] [i_0]))) && 549755551744))));
        arr_4 [i_0] = ((~(min((arr_3 [i_0 + 1]), (-942524693 > var_10)))));
        var_13 = (max(var_13, (((!((((arr_1 [i_0]) ? (arr_2 [i_0 + 1]) : var_1))))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] = (max(27769, (!3893109562)));
        var_14 -= ((-(arr_6 [i_1] [1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {
                    {
                        var_15 = ((-((401857734 ? -3633551955662257668 : (arr_10 [i_2] [i_1])))));

                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 15;i_5 += 1)
                        {
                            var_16 = ((((var_7 ? 3893109562 : var_4)) / (arr_12 [i_5] [i_5] [i_1])));
                            arr_19 [4] [i_2] [i_1] = (-3633551955662257684 - -13620);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
