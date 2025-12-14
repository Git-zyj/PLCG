/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (min(var_19, ((((arr_2 [2]) ? (31 != 1) : (max((arr_1 [i_0]), ((var_1 ? var_7 : (arr_1 [1]))))))))));
        var_20 = ((((min(-64, var_7))) <= 1));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (min(((((max(-6333507009445739759, 31))) ? 14892477558738486459 : (((1686748577 ? 1 : -32753))))), ((max(var_5, ((min((arr_2 [2]), var_16))))))));
        arr_7 [i_1] = (((((min(-22760, -1626409343)) + 2147483647)) >> (((min(((var_2 % (arr_3 [i_1]))), var_10)) - 101))));
        arr_8 [i_1] = (max((min((min((arr_3 [i_1]), 64)), ((((arr_2 [18]) ? (arr_2 [16]) : var_16))))), ((((2895059229 ^ var_18) ? (arr_2 [20]) : ((var_17 ? (arr_2 [4]) : var_1)))))));
        arr_9 [i_1] = (arr_5 [4] [i_1]);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            arr_15 [i_2] = ((-(max(var_16, ((~(arr_1 [i_3])))))));
            var_21 = ((-1093852438286996475 ? 1990904138 : 22895));
        }
        arr_16 [i_2] [i_2] = ((~(~1181536801)));
        arr_17 [i_2] = (((min(((var_9 ? (arr_2 [i_2]) : (arr_4 [i_2]))), (min(1752, (arr_10 [i_2] [1])))))) != ((3843493738 ? ((var_17 ? (arr_13 [i_2] [i_2] [i_2]) : -2311418337986784246)) : (((min(1, var_0)))))));
        arr_18 [i_2] = max((((max(var_2, 1)))), var_2);
        arr_19 [5] [i_2] = ((((((((var_6 ? var_4 : -8737465447054263007))) ? (((max(var_12, (arr_2 [i_2]))))) : (arr_4 [i_2])))) || ((((8995192510321510150 ? -1990904146 : 34)) >= (var_18 >= 7335033440230237343)))));
    }
    for (int i_4 = 4; i_4 < 17;i_4 += 1)
    {
        arr_22 [i_4] = ((((max(451473557, (arr_2 [i_4]))) * ((max(var_6, var_0))))) ^ (((((var_14 ? var_2 : 30582))) ? (((1 ? -64 : 1))) : (-64 ^ var_5))));
        arr_23 [19] [19] = ((var_6 ? ((((min(65504, (arr_1 [i_4 + 3])))) ? ((var_2 / (arr_1 [4]))) : 205)) : (!255)));
        arr_24 [i_4] = (arr_2 [i_4]);
    }
    var_22 = (~var_11);
    #pragma endscop
}
