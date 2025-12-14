/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min((((!(arr_0 [i_0])))), (((((179 / (arr_0 [i_0])))) ? ((6686084238322885174 ? (arr_1 [i_0]) : 1)) : (arr_1 [i_0])))));
        var_10 = (max(var_10, 180));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((!((((arr_5 [i_1] [i_1]) ^ 26)))));
        arr_7 [i_1] [i_1] = ((58880 > (arr_3 [i_1] [i_1])));
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        var_11 = ((1 >> (!179)));

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_12 *= (max(2, 37124));
            arr_13 [i_2] [i_3] [i_2] = (arr_5 [18] [18]);
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_18 [i_2] [i_2] = (((~37124) ? 49 : (arr_10 [i_2 + 1] [i_2 - 1] [i_2 - 1])));
            arr_19 [14] = 127;
        }
        arr_20 [i_2] [i_2] = ((5027039614949449852 / (211 & var_4)));
        arr_21 [13] = ((!((!(var_1 && 67)))));
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        arr_24 [i_5] = (max(((((((-127 + 2147483647) >> (-4601 + 4604)))) ? -45 : var_3)), ((((~-432667613160007086) <= var_2)))));
        arr_25 [i_5] = ((3527332223 ? 9223372036854775807 : (((~((max((-127 - 1), -127))))))));
    }
    var_13 = (max(var_13, (((~(var_3 ^ 4934))))));
    var_14 = (max(var_6, var_3));
    #pragma endscop
}
