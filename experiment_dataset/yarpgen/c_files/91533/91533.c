/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (((min(0, (arr_1 [i_0])))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_1] = -7440190109650756129;
            var_11 = (min((((((arr_5 [10] [i_1] [i_1]) ? (arr_3 [11]) : 1)))), -4742160598990107463));
            var_12 = (min((((((var_8 ? 0 : (arr_3 [i_0])))) ? ((-(arr_4 [5] [15]))) : 1)), ((((0 ? 1 : 1))))));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_13 = (min((arr_0 [i_0] [i_2]), ((((347327831 ? var_3 : -1652520339)) - ((((arr_7 [i_2] [15]) ? var_4 : 12288)))))));
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        var_14 = (max(var_14, var_7));

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            arr_19 [8] [i_5] [i_5] [2] [i_5] &= ((((((min((-2147483647 - 1), 1))) ? (((~(arr_12 [i_5] [i_4] [i_3 - 1] [i_0] [i_0])))) : (arr_11 [i_0] [i_0] [i_0] [i_0]))) > (((min(var_9, 1))))));
                            arr_20 [i_0] [i_3] [i_0] = (min(var_9, 7793978298878921824));
                            var_15 = (((arr_16 [4] [i_2]) | (min((arr_18 [i_3] [i_3] [i_3] [i_3 - 2] [i_3]), ((min((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0]))))))));
                            var_16 |= (min(0, -295));
                        }
                        for (int i_6 = 3; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            arr_23 [2] [8] [i_3] [i_3 + 1] [1] [i_6] = var_5;
                            var_17 -= (min(31, (arr_18 [10] [10] [i_6] [i_0] [i_6 - 3])));
                            arr_24 [i_0] [i_0] [i_2] [4] [i_4] [i_6 + 1] [14] |= ((((min(72057593501057024, var_9))) ? (min((((var_3 ? 5746311607264219432 : (arr_16 [12] [i_2])))), (min(var_10, var_2)))) : ((((1 == (arr_12 [11] [i_6 + 1] [4] [i_6 + 1] [i_6 - 1])))))));
                        }
                        for (int i_7 = 3; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            var_18 += (min(163784596, 42508));
                            var_19 = (min(var_2, (((var_1 >> (var_5 - 6288))))));
                        }
                    }
                }
            }
            arr_27 [i_0] = -var_0;
        }
    }
    var_20 |= var_8;
    #pragma endscop
}
