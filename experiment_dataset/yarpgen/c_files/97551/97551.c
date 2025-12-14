/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [11] [7] [7] = (max(var_0, ((((arr_3 [i_1] [i_0]) < (arr_2 [i_0] [0]))))));
                arr_7 [i_0] [i_1] = min((arr_0 [i_0] [i_1]), (((!(arr_0 [i_0] [i_0])))));
                var_12 = (-1 / -var_7);

                for (int i_2 = 1; i_2 < 13;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] &= min(131071, (arr_3 [i_0] [i_2 + 2]));
                        var_13 = var_10;
                        var_14 = min(var_10, ((min(var_1, var_4))));
                    }
                    for (int i_4 = 3; i_4 < 13;i_4 += 1)
                    {
                        var_15 = (min(var_15, ((((-(arr_10 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_4 - 1])))))));
                        arr_15 [i_0] [i_2] [i_0] = (min(var_0, ((((min(14689013198519724693, var_8)) >= ((((!(arr_14 [i_0] [i_0] [5] [i_0]))))))))));
                    }
                    var_16 = (min((min(4294967295, (min(2338581476, 1956385805)))), (((!((max(233, 311316438))))))));
                }
                for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
                {
                    var_17 = (arr_4 [i_1]);
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_18 = var_9;
                                var_19 &= ((!((4294967288 || (arr_10 [i_0] [i_5 + 1] [i_5] [i_5])))));
                                arr_22 [i_1] = ((!(((~(arr_13 [i_1] [i_6] [i_5 + 2] [i_7]))))));
                            }
                        }
                    }
                    var_20 *= (~2100857817);
                    var_21 = var_11;
                }
            }
        }
    }
    var_22 = (min(4294836225, (!11832)));
    #pragma endscop
}
