/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_6;
    var_17 = 4294967295;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min((max(((max(var_2, (arr_2 [i_0] [i_0])))), 1)), (18230643564424260972 == 48)));
        var_18 &= ((!(+-111)));
        var_19 = (var_0 ^ 65123);
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] = (((((!(((12098345417168498275 ? 109 : 129)))))) / ((max(40603, 21)))));
        var_20 = (((((~(arr_4 [i_1])))) ? 4503595332403200 : ((((!(((68 ? 35621 : (arr_6 [i_1 + 1]))))))))));
        arr_8 [i_1] = (min((24933 >> 7), ((min((min((arr_6 [i_1]), -121)), 0)))));
        arr_9 [i_1] = 108;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                {
                    var_21 *= (((((((arr_11 [i_1] [i_1] [i_3 + 2]) ? -108 : (arr_6 [i_1])))) ? ((max(var_6, 1))) : (max(9067322387195227796, 7171919198302275346)))));
                    arr_15 [i_1 - 2] [i_1 + 3] [i_2] [i_1] = ((((min(40603, 65535))) ? ((~(arr_14 [i_1 - 1] [i_3 + 2] [i_3 + 1] [i_1]))) : ((((arr_5 [i_1]) << (((arr_5 [i_1]) - 58)))))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] [i_4] = (max((((var_6 <= (arr_14 [i_4] [i_4] [i_4] [i_4])))), (max(2147483647, 18446744073709551610))));
        arr_19 [i_4] = ((((((!(arr_2 [i_4] [i_4]))))) | ((242455427 / (max(2933170253, var_14))))));
        arr_20 [i_4] = ((((min(((-2086908883 ? (arr_4 [i_4]) : 2993841768)), (arr_2 [i_4] [i_4])))) ? (((4294967295 ? (((~(arr_6 [i_4])))) : (max((arr_13 [i_4]), 4294967295))))) : (((min(1, (arr_14 [i_4] [i_4] [i_4] [i_4]))) * ((((!(arr_14 [i_4] [i_4] [i_4] [i_4])))))))));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_22 = (((269331041 - 5021176556538237845) ? (min((((var_13 <= (arr_0 [5])))), 1938120259)) : (((((arr_12 [i_5] [i_5] [i_5] [i_5]) <= (((max((arr_17 [i_5] [i_5]), (arr_17 [i_5] [i_5])))))))))));
        var_23 -= ((((((max(19, (arr_22 [i_5])))) <= (((arr_6 [i_5]) ? 4635002420409659839 : (arr_12 [i_5] [i_5] [i_5] [i_5]))))) ? ((((arr_1 [i_5] [i_5]) || (arr_10 [i_5] [i_5] [i_5])))) : ((((max(-121, 482012525662314586))) ? -64 : 196))));
    }
    var_24 = var_9;
    var_25 = ((19 * (!4082151059)));
    #pragma endscop
}
