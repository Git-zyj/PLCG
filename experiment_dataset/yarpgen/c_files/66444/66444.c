/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((-8184 ? (min(var_7, var_3)) : (var_3 || var_3))) * ((max((-1085478150 / var_1), (var_2 <= var_1))))));
    var_11 = (max(((40049 & ((var_8 ? var_4 : var_5)))), (min((max(var_7, 49892)), ((min(var_5, 5397)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_12 = 558446353793941504;
                var_13 = (min((((-1 || (((-(arr_2 [i_0]))))))), (arr_3 [i_1 - 1] [i_1 - 1] [i_1])));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] = (((arr_4 [i_0] [i_0] [i_0]) & ((~(arr_1 [i_2] [6])))));
                    arr_8 [i_2] [i_0] = 29622;
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    arr_11 [i_0] [i_1] [i_0] = (arr_3 [i_0] [3] [3]);
                    arr_12 [i_0] = 29637;
                    var_14 = ((1 ? (((min(1, 130)))) : (min((arr_9 [0] [i_1] [i_3]), (var_2 - 17888297719915610101)))));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 8;i_5 += 1)
                        {
                            {
                                var_15 = (((arr_10 [3] [i_4] [i_4]) <= 14869));
                                arr_19 [i_0] [i_1] [i_3] [i_0] [i_5] = 15121716257645356379;
                            }
                        }
                    }
                }
                arr_20 [i_0] = (1 / var_5);
            }
        }
    }
    var_16 = (max((var_3 > 1), ((var_9 ? (((max(3863, var_9)))) : (max(var_3, 17888297719915610098))))));
    var_17 = (50667 <= 50667);
    #pragma endscop
}
