/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_8, (min(var_3, (min(0, 59))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = ((-(min(59, 18446744073709551615))));
        arr_5 [i_0] = (arr_0 [i_0]);
        arr_6 [i_0] = 124;

        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            var_15 = (((max(1, (arr_7 [i_1 - 3] [i_1 + 1] [i_1 - 4])))));
            var_16 = (((arr_8 [i_1] [i_0]) == (min(39854, 8228347380600600855))));
            var_17 = (min(var_17, (((((min((((var_10 > (arr_7 [i_1] [i_1] [i_0])))), (arr_3 [i_0])))) == ((-(max(0, -124)))))))));
            var_18 = (min((-32767 - 1), 4294967295));
        }
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            var_19 = (max(var_19, (((124 ? (arr_1 [i_2 - 1] [i_2]) : (min(0, (arr_8 [i_2 - 1] [i_2]))))))));
            var_20 = ((6130469498045829590 ? 18446744073709551596 : ((((29716 > (arr_8 [i_0] [i_2])))))));
            arr_13 [i_0] [i_0] [i_0] = 3175431615;
        }
    }
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        var_21 = (~33);
        var_22 = ((18446744073709551615 <= (arr_15 [i_3] [i_3])));
    }
    var_23 = ((var_9 ? (!3) : var_8));
    #pragma endscop
}
