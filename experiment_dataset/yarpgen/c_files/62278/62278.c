/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (min(((min((var_0 == 1213081776), ((~(arr_0 [i_0 + 2] [i_0])))))), -7428762175594447135));
        var_20 = min(var_4, (~var_11));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_7 [i_0] [i_1] [i_0] = (min((arr_5 [i_0]), ((1 ^ (arr_3 [i_0 + 2] [1])))));
            var_21 = (max(var_21, ((((arr_5 [i_0 + 2]) & (arr_5 [i_0 + 2]))))));
        }
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            arr_12 [i_0] = (+(max((arr_9 [i_0 + 2]), (arr_10 [9] [i_2 + 2]))));
            var_22 = (max(var_22, ((!(arr_11 [i_2 - 1] [i_0 + 1])))));
            var_23 += -19;
        }
    }
    for (int i_3 = 1; i_3 < 9;i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] [i_3] = ((((((arr_4 [i_3 - 1]) ? var_16 : 7428762175594447129))) ? (((arr_4 [i_3 + 2]) ? (arr_4 [i_3 - 1]) : (arr_4 [i_3 + 1]))) : ((((!(arr_4 [i_3 + 2])))))));
        var_24 = (min(var_24, ((min((((arr_13 [i_3 + 3]) + (arr_6 [7] [i_3 + 1]))), var_19)))));
    }
    var_25 = var_0;
    var_26 = var_18;
    var_27 = ((((max((15055778915269113245 + 1), (((1 >> (var_13 - 230))))))) || var_2));
    #pragma endscop
}
