/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = ((((min((((var_11 ? var_1 : 65535))), (min(68719476736, 2022424919))))) ? -3 : ((-(arr_1 [i_0])))));
        var_17 = (min(var_17, ((~(max((max(391603825, (arr_1 [i_0]))), (max((arr_1 [i_0]), 2366207195))))))));
    }
    var_18 &= (min((((((524286 ? var_1 : 140737488355327))) && var_5)), (((var_0 || var_6) <= (~var_14)))));

    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_19 -= 62795;
        var_20 = 533156266;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 24;i_3 += 1)
            {
                {
                    var_21 -= max(((((arr_2 [i_1]) & var_5))), (((arr_3 [17]) ? (((arr_3 [2]) | -87)) : (arr_4 [i_3 - 1]))));
                    var_22 = (arr_2 [5]);
                }
            }
        }
        var_23 = ((32767 ? var_9 : (arr_2 [i_1])));
    }
    var_24 = (max(var_14, (((var_15 <= (min(18446744073709551615, 4032)))))));

    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_25 |= 0;
        var_26 -= 237;
        var_27 |= ((35293 ? 65367 : (((149 / -123) ? (arr_3 [i_4]) : ((1062636031 ? 18446603336221196296 : 228335155234199356))))));
    }
    #pragma endscop
}
