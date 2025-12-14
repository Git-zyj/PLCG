/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_3 [2]);
        var_12 = 613168828;
        arr_5 [i_0] [i_0] = ((var_4 ? -6241079118777771979 : -11553573856803575));
        arr_6 [i_0 - 1] = ((((~(arr_1 [i_0 - 1]))) & ((-8633252624456057280 ? -8633252624456057299 : 255))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_13 += ((10935 >= (arr_8 [i_1])));
        arr_9 [i_1] [i_1] = (((arr_7 [i_1]) ? var_8 : (arr_7 [i_1])));
        var_14 += ((!(arr_8 [i_1])));
        arr_10 [i_1] = var_3;
        arr_11 [i_1] [i_1] = (arr_8 [i_1]);
    }
    var_15 = min(4472495883323166486, ((max(-1015017731, 3452263465797596466))));
    #pragma endscop
}
