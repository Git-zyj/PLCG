/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((var_0 < (!0))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 |= (min((((!((max(var_3, 0)))))), ((((-9223372036854775807 - 1) / 1)))));
        arr_2 [i_0] = ((~((((max(0, var_7))) / (arr_0 [i_0])))));
        var_16 *= 1;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_17 = ((arr_6 [i_1]) ? (((max(-2, 7930043831392073447)) / 40996)) : (((min(((-4876566720058621509 >= (arr_5 [i_1]))), ((!(arr_5 [i_1]))))))));
        var_18 &= ((((var_4 <= (arr_6 [i_1]))) ? (~1) : (arr_4 [i_1])));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_19 ^= 0;
        var_20 |= ((1 ? (!116) : ((((arr_7 [i_2]) < 33554431)))));
    }
    var_21 = ((var_2 ? var_3 : (var_0 * var_7)));

    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 3; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            arr_23 [i_7] [i_6] [i_6] [i_5] [i_4] [i_3] = 1;
                            arr_24 [i_7] [i_6] [i_5 + 1] [i_4] [i_3] [i_3] = ((65535 ? (min(2831439337, 21365)) : (min(((4876566720058621512 ? 63488 : (arr_21 [0] [i_6] [i_6] [i_5] [i_4] [i_4] [i_3]))), ((var_2 ? (arr_15 [i_4] [i_4 - 1] [i_4] [i_4]) : (arr_5 [i_4])))))));
                        }
                    }
                }
            }
            var_22 = max(-2606392024642346374, (((!(arr_6 [i_4 + 1])))));
            var_23 = 1;
        }
        arr_25 [i_3] |= ((-((36 ? (arr_3 [i_3]) : -4876566720058621516))));
        var_24 = (max(var_24, ((min((((4876566720058621507 ? 1 : 1))), var_1)))));
        var_25 = 0;
    }
    #pragma endscop
}
