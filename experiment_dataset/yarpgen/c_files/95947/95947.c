/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = ((+(min((arr_1 [i_0]), (arr_2 [i_0] [i_0])))));
        var_10 = (min(var_10, (((((min(((((arr_1 [i_0]) >> (((arr_2 [0] [3]) - 14801843572832940562))))), (arr_2 [i_0] [i_0])))) ? (arr_0 [i_0]) : (((min(var_3, (arr_2 [i_0] [i_0]))) & var_3)))))));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_11 = ((((((arr_5 [i_1 - 1]) < (((arr_4 [i_1 + 1] [i_1 + 1]) ? (arr_5 [i_1 + 1]) : (arr_4 [0] [17])))))) < ((-(((arr_4 [1] [i_1 - 1]) ? 31 : (arr_5 [i_1 + 1])))))));
        var_12 = (((min(((211 & (arr_4 [i_1 + 1] [i_1 + 1]))), (arr_5 [i_1 - 1]))) < ((((((arr_4 [i_1] [18]) ? (arr_5 [i_1]) : (arr_4 [2] [1]))) < ((max((arr_4 [2] [1]), (arr_5 [i_1 - 1])))))))));
        var_13 = (((((((min((arr_4 [i_1] [i_1 - 1]), 224))) ? (((!(arr_4 [i_1 - 1] [i_1 + 1])))) : ((min((arr_5 [i_1]), 28389)))))) ? ((-5119013407884731983 ? (arr_4 [i_1 + 1] [i_1 + 1]) : 2251896401)) : (((+(((arr_5 [0]) ? (arr_5 [i_1]) : (arr_4 [i_1 - 1] [i_1 - 1]))))))));
    }
    for (int i_2 = 1; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_14 = ((((min((arr_5 [i_2 - 1]), (arr_9 [i_2 + 1])))) << ((((max(var_8, (arr_5 [i_2])))) ? ((((!(arr_5 [i_2 + 1]))))) : (min((arr_8 [i_2 + 1]), 3))))));
        var_15 += ((!((((arr_7 [i_2 + 1]) ^ ((((arr_5 [i_2]) ? (arr_9 [1]) : -1))))))));
        var_16 = (((!(arr_5 [i_2 - 1]))) ? ((-(((arr_8 [i_2]) ? 1755726372 : var_9)))) : ((((!((((arr_5 [i_2 + 1]) ? (arr_6 [i_2]) : (arr_5 [15])))))))));
    }
    var_17 = var_1;
    #pragma endscop
}
