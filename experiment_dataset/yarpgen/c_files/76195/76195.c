/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = -1;
                arr_7 [10] [10] |= ((-31997 >> (arr_5 [i_0])));
            }
        }
    }

    for (int i_2 = 2; i_2 < 19;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = (((!(~var_15))));
        arr_12 [i_2] [i_2] = (var_7 > -32000);
        var_20 = (min(var_20, ((((arr_8 [i_2] [11]) <= (((arr_8 [i_2] [i_2 + 2]) + -32007)))))));
        arr_13 [i_2] [0] = (~var_1);
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 19;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                    {
                        var_21 = (~-1518868040175125170);
                        var_22 += ((9543795556689465098 != (arr_21 [8])));
                        var_23 = (max(var_23, (~var_10)));
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                    {
                        var_24 = (min(var_24, (!9543795556689465099)));
                        var_25 = (arr_18 [i_4]);
                    }

                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        arr_34 [1] &= ((-(arr_23 [4] [4])));
                        var_26 = (min(var_26, -4407));
                    }
                }
            }
        }
        var_27 = (var_5 - var_17);
    }
    for (int i_9 = 1; i_9 < 13;i_9 += 1)
    {
        arr_37 [i_9] [i_9] = (-32007 != (9543795556689465082 != 8902948517020086517));
        var_28 = (max(var_28, (((-(-4407 | 3785))))));
        var_29 -= (!var_2);
        var_30 += ((((var_0 + 2178976681555003579) + var_3)));
    }
    var_31 -= (!var_11);
    var_32 -= ((-var_5 != (((((((-31997 + 2147483647) << (8265947108513811935 - 8265947108513811935)))) && 4277289414451789713)))));

    for (int i_10 = 4; i_10 < 24;i_10 += 1)
    {
        var_33 = (var_7 != 1);
        var_34 -= ((-31971 > var_16) ^ (var_8 * 479973156150190553));
        var_35 -= ((-(var_16 >= var_6)));
    }
    #pragma endscop
}
