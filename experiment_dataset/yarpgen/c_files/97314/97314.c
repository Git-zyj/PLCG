/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_13 = (max(var_13, (18446744073709551592 | 8201495524326306733)));

        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            arr_4 [i_0] = 1;
            arr_5 [i_0] = ((((((!(((1 | (arr_0 [i_0])))))))) | (((arr_3 [i_0 - 2] [i_1] [i_1 + 2]) ? (arr_3 [i_0 + 1] [i_0 + 1] [i_1 - 3]) : 10245248549383244883))));
            arr_6 [i_0] = ((max((!var_0), 20146)));
        }
        arr_7 [6] |= (min(((10245248549383244880 ? 1 : (arr_1 [i_0 - 1]))), (((!(((-417614767640121047 ? 16146479198230607949 : (arr_1 [5])))))))));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 16;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] [i_2] = (((arr_3 [i_2] [i_2 - 2] [i_2 - 2]) % (arr_2 [i_2] [i_2] [i_2 - 3])));
        var_14 = (min(var_14, (((-1 * (arr_8 [i_2 - 1]))))));
        var_15 = (max(var_15, 340199483));
        arr_11 [i_2 - 2] = ((((arr_8 [8]) ? 18446744073709551615 : var_11)));
    }
    var_16 = (min(var_16, ((162 || (((var_1 + ((18126 ? 0 : 120)))))))));
    var_17 ^= (max(var_2, (max(var_4, 194))));
    var_18 -= (((((228 + 2147483647) << (var_11 - 8789244866479511695))) & var_8));
    #pragma endscop
}
