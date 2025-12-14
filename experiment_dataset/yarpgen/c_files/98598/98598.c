/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_14 = (((arr_0 [i_0] [i_0]) == -10));
        var_15 = (((arr_0 [i_0] [i_0]) <= 14197049486837579383));
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] [i_1 + 2] = ((228 <= (arr_2 [5])));
        var_16 = ((~(min((min((arr_0 [i_1] [14]), var_12)), (arr_3 [i_1 - 3] [i_1 + 2])))));
        var_17 = ((~(((var_11 + var_3) + ((-(arr_0 [8] [14])))))));
        var_18 = (max(var_18, ((max((min((arr_3 [i_1] [i_1]), ((4249694586871972235 ? (arr_1 [8]) : (arr_2 [i_1]))))), ((min(8, (arr_1 [0])))))))));
    }
    var_19 = (max(var_19, var_1));
    var_20 = 1615553450729217415;
    #pragma endscop
}
