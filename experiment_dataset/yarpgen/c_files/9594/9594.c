/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((var_6 ? (arr_4 [i_1]) : var_3));
                var_14 = (max((-839569522 % 22), (((arr_2 [i_1] [i_1] [i_0]) & (arr_2 [i_1] [i_1] [i_0])))));

                for (int i_2 = 1; i_2 < 18;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_1] = (arr_7 [i_0] [i_1] [i_2]);
                    arr_9 [i_0] [i_0] [i_0] = (arr_6 [i_0] [i_0]);
                }
                for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
                {
                    var_15 = ((((((arr_3 [i_3 + 1]) ? (arr_3 [i_3 + 2]) : (arr_3 [i_3 + 2])))) ? (max(var_8, (arr_3 [i_3 - 1]))) : (arr_3 [i_3 + 2])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_16 = ((((((arr_11 [i_0] [i_1] [i_3]) ? (arr_11 [i_0] [i_1] [i_5]) : (arr_11 [i_1] [i_3] [i_0])))) ? ((~(arr_17 [i_4] [i_1] [i_3] [i_3 - 1] [i_1]))) : (((arr_11 [i_0] [i_1] [i_0]) & var_12))));
                                arr_20 [i_5] [i_3] [i_3] [i_1] [i_3] [i_0] = ((arr_10 [i_0]) > ((var_2 ? (((arr_0 [i_4]) ? 51 : (arr_10 [i_4]))) : (arr_16 [i_3 + 2] [i_1] [i_0] [i_4] [i_3] [i_3]))));
                                arr_21 [i_3] [i_4] [i_3] = (((((((var_13 ? (arr_15 [i_5] [i_3] [i_3] [i_1] [i_3] [i_0]) : var_10)) & var_8))) ? (arr_15 [i_5] [i_3] [i_3] [i_1] [i_3] [i_0]) : (arr_17 [i_5] [i_1] [i_3] [i_3 + 1] [i_0])));
                                var_17 = ((-(min((((arr_2 [i_0] [i_5] [i_3]) ? (arr_3 [i_3]) : var_3)), 0))));
                            }
                        }
                    }
                    arr_22 [i_3] = ((var_7 < (((arr_7 [i_3] [i_3 + 1] [i_3 + 1]) ? (arr_7 [i_3] [i_3 + 1] [i_3 + 2]) : -4341))));
                }
                arr_23 [i_1] [i_0] [i_0] = (((var_2 != ((8571772193178660139 ? 21 : -1157159782)))) ? var_5 : ((var_13 ? (arr_10 [i_1]) : (arr_14 [i_0] [i_1] [i_0]))));
            }
        }
    }
    var_18 = (((max(((min(var_8, var_11))), 23)) == (((max(var_1, (max(var_6, var_1))))))));
    var_19 = (~-90);
    #pragma endscop
}
