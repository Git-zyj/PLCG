/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = var_0;

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
            {
                var_17 -= (arr_5 [18] [i_1]);
                arr_7 [i_0] [i_1 + 1] [i_1 + 1] [i_2] = (!var_11);
            }
            for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
            {
                var_18 += ((((max((var_3 || var_11), 0))) ? (!65535) : (min((arr_4 [10] [i_1 - 1]), ((max((arr_0 [3]), 6619)))))));
                arr_11 [i_3] [i_1] [i_0] = (max((((var_11 || (arr_9 [i_0] [i_1 - 1] [11] [i_1 + 1])))), (arr_8 [i_0] [i_0] [i_3] [i_1 + 1])));
                var_19 -= ((243 >> (((0 ^ 250) - 221))));
            }
            for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_20 *= (((((var_3 ? 192508851 : (!13143034981315355449)))) ? 0 : (arr_4 [i_5] [6])));
                            arr_20 [i_1] [i_1] [i_4] [i_1] [i_1] = (max(1, (max((arr_9 [i_0] [i_0] [i_5] [i_6]), (arr_15 [i_1 - 1])))));
                            var_21 = (max((-60 && 2147483647), (arr_2 [i_5] [i_6])));
                        }
                    }
                }
                arr_21 [i_0] = (arr_19 [i_4] [5] [i_4] [3] [i_0]);
            }
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                arr_25 [i_1] [i_1] [1] [i_1 - 1] = ((-395593939 ? (max(((var_6 ? (arr_2 [i_0] [i_7]) : (arr_23 [i_0] [i_0] [i_7]))), (arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1]))) : (arr_8 [i_0] [i_0] [i_1] [i_7])));
                arr_26 [i_0] [i_1] [i_0] = ((var_3 ? ((~(arr_22 [i_0] [i_0] [i_1 + 1]))) : (max(-91, var_2))));
            }
            var_22 *= ((((max((max(9829, 243)), 15642))) % (arr_13 [i_1] [i_1] [i_1 + 1] [1])));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 17;i_9 += 1)
                {
                    {
                        var_23 += var_7;
                        arr_31 [i_0] [i_0] [i_8] [i_9 - 1] [i_1] [13] &= ((117 ? 4 : 31487));
                        arr_32 [18] [i_0] [i_1 + 1] [i_8] [i_8] [i_9 + 2] = ((~(((!((((arr_22 [0] [i_8] [i_9 - 1]) >> (var_4 - 2824348082)))))))));
                    }
                }
            }
        }
        var_24 = (((-2147483644 ? (arr_6 [17] [i_0]) : 26)));
    }
    #pragma endscop
}
