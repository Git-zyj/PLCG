/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            var_20 = (min(var_20, ((max(var_18, (arr_5 [0] [i_1]))))));
            arr_6 [i_0] [i_1] [i_1] = (((arr_5 [i_1] [i_1]) ? (((((52405 == (-32767 - 1))) && ((max(6129390773727437626, var_16)))))) : (max(((var_18 ? var_13 : var_8)), (((var_12 > (arr_2 [i_0]))))))));
            var_21 = (max(((((arr_1 [i_1] [i_1 - 1]) ? (arr_1 [i_1] [i_1 + 1]) : (arr_4 [i_1] [i_1 - 2])))), (((((var_2 ? 14419204224491237731 : (arr_0 [i_1])))) ? var_5 : (arr_1 [i_1 - 3] [i_1 - 3])))));
            arr_7 [i_1] = (8317 / (((arr_3 [i_1] [i_1]) / (arr_3 [i_1 + 1] [i_1]))));
        }
        arr_8 [i_0] [i_0] = (arr_3 [i_0] [8]);
        arr_9 [i_0] = (((((var_10 % (arr_3 [i_0] [4])))) ? 56487 : ((64 ? (((1 * (arr_1 [i_0] [i_0])))) : 74))));
    }
    var_22 = ((!(-2147483647 - 1)));
    #pragma endscop
}
