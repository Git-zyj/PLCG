/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((1 ? 1488019808 : ((~((~(arr_1 [i_0])))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] = ((((((((2358310053 >> (((arr_1 [i_1]) - 143925474))))) ? (!var_11) : (max(19727, (arr_4 [i_1] [i_1])))))) ? ((4015088651 ? 256818702 : 1602381333)) : (min((arr_5 [i_1] [i_0] [i_1]), (((arr_5 [i_1] [i_1] [i_1]) ? 577545942 : 2358310023))))));
            arr_7 [i_1] = (min(((~(max(var_12, var_7)))), ((((~(arr_1 [i_0])))))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_2] [i_2] = (((arr_9 [i_0] [i_0]) >> ((((~((min((arr_8 [i_2]), (arr_3 [i_0] [i_2] [i_0])))))) + 2))));
            arr_11 [i_2] [i_2] = (i_2 % 2 == 0) ? (((~(((((2358310075 ? (arr_3 [i_0 + 1] [i_2] [i_2]) : (arr_4 [i_2] [i_2])))) ? ((8279388596732330585 >> (((arr_3 [i_0] [i_2] [i_2]) - 42058)))) : 8279388596732330585))))) : (((~(((((2358310075 ? (arr_3 [i_0 + 1] [i_2] [i_2]) : (arr_4 [i_2] [i_2])))) ? ((8279388596732330585 >> (((((arr_3 [i_0] [i_2] [i_2]) - 42058)) + 12049)))) : 8279388596732330585)))));
            arr_12 [i_0] [i_2] = (((((1 ? (arr_4 [i_2] [i_2]) : 1488019811))) ? (arr_5 [i_2] [i_0] [i_2]) : var_2));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_17 |= (((min(var_5, (((var_14 ? (arr_1 [i_0]) : 2358310053))))) * (((16705 ? 1936657242 : 61737)))));
            var_18 = (min(var_18, ((((((0 ? 16738 : 6513736759302994750))) ? (arr_14 [2]) : var_9)))));
        }
        var_19 = (arr_14 [4]);
    }
    for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
    {
        var_20 = ((((min((arr_15 [i_4]), 10918632897544813123))) ? (max((arr_14 [i_4]), 1)) : (arr_3 [i_4] [i_4] [i_4])));
        var_21 = (arr_4 [i_4] [i_4]);
        var_22 = (arr_1 [i_4]);
    }
    #pragma endscop
}
