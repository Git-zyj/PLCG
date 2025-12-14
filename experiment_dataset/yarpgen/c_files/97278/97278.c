/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_6 ? (((((var_0 ? 1 : 1)) >> ((((var_11 ? var_14 : var_12)) - 12316096424974873540))))) : ((0 ? (var_2 | var_6) : (var_9 > var_9))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_16 = var_11;

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_17 = ((((var_8 || var_5) ? ((var_7 ? (arr_4 [i_0] [1] [i_1]) : (arr_1 [i_0] [20]))) : 46447)) ^ ((((((arr_0 [i_0]) ? (arr_2 [i_0] [i_0] [i_1]) : (arr_4 [0] [2] [2])))) ? ((max((arr_2 [i_0] [9] [9]), (arr_1 [i_0] [i_1])))) : (((arr_2 [i_0] [0] [i_1]) ^ var_13)))));
            var_18 ^= (((max(((var_9 ? (arr_1 [i_0] [i_1]) : (arr_3 [4] [i_1] [5]))), 1)) ^ (((arr_1 [i_0] [i_1]) ? (((arr_0 [i_1]) ^ 32768)) : (arr_2 [i_0] [i_0] [i_1])))));
            arr_5 [i_0] [i_1] = 16378133713939614090;
            arr_6 [i_1] [i_0] = -var_2;
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_19 = ((2068610359769937525 | (((min((arr_0 [i_2 - 1]), (arr_1 [i_2] [i_0])))))));
            arr_9 [i_2 - 1] = (arr_7 [i_2]);
        }
        var_20 ^= (min((((1 ? (arr_8 [16] [16]) : (arr_8 [i_0] [1])))), ((-1 ? -704 : 46447))));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] [i_3] = (((-56698 ^ (((arr_7 [i_3]) ? 13187567573073615602 : 13187567573073615602)))));
        var_21 = (min(var_21, (arr_7 [i_3])));
        var_22 = ((((min(((max(-17617, 1))), (arr_0 [i_3])))) ? ((max((((arr_11 [i_3]) ? 0 : (arr_12 [i_3]))), (arr_12 [i_3])))) : ((var_5 ? (((arr_11 [i_3]) | 10871946640568626429)) : (((arr_2 [0] [i_3] [i_3]) ? (arr_7 [i_3]) : 640079088606288676))))));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_23 = (5201950367121166019 / 19075);
        arr_16 [19] [i_4] = (arr_2 [i_4] [i_4] [i_4]);
        var_24 -= (arr_1 [i_4] [i_4]);
        var_25 = ((!(((((19075 ? (arr_4 [i_4] [i_4] [i_4]) : 56698))) || 32767))));
    }
    var_26 = var_8;
    var_27 = (min((min((((var_1 ? -103 : 65526))), ((var_11 ? 0 : var_14)))), var_5));
    var_28 = (!var_1);
    #pragma endscop
}
