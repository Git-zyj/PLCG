/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(47294, (254 >= var_16)));
    var_18 = (((((((-29633 ? 1 : var_8))) ? -653027442 : 228)) | 24));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = (min(var_19, 1));
        arr_3 [i_0] = ((13761 ? ((0 ? 18446744073709551606 : (arr_2 [i_0] [13]))) : (((((0 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) ^ (((arr_2 [i_0] [i_0]) | (arr_2 [14] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_20 = (((34862 ? -6098210696709214373 : 51775)));
        var_21 = arr_6 [i_1] [i_1];
        arr_7 [i_1] = max(((max((!1), (max((arr_5 [i_1]), var_13))))), (((arr_5 [i_1]) ? ((min((arr_5 [i_1]), (arr_5 [i_1])))) : (((arr_4 [i_1]) ? 33 : 1)))));
    }
    #pragma endscop
}
