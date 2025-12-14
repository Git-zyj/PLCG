/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [12] = (((min((((arr_3 [15]) ^ 1)), var_9)) + ((var_2 ? (arr_3 [i_1]) : (arr_3 [i_0])))));
                var_14 = (max(var_14, (arr_3 [i_0])));
                var_15 *= (min(((15922556384736601358 ? 9223372036854775807 : -2773775647057907738)), ((((arr_2 [i_1] [i_0]) ^ (arr_3 [i_1]))))));
            }
        }
    }

    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        var_16 = ((((var_10 ? (arr_6 [i_2 - 2]) : (arr_6 [i_2 - 2]))) << (2265093650 <= 2265093641)));
        var_17 = (max(var_17, (((+(((21605 % 1) + ((6487265216574981836 ? (arr_5 [i_2 + 2] [i_2 + 1]) : (arr_5 [i_2 - 2] [i_2 + 2]))))))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_18 = (((((arr_6 [i_2 - 1]) > (arr_7 [i_3] [11]))) ? (((var_13 ? var_3 : var_2))) : (min(((6533464072017726357 ? var_12 : var_11)), (arr_7 [i_2] [i_3])))));
                    var_19 = (max(((((((arr_5 [i_4] [i_2]) ? 26448 : (arr_6 [i_2 + 1])))) ? ((var_1 ? var_10 : (arr_6 [i_3]))) : -var_7)), (((!((((arr_11 [7] [i_3] [i_2] [i_2 + 2]) ? var_0 : var_11))))))));
                    arr_12 [i_2] [i_2 - 1] = (((arr_5 [i_2 + 2] [i_2 + 3]) ? (((1 ? 9223372036854775807 : 3710197184))) : ((var_12 ? -var_8 : var_1))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_20 += (min((arr_14 [10] [10] [i_6] [11] [i_6 + 1]), (((arr_8 [i_2 - 2] [i_6 - 1]) ? 1 : (arr_8 [i_2 - 2] [i_6 - 1])))));
                                arr_18 [i_2] [i_2] [i_4] [i_5] [i_6] = (((((+(min((arr_9 [i_2] [i_4] [i_5] [i_6]), (arr_7 [i_6 - 2] [i_2])))))) || ((((arr_16 [i_2 - 1] [i_2 + 1] [i_6 - 1]) ^ (arr_8 [i_5] [i_6 - 2]))))));
                                arr_19 [i_2] [i_3] [i_6] [i_5] [i_6] [i_4] = (min((arr_11 [i_2] [i_3] [i_4] [i_2 + 1]), (((arr_11 [i_2] [i_2 - 2] [i_4] [i_2 + 2]) && var_3))));
                                var_21 ^= (((((2147483647 ? (arr_17 [i_6] [19] [i_5] [i_4] [7] [i_3] [i_2]) : var_4))) ? (((arr_9 [i_2] [i_2] [i_4] [i_5]) - (((var_10 ? var_6 : var_4))))) : ((((arr_6 [18]) ^ ((max(var_7, (arr_7 [i_4] [i_6])))))))));
                            }
                        }
                    }
                    var_22 *= ((((min((((var_1 > (arr_6 [i_3])))), ((~(arr_14 [i_2 + 3] [3] [i_3] [i_4] [i_2 + 3])))))) ? (((arr_5 [i_2 + 2] [i_3]) % (arr_13 [i_2 - 2] [i_2 + 2] [i_2 + 1] [i_3] [i_3] [i_3]))) : ((((((var_11 ? var_6 : var_6)) <= var_4))))));
                }
            }
        }
    }
    var_23 = ((var_0 ? ((var_5 ? var_5 : ((var_2 ? var_10 : 240)))) : -var_10));
    var_24 = ((((((((var_3 ? var_6 : var_3))) ? ((-4778621648617246536 ? 26500 : 229)) : var_7))) ? (((((127 ? 11913280001691825246 : 3710197165))) ? 9246155705878511166 : 11913280001691825246)) : ((~((var_0 ? var_1 : 127))))));
    #pragma endscop
}
