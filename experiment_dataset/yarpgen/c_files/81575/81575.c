/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (min((min(((-(arr_1 [i_0]))), (arr_1 [i_0]))), 63));
        arr_3 [i_0] = 15;
        var_17 = (min(var_17, (((((min(((((arr_1 [i_0]) && 64235))), (max((arr_1 [i_0]), (arr_1 [i_0])))))) ? (((~(arr_0 [14] [14])))) : ((((!(arr_0 [12] [12]))) ? (((max(0, 35721)))) : 18446744073709551615)))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((arr_1 [i_1]) != (((-(arr_0 [14] [14]))))));
        arr_7 [i_1] [i_1] = ((!(~96)));
        var_18 = (min(var_18, (((~(arr_0 [4] [i_1 - 1]))))));
        arr_8 [i_1] = ((-((33143 - (arr_1 [i_1])))));
    }
    var_19 = (((~((-1 ? 12 : 1301)))));
    var_20 = 18446744073709551615;
    var_21 ^= ((max(29815, var_1)));
    #pragma endscop
}
