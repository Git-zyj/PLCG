/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (max(((((max(-119, 0))) ? (var_7 & 16383) : var_6)), var_13));
    var_15 = (min((((var_12 * -61) + var_2)), -20209));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = ((((var_12 ? 240 : (((arr_0 [i_0 - 2] [i_0]) ? (arr_3 [i_0]) : 0)))) == (((var_2 & (!var_13))))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_16 = 198682024;
            arr_7 [i_1] = -1;

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                arr_12 [i_2] [i_0] [i_1] [i_0] = ((((((!(arr_0 [i_0 + 1] [i_0 + 1]))))) ? (arr_8 [i_1] [i_1] [i_1] [i_1]) : -198682024));
                var_17 += (arr_10 [i_0 - 1]);
                var_18 = (max(var_18, (arr_1 [i_2])));
            }
        }
    }
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        arr_15 [i_3] = var_0;
        var_19 += (~65);
    }
    #pragma endscop
}
