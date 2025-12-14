/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_4 > 65535);
    var_20 &= var_12;

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_21 += (min((max(((min((arr_2 [i_0]), 65533))), (27 ^ var_11))), ((((arr_0 [i_0] [i_0 + 1]) > (((arr_0 [i_0] [i_0 + 3]) / (arr_2 [16]))))))));
        var_22 = (min(var_22, ((((8436649808304581224 ? ((((-5585604838538329355 != (arr_2 [i_0]))))) : ((var_14 & (arr_2 [i_0]))))) / ((-(arr_0 [i_0] [i_0])))))));
        var_23 = (min(var_23, (arr_0 [i_0] [i_0 + 4])));
        arr_3 [i_0] = ((arr_1 [i_0 + 1]) ? (((arr_1 [i_0 + 1]) ? (arr_0 [i_0 + 1] [i_0 + 1]) : (arr_0 [i_0 + 1] [i_0 + 1]))) : (arr_1 [i_0 + 1]));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_24 = ((((max((arr_1 [i_1]), 12))) ? (((((3386 < (arr_5 [i_1]))) && 216))) : (((((1697771260361105759 >> (var_8 - 62)))) ? (((var_7 + 2147483647) << (((((arr_2 [i_1]) + 122)) - 5)))) : (arr_2 [i_1])))));
        var_25 = (max(var_25, 8208));
    }
    #pragma endscop
}
