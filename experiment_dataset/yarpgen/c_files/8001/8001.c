/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0 + 1] = (((arr_0 [i_0 - 3]) >> (min((18446744073709551614 ^ 3144117156), (((23111 & (-2147483647 - 1))))))));
        var_13 ^= (((!((((-2147483647 - 1) ? (arr_3 [i_0] [i_0]) : (arr_0 [4])))))) ? ((31462 ? (-573808028172961613 > 2) : (-1877 - 2088960))) : ((((12288 ? (arr_2 [10]) : (arr_2 [1]))) | var_5)));
        var_14 -= ((~(arr_1 [i_0 + 1])));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_11 [i_1] [i_2] = (((min((var_2 > -2088961), (~2088975))) <= -var_7));
            var_15 += (((368118884006091006 << 1) | (((var_7 << (2092701116 - 2092701114))))));
            arr_12 [8] [i_1] = ((1 << (((((min(2147483647, -5216689075159996428)) + 479369259)) - 21))));
        }
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            var_16 -= (arr_9 [i_1] [i_1] [i_3]);
            arr_15 [i_3] [i_1] [i_3] = (((~1) ? (arr_3 [i_3] [i_1]) : (((((min(3156660132, -4034396624402720824))) ? (arr_0 [1]) : (((arr_3 [i_3 - 1] [i_1]) ? (arr_5 [1]) : (arr_0 [i_1]))))))));
        }
        var_17 = -88;
    }
    for (int i_4 = 3; i_4 < 21;i_4 += 1)
    {
        var_18 = (((!4294967269) << 26));
        arr_20 [i_4] = (!-1);
        var_19 = 1048512;
        var_20 = ((6452194976619143397 ? 10135854274537098755 : (-9223372036854775807 - 1)));
    }
    var_21 = (-219 <= var_8);
    #pragma endscop
}
