/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 = (arr_0 [18]);
        var_15 ^= (min((((arr_0 [i_0]) | (~8796093020160))), var_1));
    }

    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((24965 >> (((arr_5 [i_1]) - 6468648780900834515))));
        var_16 -= ((((((arr_1 [17] [17]) - (arr_1 [i_1] [i_1])))) + (arr_4 [4])));
        arr_7 [i_1] = (((~var_8) ? ((min((min(146, (arr_2 [i_1]))), ((65011712 / (arr_2 [i_1])))))) : ((~(min(8796093020144, (arr_2 [i_1])))))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] &= ((((min((min(11641025649209650546, 1)), ((((arr_4 [0]) ? 32 : (arr_5 [i_2]))))))) ? (arr_4 [0]) : (arr_2 [1])));
        var_17 = (24976 | 0);
        var_18 = ((((((arr_3 [i_2]) >> (((arr_3 [i_2]) - 16025176))))) ? (28930 < 1) : var_3));
        var_19 = ((-((18446744073709551615 ? 2464464570 : (((arr_9 [i_2]) ? 1609224112 : 63))))));
    }
    #pragma endscop
}
