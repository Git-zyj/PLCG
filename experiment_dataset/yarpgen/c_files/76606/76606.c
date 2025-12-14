/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((max(var_17, var_12)), ((((min(-100656289516973368, 255))) - (max(var_5, var_15))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (((((!(arr_3 [i_1] [i_1])))) != (arr_0 [i_0] [i_0])));
            arr_6 [i_0] [i_0] = (arr_0 [i_1 - 1] [i_1 - 1]);
            arr_7 [i_0] [i_1] [i_0] = var_11;
            arr_8 [12] [1] = (((arr_1 [i_1 - 1]) ? var_0 : 100656289516973363));
        }
        arr_9 [i_0] = (arr_1 [1]);
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] [i_2] = (~100656289516973368);
        arr_14 [17] = (min((arr_1 [i_2]), (min(((min(var_8, (arr_2 [1] [1])))), ((~(arr_12 [i_2])))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    arr_21 [i_2] [i_3] = (((arr_10 [i_3]) >= (((arr_16 [i_2] [i_2] [i_2]) ? (~var_3) : 0))));
                    arr_22 [i_2] [i_2] = (min(1, 5895920948181996629));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_29 [i_2] [i_2] [i_2] [i_5] [10] [i_6] = ((((((arr_23 [12] [i_3] [12] [12]) ^ var_17))) <= ((((((arr_3 [i_4] [9]) * (arr_20 [i_2] [i_3] [i_3]))) * var_1)))));
                                arr_30 [i_6] [i_6] [13] [i_6] [i_2] = (((((((11583116273582561871 ? 12550823125527554986 : 1))) && 11212800385197289614)) || 1));
                            }
                        }
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            arr_33 [i_7] = (~0);
            arr_34 [4] = max((max((max(var_19, 5895920948181996629)), ((119 ? 1 : 9905783136007288703)))), (((-(arr_15 [i_2] [i_7] [i_2])))));
            arr_35 [i_7] = (((((arr_3 [i_2] [i_2]) ? var_0 : var_19)) - (arr_20 [i_2] [11] [i_7])));
        }
    }
    #pragma endscop
}
