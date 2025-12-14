/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((!var_3) ? ((((var_3 != var_9) > 1))) : ((min((!var_16), (!3587109966))))));
    var_21 += (max(var_10, var_9));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_1] = (arr_3 [i_0 + 1] [i_0 + 1] [i_0]);
            var_22 |= (((((var_7 + (arr_4 [i_0 + 1] [i_0 - 2])))) ? (((!(arr_3 [i_0] [i_0] [i_1])))) : (arr_3 [i_0 - 1] [10] [10])));
            arr_7 [i_1] [i_0] |= 32587;
            var_23 = (((arr_2 [i_0 - 1]) ^ (arr_2 [i_0 - 2])));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_24 = (arr_0 [i_2] [i_2]);
            var_25 = 18;
        }
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            var_26 = (((((((((arr_5 [i_3]) ? var_1 : -5876))) & (((arr_10 [i_3 - 1] [i_0]) / 239))))) ? (((((arr_9 [i_3 - 1] [i_3 - 1] [i_0 + 1]) <= 17)))) : (1738802416116135741 / 1857962376)));
            arr_13 [i_0] = ((((min(-19, -120))) ? (((((arr_3 [i_0 - 1] [i_0] [i_0 - 2]) && var_17)))) : 707857347));
        }
        arr_14 [i_0] = (max(((min(var_9, (arr_0 [i_0] [i_0])))), ((max(var_1, (!var_7))))));
    }
    var_27 = max(var_4, (((255 / ((max(14, var_11)))))));
    var_28 = var_5;
    #pragma endscop
}
