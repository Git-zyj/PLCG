/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_14 = (((((var_10 < 27313) >> ((((-2225867632270559286 ? 81 : (arr_0 [3]))) - 80)))) >> ((((arr_0 [i_0 - 1]) <= var_12)))));
        arr_2 [i_0] = (arr_0 [0]);

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                var_15 += (min(4231053430, (arr_8 [i_0 + 1] [i_1 + 1] [i_2])));
                arr_9 [i_0] [i_1] [i_0] [i_1] = (!var_1);
            }
            arr_10 [14] [i_0] = (arr_7 [i_1] [16] [i_0]);
            var_16 = ((var_13 | (((((-26 ? -1355530987 : 1))) ? (((~(arr_3 [i_0] [i_1])))) : var_2))));
        }
        var_17 -= ((min((arr_1 [i_0 - 1]), -13)));
        arr_11 [i_0] = ((max(((28 ? var_12 : 11)), (arr_8 [i_0 + 1] [i_0] [i_0]))));
    }
    var_18 = var_7;
    var_19 ^= var_1;
    var_20 = (min((((16 | var_12) ? (~-14892) : (~var_1))), 20209));
    #pragma endscop
}
