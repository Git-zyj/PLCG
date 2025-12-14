/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (((((1792 ? 4294965504 : 2032))) ? (max((max(4294965491, 29971)), var_4)) : (arr_1 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = (18446744073709551610 > 1792);
        arr_4 [i_0] = (((~2019) == (arr_0 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((-(((arr_6 [i_1]) ? (arr_6 [i_1]) : var_10))));
        var_11 += (((1 < 1) ? (arr_6 [i_1 - 2]) : (((var_6 > (arr_5 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_12 = (min(var_12, 1));
        var_13 = (min(var_13, 1792));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_14 = (min(var_14, (((!(arr_0 [i_3] [i_4]))))));
            var_15 *= (((((4 ? -29971 : ((1810 ? 29971 : 2080374784))))) || (((-(2514269833 != 4294965277))))));
            arr_14 [i_3] [i_4] = ((-(((arr_12 [i_3] [i_4]) - (arr_12 [i_3] [i_4])))));
        }
        arr_15 [i_3] = (((((-1311500245 - (!1)))) - (((max(4294965297, var_1)) + (((6188 ? var_8 : 29965)))))));
        var_16 = (min(var_16, (((!((max(18446744073709551615, 255))))))));
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                {
                    var_17 = (min(var_17, ((!(((~(max(-10, var_9)))))))));
                    var_18 ^= max((arr_21 [i_5 + 1] [i_6 + 2] [i_7 - 1]), (arr_21 [i_5 + 1] [i_6 + 1] [i_7 - 1]));
                    var_19 -= var_8;
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        var_20 &= ((((((-2147483647 - 1) ^ (((arr_26 [i_8]) ? (arr_25 [i_8] [i_8]) : (arr_25 [i_8] [i_8])))))) ? (((((13005662236528227668 & (-2147483647 - 1)))) ? ((((arr_25 [i_8] [i_8]) ^ (arr_26 [i_8])))) : ((1 ? 496373769921022726 : 16226960241147386703)))) : (((-32741 ? ((-4749399917219304174 ? -25943 : 2644617601)) : (arr_26 [i_8]))))));
        var_21 = (~(~589226927));
    }
    var_22 *= var_0;
    var_23 *= (4294967289 - var_1);
    #pragma endscop
}
