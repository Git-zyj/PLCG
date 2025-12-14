/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 = (~((-909072044 / (arr_0 [8] [4]))));
        var_12 = ((arr_0 [i_0] [7]) / (min((max(1394090638, -1267103816)), -1021167501)));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_13 = 2113897021;
        var_14 = (min(((((min(-897519813, (arr_4 [i_1])))) && ((min(-2113897015, var_5))))), ((!((((arr_4 [i_1 - 1]) ? -1629140813 : var_1)))))));
        var_15 ^= 1833244978;
        arr_5 [i_1] [i_1] = (((max((arr_4 [i_1]), -2071433029)) <= (max((max((arr_3 [i_1 + 1]), (arr_3 [i_1]))), (((!(arr_2 [i_1] [i_1 - 1]))))))));
    }
    var_16 = var_0;
    var_17 ^= var_0;
    var_18 = (max(var_18, (min(((((-1867772099 ? -1831399114 : var_1)) - var_7)), var_4))));
    #pragma endscop
}
