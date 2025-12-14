/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-((((var_0 ? var_3 : var_0)) / ((var_2 ? var_3 : 38366))))));
    var_13 = (var_9 * var_10);

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_14 ^= (arr_0 [1]);
        var_15 = (max(94, (((((min(38366, var_7)))) & (arr_0 [i_0 + 1])))));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_16 = (((((arr_4 [i_1 - 2]) / (arr_4 [i_1 + 3]))) == (arr_4 [i_1 + 1])));
        arr_5 [i_1 + 3] = (arr_3 [i_1 - 1]);
        var_17 = ((38366 % ((((!(arr_3 [i_1]))) ? (((arr_4 [i_1]) / (arr_4 [i_1]))) : ((-(arr_4 [i_1 + 4])))))));
    }
    for (int i_2 = 3; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] [i_2 + 2] = (min(((-(var_6 & 115))), var_7));
        var_18 = (-(arr_6 [15] [i_2]));
        var_19 = (max(var_19, ((((~var_11) ? (min((12153629556462875850 + 6293114517246675770), (arr_7 [i_2] [8]))) : ((~(arr_6 [i_2 + 3] [i_2 + 3]))))))));
    }
    #pragma endscop
}
