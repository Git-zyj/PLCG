/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= ((((((min(var_8, var_2))) ? (min(18060868990081108904, 17)) : ((max(var_1, var_2)))))) ? ((((max(var_1, 27639))) ? (((max(-1, var_7)))) : (min(var_0, 9223372036854775807)))) : ((((max(65151, var_1)) >> (63 || -8)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((((arr_1 [i_0]) - (arr_0 [i_0])))) + ((2 ? var_3 : (arr_1 [i_0]))));
        arr_3 [i_0] [i_0] = (((30 & 15857) ? (var_9 ^ 3654523451) : (var_0 <= var_1)));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            var_11 -= (((((var_7 ? var_1 : 3))) || (var_8 & var_0)));

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                var_12 *= ((((120 ? 40132 : 32761)) < ((var_6 ? (arr_5 [i_3]) : (arr_5 [i_2])))));
                var_13 = (((65534 / var_1) * (((arr_11 [i_3] [i_1] [i_3]) / 7))));
            }
            var_14 -= (((((var_8 * (arr_5 [i_2 + 3])))) ? ((1509774896 ? (arr_7 [i_1] [i_2]) : (arr_6 [i_1]))) : (((var_9 ? (-2147483647 - 1) : 3)))));
        }
        var_15 = (min((max(((((arr_11 [i_1] [i_1] [i_1]) | (arr_9 [i_1] [i_1] [3])))), ((11560 ? (arr_4 [i_1] [i_1]) : (arr_5 [i_1]))))), ((((max((arr_12 [i_1] [i_1] [i_1] [i_1]), -6263044431465271912)) == (max(-1403934803120361718, (arr_6 [1]))))))));
        var_16 = (max((max((max(var_8, 4)), ((max(-1392542101, (arr_10 [i_1] [i_1] [i_1])))))), (min((max((arr_8 [i_1] [i_1]), var_8)), (max(3329579685, (arr_6 [i_1])))))));
        var_17 = (max(((((min(var_2, (arr_7 [i_1] [i_1])))) ? ((1977592661 ? -7398670918838141907 : 16533)) : ((max(1392542126, 120))))), ((((min((arr_10 [i_1] [i_1] [i_1]), (arr_7 [i_1] [i_1])))) ? ((((arr_10 [i_1] [i_1] [i_1]) / (arr_10 [i_1] [i_1] [6])))) : (((arr_12 [i_1] [i_1] [i_1] [i_1]) ? (arr_7 [i_1] [i_1]) : -9223372036854775800))))));
        var_18 -= (min((max(((min((arr_1 [i_1]), (arr_12 [i_1] [i_1] [i_1] [i_1])))), (min(var_4, (arr_8 [i_1] [i_1]))))), (min((((arr_5 [i_1]) & (arr_0 [i_1]))), ((4 ? var_0 : 27))))));
    }
    var_19 = (min(var_19, ((((min((max(var_4, var_7)), (min(var_9, var_1))))) ? (((var_7 > var_7) - ((var_5 ? var_2 : var_2)))) : (max((63528 / 1438902670), (max(var_0, var_1))))))));
    #pragma endscop
}
