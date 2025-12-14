/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_21 = 124;
        var_22 = ((~(arr_0 [i_0])));

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_23 = (((max((arr_3 [11] [11] [i_1 + 1]), (arr_2 [i_0] [i_1 - 1])))) ? (min((arr_2 [i_0] [i_0]), var_1)) : (arr_3 [i_0] [i_0] [i_1 + 1]));
            var_24 = (max(var_24, (-32767 - 1)));
        }
        arr_5 [i_0] = ((!((((var_1 >= var_10) ? ((max(var_5, var_2))) : (max(var_16, (arr_2 [i_0] [i_0]))))))));
        var_25 = ((-(min((var_0 != 32747), (min(0, -124))))));
    }
    var_26 = min(var_8, (max(var_10, ((-124 ? var_1 : var_0)))));
    var_27 += (min((var_13 - 0), ((((max(-1, 9963541090960528623))) ? var_16 : (var_18 == var_6)))));
    #pragma endscop
}
