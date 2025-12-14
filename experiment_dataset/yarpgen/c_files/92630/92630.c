/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    var_18 *= var_5;
    var_19 = ((var_0 ? ((var_13 >> (var_3 <= var_6))) : (((var_3 / 1056964608) ? (94 * var_12) : ((var_14 ? var_6 : 41))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] = (arr_0 [i_0]);

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    var_20 |= min((arr_1 [i_1]), (!79));
                    arr_8 [i_0] = ((((((arr_2 [i_1]) ? (((arr_2 [i_2]) ? (arr_3 [i_0] [i_2 + 1]) : -76)) : var_13))) ? (((var_14 ^ var_9) - (((62 << (-88 + 112)))))) : (!3739801373920866692)));
                    var_21 &= ((((((max((arr_0 [i_2]), 1123927861))) ? ((1808729363 ? 1576785203 : var_1)) : (((var_4 > (arr_3 [i_2] [i_0]))))))) - ((-76 ? -75 : ((1679952446 ? 465757761892077560 : 31)))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    arr_11 [12] [i_0] [i_0] = (~var_1);
                    var_22 = (min(var_22, ((13883301298923025352 >> (((arr_3 [i_0] [i_0]) - 1849629676388811959))))));
                }
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        var_23 *= var_13;
                        arr_16 [i_0] [i_1] [i_1] [i_5] |= (((arr_2 [i_4]) ? (arr_0 [i_0]) : (arr_2 [i_0])));
                        arr_17 [i_0] [i_0] [15] [i_5] = ((var_4 >> (((arr_12 [1] [i_4] [i_1] [1]) + 154))));
                        var_24 = (min(var_24, ((((arr_0 [i_4]) ? (arr_0 [i_0]) : var_9)))));
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        var_25 = 8;
                        arr_21 [9] [i_0] [i_0] [i_6] [5] [1] = var_0;
                        var_26 = (min(var_5, 1576785203));
                        arr_22 [i_0] = ((((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) <= (arr_7 [11] [i_1] [i_1]))) ? (arr_18 [1] [i_0] [i_0] [i_1] [i_4] [i_6]) : (((arr_18 [i_0] [16] [i_0] [i_1] [i_4] [i_6]) ? 13488138982678571778 : (arr_18 [i_6] [i_4] [i_0] [i_0] [i_0] [i_0]))));
                    }
                    var_27 |= var_4;
                }
                arr_23 [i_0] = ((!((((arr_0 [i_0]) ? var_2 : 65)))));
                arr_24 [i_0] [1] [i_0] = ((-(((arr_19 [i_0] [i_1]) * (arr_19 [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}
