/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_2] [i_1] = -5705284867274594831;
                    var_16 -= arr_6 [i_2 - 1] [i_2] [i_2 - 2];
                    var_17 = (max(var_17, ((min(((1190804011849289426 ? (arr_6 [i_2 - 2] [i_2] [i_1]) : (max(7261865630512955884, 6320172449865630583)))), ((((arr_5 [i_2 + 2]) ? -9223372036854775795 : 4412612494140201045))))))));
                    arr_9 [i_2] [i_2] = min((((((arr_7 [i_2] [i_1] [i_0] [i_0]) == 5705284867274594831)) ? (arr_0 [i_2 - 1]) : 6144504593194536756)), 1);
                }
            }
        }
        arr_10 [i_0] = (arr_0 [i_0]);

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_13 [i_0] [i_0] = var_11;
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        var_18 &= min((var_9 < 1), ((0 ? (arr_2 [i_3]) : 5705284867274594816)));
                        var_19 = (min(var_19, var_7));
                        var_20 = (((max(2017612633061982208, (arr_6 [i_4 - 1] [i_5] [0])))) ? -0 : (min(1, (arr_6 [i_4 - 1] [i_4 - 1] [i_4 - 1]))));
                    }
                }
            }
            arr_18 [i_0] = 1;
            var_21 ^= max(1, 8722032147783493642);
        }
        arr_19 [i_0] &= (arr_4 [i_0]);
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] [i_6] = ((min(((-8398738378254276615 ? -9223372036854775791 : (arr_1 [i_6])), 15))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    {
                        arr_33 [i_7] [i_9] = (-((((arr_15 [6] [i_8 - 1]) ? 8678527942436268491 : 2946305330702382013))));
                        arr_34 [i_6] [i_6] [i_6] [i_6] = 17377933847595343823;
                    }
                }
            }
        }
        arr_35 [i_6] = (((arr_26 [1]) == (arr_27 [i_6] [i_6] [i_6] [i_6])));
    }
    var_22 = (min(var_22, var_15));
    #pragma endscop
}
