/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_16;
    var_18 = ((((min(var_10, ((1732207259 ? -74 : var_10))))) ? -1803776194823479376 : (min(1803776194823479374, 1905400288))));
    var_19 = (min(var_19, (((((((var_12 ? 137438953471 : var_12)) << (var_3 + 116))) ^ 137438953489)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 = (max(var_20, (((((((-1803776194823479374 + 9223372036854775807) << (-125 + 125)))) ? (min(7637315876803337760, (arr_1 [i_0]))) : (((((arr_0 [i_0]) != (var_15 + -1803776194823479376))))))))));
        var_21 ^= arr_0 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = (min(var_22, (arr_5 [i_0] [2])));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            arr_15 [9] [i_3] [i_2] [i_3] [i_4] = var_12;
                            var_23 = ((((min(340749218, (arr_8 [i_1 + 1])))) ? -16994 : (arr_3 [1] [3] [i_2])));
                            var_24 = (max(var_24, ((((((((arr_13 [i_2] [i_4] [i_2] [i_2] [0] [i_2] [i_2]) & 48)))) ? var_5 : (min((arr_9 [i_0] [0] [3] [i_2] [i_4]), (min(var_9, (arr_0 [2]))))))))));
                            arr_16 [i_3] [i_1] [2] [i_3] [i_1] = (arr_14 [i_0] [i_0] [i_0] [i_0] [1]);
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [2] [i_2] [i_1] [i_0] &= (((((-((var_15 ? var_16 : 31744))))) ? -81 : ((((min((arr_11 [i_0] [i_1] [i_2]), (arr_6 [3] [i_1 - 1] [9])))) - (((arr_3 [i_2] [2] [i_2]) ^ var_6))))));
                            var_25 = (+-8439);
                            arr_21 [i_3] [8] [i_3] = var_15;
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            var_26 = (37114 ^ -137438953483);
                            arr_24 [i_0] [i_3] [1] [i_3] [i_3] [i_6] = ((var_2 ? ((((var_7 || var_9) < var_12))) : ((((var_14 != (arr_19 [i_3] [8] [i_3] [i_2] [8] [i_0] [i_3])))))));
                        }
                        var_27 = (min(var_27, ((((min((((-94 * (arr_3 [i_1] [2] [2])))), ((1 & (-9223372036854775807 - 1))))) * (((var_4 ? var_16 : (((arr_7 [1] [6] [6] [6]) ? (arr_12 [i_2] [i_3]) : 684897074))))))))));
                    }
                    var_28 = (min(var_28, ((((((min((arr_18 [i_1] [2] [i_1] [i_1] [0] [i_0]), (arr_0 [i_1 + 1]))) + 9223372036854775807)) << (30836 - 30836))))));
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < 20;i_7 += 1)
    {
        arr_29 [i_7] [i_7 + 1] = (74 | -110);
        arr_30 [i_7 + 1] [3] = ((arr_25 [i_7 + 1] [i_7]) || (((var_12 ? -23 : (arr_25 [i_7 + 1] [14])))));
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                {
                    var_29 = (max(var_29, ((min(var_7, ((((((arr_32 [3]) - -11)) <= (122 * var_8)))))))));
                    var_30 = (min(var_30, ((min((-1803776194823479376 == 1023), 2891909421)))));
                }
            }
        }
    }
    #pragma endscop
}
