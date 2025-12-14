/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((85 * ((((min(var_14, 85))) >> (var_14 - 12839)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = ((((((arr_0 [i_0]) >> (((arr_0 [i_0]) - 4681)))) <= (arr_3 [i_1 - 1]))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_21 = (min(var_21, (!-79)));
                            var_22 = ((((((((arr_1 [i_0]) + 39740)) - (((!(arr_7 [i_3] [i_2] [i_1] [i_0]))))))) ? (((!(arr_4 [i_0] [i_1] [i_3])))) : -81));

                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                var_23 = (min(var_23, ((min((arr_10 [i_0] [i_1] [i_2] [i_3] [i_4]), ((65 * (arr_3 [i_2 - 1]))))))));
                                arr_13 [i_0] [6] [i_4] |= (((min(((0 << (((arr_5 [i_0] [i_1] [1]) - 8735)))), (arr_8 [i_0] [i_1] [i_1 - 1] [i_2 - 1] [i_4] [i_4]))) >= ((((arr_9 [i_1 + 1] [i_2 - 1]) ^ (arr_3 [i_0]))))));
                                var_24 = (min(var_24, ((((-65 + 2147483647) << (((max((((arr_3 [i_0]) + (arr_1 [i_0]))), (arr_7 [i_1] [i_1] [i_1 + 1] [i_2 - 1]))) - 617730458)))))));
                                arr_14 [i_0] [i_1] [i_2] [i_0] = 243;
                            }
                            for (int i_5 = 2; i_5 < 22;i_5 += 1)
                            {
                                var_25 = (arr_6 [i_0] [i_0]);
                                var_26 = (min(var_26, (arr_4 [i_2] [i_3] [i_5])));
                            }
                            var_27 -= (((((arr_5 [i_0] [i_0] [1]) ^ (((arr_3 [i_1]) ^ (arr_9 [i_0] [i_2]))))) ^ ((min((arr_4 [i_2] [i_2 - 1] [i_1 + 1]), (arr_4 [i_2] [i_2 - 1] [i_1 + 1]))))));
                        }
                    }
                }
            }
        }
    }
    var_28 = (min(var_28, (((((max(var_7, (var_18 && var_1)))) <= (((var_11 * var_0) / var_8)))))));
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            {
                var_29 = ((((((arr_22 [i_7]) - ((((arr_6 [i_6] [i_6]) > 112)))))) && 3));
                var_30 |= ((arr_9 [i_6] [i_7]) + (arr_20 [16]));
            }
        }
    }
    #pragma endscop
}
