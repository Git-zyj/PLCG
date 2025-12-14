/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((~var_7) % (max(0, var_0))))) ? (((max(2147483584, 2147483584)) << (((~2504402095) - 1790565198)))) : (!126393612));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_4 [i_0] [i_1] = (((arr_2 [i_0] [i_1]) > ((var_2 ? (arr_2 [4] [i_0]) : var_9))));
            var_17 = ((-(arr_0 [i_0])));
            var_18 = (arr_1 [i_1]);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_7 [i_2] = (((-101 ? var_5 : (arr_6 [i_2] [i_2]))));
            var_19 = (arr_6 [i_2] [i_2]);
        }
        var_20 = (min((max((((arr_6 [2] [i_0]) ? 3004844111 : (arr_0 [i_0]))), (arr_1 [i_0]))), var_6));
        arr_8 [i_0] = (max((!var_6), ((((((arr_5 [i_0] [12]) ? (arr_1 [i_0]) : 37670))) + var_3))));
        var_21 = (((((((max(var_10, -4229076205490607417))) ? (arr_5 [i_0] [i_0]) : (!var_4)))) ? var_8 : (((arr_2 [i_0] [i_0]) ? ((((((arr_2 [2] [2]) + 2147483647)) >> (11162 - 11136)))) : ((-(arr_3 [i_0] [i_0])))))));
        var_22 = var_14;
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_23 = (max((((-1385170394 - (arr_10 [i_3])))), (((!(((var_6 ? (arr_11 [i_3]) : (arr_10 [i_3])))))))));
        arr_12 [i_3] = ((+(((arr_9 [i_3] [i_3]) ? 1990534001 : (arr_11 [i_3])))));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_24 = (max((((-(arr_14 [i_4])))), ((((((arr_16 [i_4]) * (arr_13 [i_4])))) ? var_15 : (max((arr_15 [i_4]), var_1))))));
        arr_17 [7] = ((+((((min((arr_15 [i_4]), var_5))) ? -1385170405 : (min((arr_13 [i_4]), (arr_11 [17])))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_21 [i_5] = (((var_3 ? -6612 : 4485727274137083566)));
        var_25 = (var_4 & 2147483712);
        arr_22 [i_5] = ((var_2 >> ((((var_7 + (arr_16 [i_5]))) - 113576148654990222))));
    }
    #pragma endscop
}
