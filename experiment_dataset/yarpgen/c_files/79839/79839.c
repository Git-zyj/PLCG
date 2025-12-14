/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    var_15 = ((((min(((var_8 ? var_1 : var_4)), -var_4))) || (((~var_4) == ((2709577122 ? var_0 : var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = ((((1 ? 1 : 0)) % ((((!(535509943609105597 == 20541)))))));
                var_17 = (((((((arr_5 [i_0 - 3] [i_0 - 3]) == (arr_5 [i_0] [i_1]))))) == (((arr_5 [i_0 - 1] [i_1]) ? (arr_5 [i_0 + 2] [i_0 - 2]) : (arr_5 [i_0 - 3] [i_0 - 3])))));

                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    var_18 = (min(var_18, (((((!(arr_3 [i_1]))) ? (((arr_3 [i_0 - 1]) ? (arr_3 [i_1]) : (arr_3 [i_0 - 1]))) : (arr_3 [i_2 - 1]))))));
                    var_19 = ((~(~0)));
                    arr_9 [i_0 + 3] [i_0] = (((((1 ? 42245 : 59))) ? (((arr_8 [i_0 - 3]) ? (arr_4 [i_0]) : (arr_4 [i_0]))) : ((min((arr_8 [i_0 + 3]), -26)))));
                }
            }
        }
    }
    var_20 = var_0;
    var_21 = ((var_8 ? ((var_7 ? var_6 : (1 ^ 5461))) : ((((!(((-601848691 ? var_11 : 15677943062973179722)))))))));
    #pragma endscop
}
