/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0 + 2] = ((~((max(8086, 8099)))));
        var_10 = (max(var_10, ((max((!1047701312), 8075)))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] |= ((((((((1637574591 ^ (arr_4 [i_1 + 1])))) ? (arr_0 [i_1 + 2] [i_1]) : (arr_4 [i_1])))) ? (((arr_4 [i_1 - 1]) ? (arr_4 [i_1 + 2]) : (arr_4 [i_1 - 1]))) : ((((((1870614265 ? 2127460224 : (arr_4 [i_1])))) ? (21628 < 8086) : var_4)))));
        var_11 = (((~-6229) != -1916317661));
        var_12 ^= ((+((-1426124015 ? -7 : (((arr_3 [i_1 + 1]) | 8108))))));
    }
    var_13 = var_2;
    var_14 = var_6;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    var_15 *= 21603;
                    var_16 *= (min(((-493838349 ? var_7 : (max((arr_9 [i_2] [i_3] [i_4]), 64314)))), (((0 ? ((1916317654 ? 17987 : -1155046730)) : (-70 && 47553))))));
                    arr_12 [i_4] [i_2] = ((((((((var_0 ? (arr_11 [i_4] [i_4] [i_4] [i_2]) : 1916317660))) ? -9105 : (((!(arr_6 [i_2]))))))) ? ((max((((var_4 && (arr_6 [i_2])))), (arr_6 [i_2])))) : (((~-1916317661) ? ((~(arr_11 [i_2] [i_3] [i_3 - 1] [i_2]))) : (((~(arr_6 [i_2]))))))));
                    var_17 = (arr_9 [i_2] [i_2] [i_4]);
                    arr_13 [i_2] = (min((arr_11 [i_2] [i_3 - 3] [i_3 - 3] [i_2]), (arr_11 [i_2] [i_3 - 3] [i_2] [i_2])));
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    arr_17 [i_2] = 8072;
                    var_18 |= 1;
                }
                var_19 = (max(9223372036854775807, (((!(arr_6 [i_3]))))));
                var_20 = (((~((var_0 ? -29563 : 57428)))));
            }
        }
    }
    #pragma endscop
}
