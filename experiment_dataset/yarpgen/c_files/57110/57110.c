/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max(40282, -2305843009209499648)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_18 = (((922649992 == 16140901064500051967) ? (arr_1 [i_0 - 1]) : 201738893));
        arr_2 [i_0] = 117440512;
        var_19 = (max(var_19, -15477));
        var_20 = (~25011);

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_21 &= (arr_0 [i_1]);
            var_22 = (max(var_22, 40299));
            var_23 = (~8914792478954245384);
            arr_6 [i_0] [i_0] [i_1] = (((((25003 | (arr_1 [i_1])))) ? (((arr_1 [5]) ? (arr_4 [i_1] [i_0] [i_0]) : 5941199013837166597)) : (arr_5 [i_0] [i_1] [i_0 + 1])));
        }
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_24 = (((((var_14 ? (((arr_8 [i_2 - 1]) | 9531951594755306240)) : (((min(25237, (arr_9 [i_2] [i_2])))))))) ? (arr_0 [i_2 - 1]) : (min(2305843009209499651, (((1855894778957844862 ? (-2147483647 - 1) : 49304)))))));
        var_25 = (max(((((((arr_10 [i_2]) + (arr_3 [i_2] [i_2])))) ? (((arr_1 [i_2]) + 2305843009209499664)) : ((((arr_9 [i_2] [20]) ^ (arr_10 [i_2])))))), 25012));
        arr_11 [i_2] = (max((((~(min(270826755, 134217727))))), (max((arr_4 [i_2] [i_2] [i_2]), 2147483647))));
        var_26 = (((((arr_3 [14] [14]) ? 18446744073709551610 : (arr_3 [18] [18]))) ^ ((max((arr_3 [16] [16]), (arr_10 [6]))))));
    }
    var_27 *= var_7;
    #pragma endscop
}
