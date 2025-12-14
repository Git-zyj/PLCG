/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-((((127 ? 2870009547763136687 : var_13)) + (-7 - 0)))));
    var_15 = 2870009547763136679;
    var_16 = ((((((-9223372036854775807 - 1) / var_5))) ? -1 : ((((var_11 || -117) && (-107 && var_2))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_3] [8] = (91 & 1);

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_17 += ((((+((max((arr_10 [i_0] [i_3] [i_2]), (arr_4 [i_0])))))) + ((~(1 >= 1)))));
                            arr_16 [i_3] [i_0] [14] = (114 >> 11);
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_18 = (max(var_18, var_1));
                            var_19 = (min(-1, (((arr_12 [i_3 - 1] [i_3] [i_3] [i_5] [14]) ? (min((arr_4 [i_2]), var_5)) : (((min(var_9, var_8))))))));
                            arr_20 [i_0] [4] [10] [i_2] [i_5] [i_3 + 2] [i_3] = var_9;
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_20 = (min(var_20, (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                            arr_23 [i_0] [i_1] [i_2] [i_3 + 2] [i_3] = (arr_22 [i_0] [6] [i_3] [i_3] [i_6] [i_1] [i_2]);
                            var_21 = (max(var_21, var_6));
                            var_22 = (arr_4 [14]);
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            arr_27 [i_3] [i_3] [i_2] [i_1] [i_3] = arr_9 [6] [5] [i_3 + 1] [0];
                            var_23 = ((((max(92, ((-(arr_18 [i_7] [i_7] [i_3] [1] [i_1] [3])))))) || ((!(arr_9 [i_3 + 2] [i_3] [i_3 - 1] [i_3 + 2])))));
                            arr_28 [i_0] [i_3] = ((1 << (245 - 240)));
                            var_24 = (max(var_24, (((var_11 << (((max(1, 245)) - 240)))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
                    {
                        var_25 += ((-4242095079690377657 && (arr_2 [i_8 + 2])));
                        var_26 = ((var_12 * (arr_10 [i_8 - 1] [i_8 + 2] [i_8 - 1])));
                    }
                    for (int i_9 = 1; i_9 < 13;i_9 += 1) /* same iter space */
                    {
                        var_27 = (var_12 ? 588049549 : ((var_12 ? (arr_33 [i_9] [i_9] [i_2] [i_1] [i_0]) : (~3887149994758855579))));
                        arr_35 [i_9 - 1] [i_2] = arr_32 [i_9] [i_9] [i_2] [i_1] [i_0];
                        arr_36 [i_0] [i_1] [i_2] [i_9 + 1] |= (arr_12 [i_0] [i_2] [i_1] [i_2] [12]);
                    }
                    arr_37 [i_0] [i_1] [i_2] = (((((~(arr_25 [8] [i_1] [i_2] [i_2] [i_1])))) >= (arr_2 [i_2])));
                    var_28 |= 5024545249025586724;
                }
            }
        }
    }
    #pragma endscop
}
