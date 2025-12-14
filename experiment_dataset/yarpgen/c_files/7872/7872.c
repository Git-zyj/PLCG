/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((var_0 + 536870912) ? (-536870912 & 0) : var_6))) ? (var_3 % var_8) : (((((0 ? (-127 - 1) : var_6))) ? (var_0 / -536870912) : -536870911))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 = ((((((~(arr_0 [i_0]))))) || ((((!var_3) | ((((arr_3 [i_0] [i_1] [i_0]) != (arr_2 [i_0] [i_2])))))))));
                    var_13 = 11473571770814664244;
                    var_14 = ((((((((0 ? -536870912 : (arr_0 [i_0])))) ? ((0 ? var_9 : var_5)) : var_8))) ? ((((((var_5 + 2147483647) << (((arr_1 [i_0] [i_0]) - 1103130917)))) != (var_10 ^ -2126241593)))) : (((4230016194 <= var_10) - ((var_1 ? (arr_3 [i_0] [i_1] [i_2]) : (arr_6 [i_0] [4] [i_2] [i_0])))))));
                    var_15 -= ((((((~(arr_2 [2] [i_1]))) & (~181)))) ? ((~(~var_3))) : (((((var_10 ? (arr_4 [i_0] [i_0] [i_2] [i_1]) : (arr_6 [i_2] [i_2] [i_2] [i_1])))) ? (var_7 & var_8) : (~var_7))));
                }
            }
        }
    }
    var_16 = ((((((var_2 ? var_5 : 134)) ? ((var_5 ? -31727 : var_2)) : ((1825396770 ? var_2 : var_2))))));
    var_17 = ((((-(0 % var_7))) <= ((-1 | ((-23072 ? -2126241593 : 2126241593))))));
    #pragma endscop
}
