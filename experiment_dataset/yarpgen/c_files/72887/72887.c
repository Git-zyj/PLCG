/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 15218267585276390981;
    var_17 = min(55606, var_2);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 12;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] [i_0] [i_1] = (1205579885 & 11);
            var_18 = (arr_2 [i_1 - 2] [i_1] [i_1 - 1]);
            arr_5 [i_0] = 0;
        }
        for (int i_2 = 3; i_2 < 12;i_2 += 1) /* same iter space */
        {
            arr_8 [i_0] [i_2] = ((min(9930, 0)));
            arr_9 [i_0] [i_0] = (arr_0 [i_2]);
        }
        var_19 = -4177203;

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_20 = (min(68, ((15 ? 255 : (((arr_2 [i_0] [i_3] [i_0]) / (arr_1 [i_0])))))));
            arr_12 [i_0] [i_0] = (((((((-1733693083943051586 / (arr_10 [i_0] [i_3] [i_0])))) / 18446744073709551615)) * (((-(min(6586165039880171216, 18)))))));
            arr_13 [i_0] = (min(930032277, 6586165039880171207));

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_21 = ((-1612797780 | (~3364935019)));
                            arr_22 [i_0] [i_0] [i_3] [i_0] [i_3] [i_6] = (arr_10 [i_0] [i_0] [i_0]);
                            var_22 = (min(var_22, ((((~4294967274) % (min(2054880137, (arr_17 [i_6 - 2] [1]))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        {
                            var_23 |= (arr_15 [i_4] [i_7 - 1]);
                            arr_31 [i_0] [i_0] [i_4] [i_7] [i_0] = (min(3086447489794103920, ((((arr_28 [i_0] [i_8 + 1] [i_0] [i_8 + 1] [i_7 + 2]) ? 1673411870 : 86)))));
                            arr_32 [2] [i_0] [i_4] [i_7] [i_8] = ((((~((254 | (arr_19 [i_0] [i_3] [i_4] [i_0] [i_3])))))) ? (arr_14 [i_0] [i_0] [i_0]) : (((((0 ? 10777 : 1023))) ? (((arr_18 [i_0] [i_0] [2] [i_0] [i_0]) >> (111 - 91))) : (arr_3 [i_3] [i_3] [i_3]))));
                            var_24 ^= 2199023255551;
                            arr_33 [i_0] [i_4] = ((((!(arr_17 [i_8] [i_0])))));
                        }
                    }
                }
            }
        }
    }
    var_25 = ((((min(1, -735094081))) ? (min((14 | 1), (min(11802186433674769658, var_12)))) : (var_7 & var_9)));
    #pragma endscop
}
