/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 25;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_5 [14] [i_0] [8] &= (max((((((((arr_2 [i_0]) < 50)))) / (((arr_2 [i_0]) ? var_16 : (arr_4 [1] [9]))))), ((var_8 ? (~92) : (arr_2 [i_0])))));
            arr_6 [i_0] = ((((max((arr_1 [i_0]), (arr_1 [i_0])))) ? (arr_2 [i_1]) : (((((-(-127 - 1)))) ? (((arr_4 [i_1] [i_1]) ? (arr_2 [11]) : (arr_0 [i_0]))) : ((14554 ? (arr_4 [i_0] [i_1]) : (arr_1 [i_1])))))));

            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                arr_9 [i_0] = (max(var_6, 9157988957148662154));
                arr_10 [i_1] [i_1] [i_2] = ((-(max((arr_1 [i_2 + 1]), -820648157))));
                var_20 = (min(var_20, (((((arr_7 [i_2 + 1] [i_2 + 1] [i_2]) ? (arr_7 [i_2 + 1] [i_2 + 1] [i_2]) : (arr_0 [i_2 + 1])))))));
            }
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_21 += -43;
            var_22 -= (min(((((((min(var_9, var_1))) + 2147483647)) >> ((((min((arr_1 [6]), (arr_8 [i_0])))) - 10833)))), ((max(-37, (arr_14 [i_0]))))));
            arr_15 [i_0] [11] [i_3] = (min((((((!(-2147483647 - 1))) && 3966825026))), -820648157));
        }
    }
    var_23 = ((((var_14 >> (2398166639 - 2398166630)))));
    #pragma endscop
}
