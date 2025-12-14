/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_20 *= (max(((1252 ? 28789 : 0)), (arr_0 [i_1])));
                    var_21 += ((arr_4 [i_2 - 1] [i_2 - 1]) <= ((1 ? (~-31200) : -1774)));
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    var_22 = (max(var_22, ((((arr_10 [i_0] [1] [i_1] [i_3]) ? (arr_2 [i_0] [1] [10]) : (((arr_6 [i_1] [i_0]) ? (((!(arr_7 [i_0] [i_1] [i_1] [i_3])))) : (arr_1 [i_0]))))))));
                    arr_11 [i_3] [i_3] [i_0] &= -8813;
                    var_23 &= (arr_5 [i_0] [i_1] [8] [i_3]);
                    arr_12 [i_1] [i_0] [i_0] = ((0 ? (arr_0 [i_0]) : (arr_7 [i_1] [i_0] [i_3] [i_3])));
                    var_24 = (max(var_24, ((min(1, ((-((-(arr_1 [i_0]))))))))));
                }
                arr_13 [i_1] = (arr_2 [i_0] [i_1] [1]);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_20 [i_0] [i_1] [i_1] [1] = 7208;
                            arr_21 [i_1] [i_1] = (!(arr_6 [i_0] [i_5 - 1]));
                            arr_22 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = (arr_5 [i_1] [i_1] [i_1] [i_1]);
                        }
                    }
                }
            }
        }
    }
    var_25 = (!var_3);
    #pragma endscop
}
