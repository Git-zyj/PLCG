/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min(167, 167))) ? var_3 : ((-var_7 ? var_7 : var_4))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = (((((11892833407126188520 ? 1619754573 : -99))) ? (~var_7) : var_3));

                    for (int i_3 = 1; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        var_13 = (max(var_13, 1));
                        arr_10 [i_0] [i_1] [i_1] [i_3 - 1] = (max((((var_5 == (arr_0 [i_0 - 1])))), (min((arr_2 [i_0 + 1] [i_3 + 2]), (var_8 < var_0)))));
                        var_14 ^= (((-5885563940938799682 + 2147483647) << (((((arr_4 [i_1] [i_1]) + 418460658)) - 30))));
                        var_15 += ((-(var_10 / 55)));
                    }
                    for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        var_16 = (min((arr_11 [i_4 + 1] [i_4 - 1] [i_0 + 2] [i_0 + 1]), ((min(254, (arr_11 [i_4 - 1] [i_4 + 1] [i_0 + 1] [i_0 + 1]))))));
                        arr_15 [1] [i_0 + 1] [i_1] [8] [5] = var_2;
                    }
                    var_17 = ((~(max(1, ((~(arr_14 [i_0 - 1] [i_1] [i_2] [i_2] [i_1] [i_0])))))));
                }
            }
        }
        arr_16 [i_0 + 1] = ((((max(18, (arr_4 [i_0] [i_0 - 1])))) ? (((arr_5 [i_0]) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_14 [i_0 + 1] [i_0] [i_0] [11] [i_0 - 1] [i_0 + 2]))) : ((max(var_6, (arr_13 [10] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    var_18 = var_1;
    var_19 = 64;
    #pragma endscop
}
