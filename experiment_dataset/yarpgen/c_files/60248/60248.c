/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((19 & var_13) - (var_16 | 182))));

    for (int i_0 = 2; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_19 = (arr_1 [i_0 + 1]);
        var_20 = (min(var_20, ((((1325167458 / 19) ? (min(-1239003620, 19)) : -28954)))));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_21 = (arr_4 [i_1]);
        var_22 -= (min(2040003269, (min((-2132924078 < -2040003270), -4389699450987106140))));
        arr_7 [i_1] [14] = (((((115 / (((arr_2 [i_1]) + -1950155885))))) ? (((min((min(var_12, 0)), (arr_0 [i_1 + 1]))))) : (((!var_11) ? 1603020903 : (((~(arr_2 [i_1]))))))));
    }

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_12 [i_2] = (((((var_8 ? (arr_8 [i_2] [i_2]) : 2691946409))) ? var_10 : -var_5));
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_23 |= var_15;

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        arr_20 [i_2] [i_2] [i_2] [13] [2] [3] = ((+-236) > (((min(72, var_1)) ^ 18)));
                        var_24 = ((!((min(((-5750878000818955177 ? 2126321302761738267 : 0)), 3884816611)))));
                        var_25 = ((5062570546260264649 == ((((1 > (arr_14 [i_3 - 2] [i_3 - 4])))))));
                    }
                }
            }
        }
        var_26 = (max(var_26, 2612761772794686647));
    }
    var_27 ^= var_8;
    #pragma endscop
}
