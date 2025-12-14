/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    var_21 &= -var_3;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((min((!var_7), ((var_8 ? (arr_1 [i_0 + 1] [i_0]) : (arr_1 [i_0] [i_0]))))) == (((11813 ? -7542608059625480840 : 0)))));
        arr_3 [i_0] [i_0] = (min(26217, ((((arr_0 [i_0]) > -82)))));
        arr_4 [i_0] = 51911;
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        arr_7 [i_1] = ((-(arr_5 [i_1])));
        arr_8 [i_1] = (39319 % 1201197442);
        var_22 = ((120609322294078524 ? 9223372036854775795 : 29942));

        for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_23 = ((!((((((arr_6 [i_1] [i_1]) % (arr_10 [i_1 - 2] [i_1]))) + 39301)))));
            arr_11 [i_1] [i_2] = (arr_9 [6] [i_2] [6]);
            var_24 = ((-(arr_9 [i_1] [i_2] [i_2])));
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
        {
            arr_14 [i_1] = (((((-882301109004192869 ? (((~(arr_9 [5] [i_3] [i_3])))) : ((var_6 ? 0 : var_9))))) ? (((4294967286 ? (arr_12 [i_1 - 1] [i_3]) : (arr_6 [i_1] [i_3])))) : ((((arr_10 [i_1] [i_1]) ? (0 <= var_13) : var_7)))));
            arr_15 [i_1] [i_1] = (arr_5 [i_3]);
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_18 [i_1] [i_4] = (((((((arr_13 [i_1] [i_4]) ? 18446744073709551607 : var_12)))) ? (arr_9 [i_1 + 3] [i_1] [i_4]) : (max(51911, 36523))));
            var_25 = ((21320 | (arr_9 [2] [i_4] [i_1])));
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_26 = ((-21657 || ((max(1644209193, 1415196675)))));
            var_27 &= (((((((1 << (((arr_20 [i_5] [i_5]) + 3160176729530286562)))) << (((arr_13 [i_5] [i_1 + 4]) - 621047649))))) & (min((-2147483647 - 1), (((arr_17 [4]) ? (arr_20 [i_5] [i_1]) : (arr_19 [10])))))));
        }
    }
    for (int i_6 = 2; i_6 < 12;i_6 += 1)
    {
        var_28 = ((((!(((17521133928094909528 << (((arr_24 [i_6]) - 9663816021309892619))))))) ? ((max((arr_19 [i_6]), 34835))) : (arr_16 [i_6] [i_6] [i_6])));
        var_29 = ((((max(53722, 2467416605))) ? 0 : ((min((((arr_0 [i_6]) != (arr_16 [i_6] [i_6] [i_6]))), (((arr_17 [i_6]) == var_3)))))));
    }
    #pragma endscop
}
