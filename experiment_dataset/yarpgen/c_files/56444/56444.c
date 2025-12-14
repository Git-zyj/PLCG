/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((max(var_11, ((2384381517 ? var_2 : -123)))) - ((((252 ? var_3 : var_4))))));
    var_13 = var_10;

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
                    {
                        var_14 = (-var_3 % 109);
                        var_15 = (((((arr_2 [8] [i_3]) ? ((4 ? 240 : -55)) : -65535)) - var_11));
                    }
                    for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        var_16 ^= (max((((!var_3) ? ((max(240, 15))) : (((!(arr_7 [19] [i_4 + 2])))))), ((((((arr_12 [i_0] [i_0] [i_2] [i_4 + 3]) ? (arr_1 [i_4]) : 54))) ? (1790195793 < -54) : (arr_14 [18] [i_1] [i_1] [i_4])))));
                        var_17 = arr_10 [i_0] [11];
                    }
                    arr_17 [i_1] [i_2] [i_1] [i_1] = ((1736603694677309219 <= (max(18446744073709551615, 536870911))));
                }
            }
        }
        var_18 = ((!((((arr_7 [24] [i_0]) ? (arr_11 [16] [i_0] [i_0] [i_0] [i_0]) : ((max(240, 252))))))));
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        var_19 = (min(var_19, (arr_14 [6] [6] [i_5] [22])));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 22;i_8 += 1)
                {
                    {
                        var_20 = ((var_6 ? (max(99, (~-32760))) : (max((0 != var_2), ((-(arr_29 [i_5] [0] [1] [i_8 + 3])))))));
                        var_21 = (max((arr_22 [i_6] [i_6] [i_7]), ((((max((arr_24 [i_6] [i_7]), (arr_23 [i_6] [i_6] [i_6] [i_6])))) ? ((var_4 ? var_3 : 9127449405449099209)) : var_6))));
                    }
                }
            }
        }
        arr_30 [24] [24] = (arr_19 [i_5] [i_5]);
    }
    for (int i_9 = 2; i_9 < 19;i_9 += 1)
    {
        arr_35 [4] |= (((((-(((arr_21 [i_9 - 1]) ? (arr_33 [12]) : (arr_27 [i_9 - 1] [i_9 + 2] [i_9] [i_9 + 2])))))) ? (((max((arr_23 [i_9 + 1] [i_9 + 1] [i_9 - 2] [i_9 + 3]), (arr_23 [i_9 + 1] [i_9 + 3] [i_9] [17]))))) : (max((arr_15 [i_9 + 3] [i_9 + 3] [i_9] [6]), (var_7 < var_3)))));
        var_22 += ((((((arr_15 [i_9] [i_9] [i_9 + 1] [4]) ? -99 : ((-37 ? var_2 : 1))))) && ((((-9223372036854775807 - 1) ? ((-19 ? 15 : (arr_10 [i_9] [i_9]))) : ((max(229, (arr_14 [20] [i_9] [20] [20])))))))));
    }
    var_23 = ((3 ? (((((1736603694677309219 ? 4 : 34)) % ((1 ? 27 : 32764))))) : (0 - var_9)));
    #pragma endscop
}
