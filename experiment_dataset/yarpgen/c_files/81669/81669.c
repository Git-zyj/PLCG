/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 += ((((min(65535, var_8))) ? (((~(arr_2 [i_0])))) : ((((min(1, 225))) ? (max(var_2, var_9)) : 2463818191))));
                arr_6 [i_1] [i_1] = 0;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [i_2] = arr_0 [i_0];
                    arr_11 [i_0 - 1] [i_2] = 5;
                    var_12 = (max(var_12, (((!(((3093867547351861110 ? var_5 : 0))))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_13 = (min(var_13, (arr_16 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 2])));
                        arr_18 [i_4] [i_3] [i_1] [6] = (!var_1);
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [1] [i_0 - 2] [i_0] [i_5] [i_0] = ((233 ? var_10 : 2390361507));
                                var_14 = (arr_5 [i_6] [i_6] [i_6]);
                                var_15 ^= ((var_10 ? (~55) : ((205 ? 1 : 1))));
                            }
                        }
                    }
                    var_16 = var_3;
                    var_17 ^= (arr_7 [i_3]);
                }
                for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                {
                    arr_26 [i_7] [12] [i_0 - 1] &= arr_12 [i_0] [4] [i_0 - 1];
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_18 = (min(var_18, (((-(min(((1 >> (((arr_20 [i_8]) - 13391)))), 255)))))));
                                var_19 ^= 1;
                                var_20 = (((!(((~(arr_15 [i_1])))))));
                            }
                        }
                    }
                    var_21 = (arr_16 [i_0] [i_1] [i_7] [4]);
                    var_22 = ((((min((~1), (~1)))) ? -2141752056158953584 : var_4));
                }
                arr_33 [i_0] = arr_30 [5] [i_1] [i_0 - 1] [i_0] [i_0] [i_0];
                var_23 = (((((arr_3 [i_1] [i_0 - 1] [i_0 - 1]) % var_3))));
            }
        }
    }
    var_24 = ((((var_7 ? var_10 : var_8)) * (((((1119522279 ? var_4 : 197864634548617043))) ? ((1 ? 35027 : 1)) : (min(var_4, var_8))))));
    #pragma endscop
}
