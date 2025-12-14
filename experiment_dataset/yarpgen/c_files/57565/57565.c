/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max(1, var_2);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (0 | ((((((arr_0 [i_0]) >> (14756827374370061480 - 14756827374370061449)))) ? (var_4 || 32767) : ((~(arr_0 [i_0]))))));
        arr_3 [i_0] = (((((((((arr_0 [i_0]) >= var_8))) - 1))) ? var_1 : ((-(arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [13] = 1275243338354485683;
        arr_7 [1] [i_1] = (arr_5 [i_1]);
        arr_8 [i_1] = 1;
        var_18 = (arr_5 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        var_19 = (min(var_19, (arr_11 [i_2])));
        arr_12 [3] = (arr_5 [i_2]);
    }
    #pragma endscop
}
