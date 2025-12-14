/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_6 [i_1] = (min((--4294967291), (((max(var_0, var_4))))));
            arr_7 [i_1] = (((((-((max(19, var_6)))))) ? var_3 : (arr_1 [i_0])));
        }
        var_11 = ((!((!(arr_5 [1])))));
    }
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        var_12 = (min(var_12, (((~((((max(var_0, var_0))) ? (min(1, var_0)) : (((-(arr_1 [1])))))))))));
        var_13 = (max(var_13, ((min((max((arr_8 [i_2 - 1] [i_2 - 1]), (min(var_5, var_0)))), (!var_3))))));
        var_14 = (max(var_14, (((((-(arr_1 [i_2 - 1]))) >= ((var_7 ? (arr_1 [i_2 - 1]) : (arr_1 [i_2 - 1]))))))));
    }
    var_15 = ((var_7 ? var_2 : (max(-var_2, ((var_8 ? var_3 : var_6))))));
    var_16 = (((((((var_5 ? var_0 : 4294967291)) == (((var_5 ? -1 : -11))))))) == ((((min(8380416, var_2))) ? (((-32767 - 1) & 0)) : ((57344 ? var_2 : var_10)))));
    #pragma endscop
}
