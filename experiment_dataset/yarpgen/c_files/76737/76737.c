/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((1 || 315352320024237397) <= var_1)));
    var_19 = var_1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (max(((((((65525 ? 1048574 : 9223372036854775796))) ? (9223372036854775788 - 43) : ((min((arr_0 [i_0]), (arr_0 [i_0]))))))), (max((((2047 ? (arr_0 [i_0]) : 1))), (((arr_0 [i_0]) & 18446744073709551589))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, ((max((((arr_4 [i_0] [i_1] [i_2]) ? 13559172739692824137 : (9 | 8909156548917864917))), (15797 > 0))))));
                    var_22 *= (((9223372036854775796 ? ((min((arr_1 [i_2]), (arr_2 [6] [6] [i_2])))) : 0)));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    {
                        var_23 = (((((arr_3 [i_0] [i_3]) ? ((25585 ? 25585 : 65525)) : 6537728925268934897)) != ((361272289 ? -5688 : ((max(var_0, -17)))))));
                        arr_14 [i_0] [i_3] [i_4 + 1] [i_5] = (((max(5183418262925303875, (arr_12 [i_5 + 1] [i_4 + 1] [i_3 + 1] [21]))) % ((min((var_11 || var_12), ((32744 ? 20 : 32256)))))));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_24 = ((((max(25584, (!var_2)))) ^ ((min(29583, (11345 && 10025))))));
        var_25 = (((4294967293 ^ (max(var_10, var_2)))));
        arr_19 [i_6] [i_6] = ((min((arr_7 [i_6] [i_6]), (((-28332 | (arr_0 [i_6])))))));
        var_26 = (min(var_26, ((max(1454196929, (1014528168 / var_14))))));
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_27 &= (((min(6980527061333515247, (arr_21 [i_7] [i_7])))) ? (arr_23 [i_7]) : (1 / var_10));
        var_28 = ((((8750 ? 22458 : -9223372036854775797)) == (114 || var_10)));
        arr_24 [13] [2] = ((((((-4157 - -4601) != (arr_6 [i_7] [i_7] [i_7])))) >= ((((-32767 - 1) > var_11)))));
    }
    var_29 = var_16;
    #pragma endscop
}
