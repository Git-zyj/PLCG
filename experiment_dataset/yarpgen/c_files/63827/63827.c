/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 += (((((140737488355327 || (!0)))) - (((var_10 != (max(var_7, var_9)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (max(var_13, ((((((7247 ? -140737488355328 : -24))) ? ((((arr_1 [5]) ? (var_7 != 12475472467697425314) : ((var_5 | (arr_1 [i_0])))))) : (((((12475472467697425314 ? 2147483647 : 536870911))) ? var_1 : (((arr_1 [i_0]) ? 5971271606012126302 : (arr_0 [i_0]))))))))));
        var_14 = arr_0 [i_0];
        arr_2 [i_0] = (max((arr_1 [i_0]), (max((arr_0 [i_0]), (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_0] [1] [0] = -388336622;
                    var_15 = (max(var_15, ((((((((min((arr_5 [i_1] [i_1]), (arr_5 [i_0] [i_0])))) ? ((2147483647 << (var_8 - 418059491))) : (arr_3 [i_0] [i_0])))) ? 10306 : ((~(arr_0 [i_0]))))))));
                    var_16 = (min(var_16, var_2));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_15 [i_3] [i_3] [i_4] = (arr_14 [i_4]);

            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                var_17 = ((!226941137) ? (max((arr_1 [1]), ((1 ? (arr_16 [0] [i_4] [0] [i_3]) : (arr_12 [i_3]))))) : var_4);
                var_18 += (((((3621806160 ? 1468832864 : 3571052423))) & ((((arr_8 [i_3] [0] [1] [i_3]) + (var_0 > var_5))))));
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_19 = (((arr_19 [10] [i_4] [10] [3] [i_7]) + (((arr_7 [5] [i_3] [10] [5]) ? ((((arr_7 [i_3] [i_5] [i_3] [8]) & var_1))) : (((arr_3 [1] [i_4]) ? 1 : 1848726812))))));
                            var_20 = var_2;
                            var_21 = (min(var_21, var_8));
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 8;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    {
                        arr_32 [i_3] [i_8] [i_9] [i_10] [i_8] = (arr_17 [i_10]);
                        arr_33 [i_3] [i_3] [8] [i_3] [i_8] [i_8] = (((min(((min((arr_28 [i_10] [5] [i_3]), var_6))), (max(var_5, (arr_17 [i_10]))))) ^ ((((min((arr_5 [i_10] [i_8]), (arr_31 [1] [i_8] [i_9] [i_9] [i_9]))) ^ (!var_9))))));
                    }
                }
            }
        }
        var_22 = (((arr_16 [i_3] [i_3] [1] [i_3]) << (((max((arr_27 [i_3] [5]), ((((arr_13 [2]) ? 31 : var_1))))) - 7930590103405367792))));
        var_23 += ((var_8 || ((((var_10 | (arr_13 [8])))))));
    }
    var_24 = -2147483647;
    var_25 = ((((49 ? 32760 : 46272))) << (min(var_10, ((var_9 ? var_7 : var_3)))));
    #pragma endscop
}
