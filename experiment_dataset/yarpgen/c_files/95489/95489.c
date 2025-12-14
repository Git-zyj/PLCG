/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = (max(var_19, ((((((((min(var_1, 2147483647))) ? (arr_1 [i_0]) : (max(var_3, 14183325440965778972))))) ? (var_0 ^ 1527587651) : (max(((((arr_0 [i_0] [i_0]) > 65280))), (arr_0 [12] [i_0]))))))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_20 = ((-(((16 >= (arr_1 [i_0]))))));
                            var_21 = (i_3 % 2 == zero) ? ((((arr_3 [i_0]) << ((((4013821917 ? (arr_6 [i_0] [i_3] [i_3] [i_3] [i_4]) : -27)) + 23967))))) : ((((arr_3 [i_0]) << ((((((4013821917 ? (arr_6 [i_0] [i_3] [i_3] [i_3] [i_4]) : -27)) + 23967)) - 28457)))));
                            var_22 = (((7455902639290570099 ? 14655190686112004 : 17847)));
                        }
                    }
                }
            }

            for (int i_5 = 4; i_5 < 18;i_5 += 1)
            {
                arr_12 [i_1] [i_5] = -47301;
                var_23 = 3;

                for (int i_6 = 1; i_6 < 18;i_6 += 1)
                {
                    var_24 = (min((min((2787 && -32755), ((var_5 ? var_12 : 1220392375)))), (1796175294745030430 > var_3)));
                    arr_15 [i_5] = (((max((min(-32679, var_6)), 1796175294745030430))) ? (((arr_5 [i_6 + 2] [i_5] [10] [i_5]) / var_8)) : (((var_14 ? ((((arr_4 [i_0] [i_5 - 3] [i_6]) && var_13))) : (((!(arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]))))))));
                }
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    arr_19 [i_0] [i_1] [i_5] [i_5] [i_5] = ((((min(((~(arr_2 [i_7]))), (var_1 & 272265197)))) ? (max((((arr_9 [i_0] [i_1] [i_5 - 3] [i_5] [i_1]) ? (arr_1 [i_1]) : var_14)), var_11)) : (2787 ^ 10)));
                    var_25 = (arr_14 [i_0] [i_0] [i_1] [i_5] [i_7]);
                    var_26 = ((!((((((var_6 ? -32756 : var_5))) ? ((39103 ? (arr_17 [i_0] [i_0] [i_5] [14] [14] [i_1]) : (arr_14 [i_7] [i_5] [i_1] [i_0] [i_0]))) : (((var_12 ? 227 : 32767))))))));
                    arr_20 [i_0] [i_1] [i_5] = 1072458718;
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_27 = ((((min(((min(var_10, var_11))), 20))) >= ((((!(arr_6 [i_0] [i_5] [i_5] [i_8] [i_5]))) ? (min(-21767, 7351935295249635080)) : (((((arr_23 [i_8] [i_1] [i_5] [i_8] [i_0] [i_5]) != var_13))))))));
                            var_28 = ((((((arr_2 [i_1]) ? var_4 : (((arr_4 [i_0] [i_0] [i_5]) + var_11))))) ? -0 : ((-(arr_22 [i_0] [4] [i_5] [i_8] [i_9])))));
                        }
                    }
                }
            }
        }
    }
    var_29 = var_5;
    var_30 -= ((((((((var_13 ? 308825125 : 2047))) ? (((-2057 / (-2147483647 - 1)))) : (~var_13)))) && (~3818471225)));
    #pragma endscop
}
