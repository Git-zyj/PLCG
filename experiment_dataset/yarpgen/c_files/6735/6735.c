/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [0] [i_1] [8] [8] [i_1] = (min((~38473), (arr_8 [i_0] [i_1] [i_4])));
                                arr_15 [i_0] [i_2] [i_2] = (((arr_7 [i_1] [i_3 - 1] [i_3] [i_3 + 3]) / (max(var_0, (arr_10 [i_0] [i_3 - 1] [i_3] [i_3 + 1] [i_3 - 3])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_5] [i_0] = var_3;
                                arr_22 [i_0] [i_0] = (arr_13 [i_0] [i_1] [i_0] [i_2] [i_1] [10]);
                                arr_23 [1] [1] [i_0] [i_5] [i_6] = ((~((((min(var_5, (arr_4 [i_0] [i_0])))) + 64))));
                                arr_24 [i_0] [i_1] [i_2] [i_5] [i_6] = (arr_16 [i_0] [i_1] [i_2] [i_5] [i_6]);
                            }
                        }
                    }
                    arr_25 [i_0] = ((((((var_3 ^ (arr_5 [i_0] [i_1] [i_2]))) > (var_10 | var_3))) ? ((((((49978 || (arr_6 [6] [i_0] [i_2])))) < ((max(var_8, (arr_13 [i_2] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : (max(((~(arr_6 [i_2] [i_1] [i_2]))), (((var_3 >= (arr_10 [i_0] [9] [11] [i_0] [9]))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                arr_30 [i_2] [i_1] [i_2] [i_2] [i_7] [i_0] [i_2] = ((!(arr_3 [i_7])));
                                arr_31 [i_0] [i_1] [i_2] [i_0] [i_8] = ((var_7 ? (min(-1, (arr_11 [i_0] [i_0] [i_2] [i_0] [i_8]))) : ((max((!var_4), 5497)))));
                                arr_32 [i_0] [i_1] [i_2] [i_0] [i_8] = (((min((arr_19 [i_0] [8] [8] [i_8] [8]), ((-(arr_10 [4] [i_2] [i_2] [i_1] [5])))))) ? 1 : (min(47, 17610319670408787372)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
