/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_10 = (arr_4 [i_0] [i_0] [i_1]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_11 += (arr_6 [i_0] [6] [i_2]);
                        var_12 = (((((1 ? (max(3623866004205623416, var_0)) : 1))) ? var_9 : (((((((arr_2 [i_3]) ? 9 : 0))) ? var_3 : 1)))));
                        var_13 = (((arr_2 [i_0 + 3]) | (max((min(13578704638024733057, (arr_11 [i_0] [i_0] [i_2] [16]))), ((min(1, 1)))))));
                    }
                }
            }
            arr_12 [i_0] [i_0] [i_0] = (((max(1, 1))) <= ((-(arr_0 [i_0]))));

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_21 [4] [i_0] [i_5] [i_5] = (((((arr_2 [i_0 + 1]) > (arr_2 [i_0 - 2]))) ? ((min(2363447101, 2363447101))) : ((var_8 ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 + 4])))));
                            var_14 = ((~(max(var_7, 65504))));
                            var_15 = (((var_3 ? ((1 >> (var_6 - 5232564463176491927))) : ((1 | (arr_16 [i_0] [i_5] [i_6]))))));
                            arr_22 [i_0 + 4] [i_0] [i_0] = max((max((((var_6 ? var_1 : 28567))), ((976496547010342183 ? var_6 : var_2)))), ((((((!(arr_6 [1] [i_4] [i_6])))) * (arr_13 [i_0] [i_0 - 2])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_16 = (max(((~((max(var_0, 0))))), (min(((-1957744127 ? var_1 : 112)), (arr_14 [i_0 - 1] [i_0 + 4] [i_0 + 4])))));
                            var_17 = 1;
                        }
                    }
                }
                arr_31 [i_0] [15] [i_0] = (max((((~((-(arr_17 [i_0] [i_0])))))), ((-(min((arr_5 [i_0] [i_1] [i_1]), (arr_28 [i_0] [i_1] [i_4] [1] [i_0] [i_1])))))));
                var_18 = (((max(1, ((0 ? (arr_19 [i_0] [1] [i_4] [i_1] [i_1] [i_4]) : 128))))) ? ((((arr_7 [i_0 - 2] [i_0] [i_0 - 2]) ? -var_2 : 1931520195))) : (((((arr_13 [i_1] [i_1]) - var_9)) / (((-(arr_18 [10] [10] [i_0] [10] [i_1] [10])))))));
                var_19 = (min(((~(((!(arr_28 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0])))))), ((((4294901791 && 1) >= (arr_3 [i_0 + 3] [i_1] [i_0]))))));
            }
        }
        var_20 = (((60579 ? 10265 : 1)));
        var_21 = (!var_4);
        var_22 = ((((((arr_13 [i_0 + 2] [i_0 + 2]) * 0))) | 65505));
        var_23 = ((1931520194 ? -var_2 : var_2));
    }
    var_24 = (min(var_24, var_9));
    #pragma endscop
}
