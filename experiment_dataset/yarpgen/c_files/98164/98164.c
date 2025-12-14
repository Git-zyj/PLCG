/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0 - 2] [i_0 + 2]);
        var_19 += (((arr_0 [i_0 - 1] [i_0 + 1]) ? (arr_0 [i_0 + 2] [i_0 - 2]) : (arr_0 [i_0 - 1] [i_0 - 1])));
        var_20 |= ((1 ? (arr_0 [i_0 - 1] [i_0 - 1]) : (arr_0 [i_0 + 2] [0])));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_21 = min(1178014680, 3405257110);

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_7 [i_2] = ((11818395528617197963 ? (((((((((arr_0 [1] [1]) < (arr_3 [1] [1]))))) < (arr_0 [i_1 + 1] [i_1 - 1]))))) : ((((((arr_0 [i_2] [i_1 + 3]) - (arr_6 [i_2] [i_2] [6])))) ? (var_10 * 1) : (arr_1 [i_1 + 3] [8])))));
            var_22 = (4294967295 < 1);
            arr_8 [i_1] [i_2] [i_2] = ((~(((var_3 < (arr_0 [i_2] [i_1 + 4]))))));
            arr_9 [13] [13] [i_2] = 1;
            var_23 &= (~189652883);
        }
        arr_10 [i_1] [5] = (((((((0 | (arr_4 [i_1] [13])))) ? var_6 : (arr_6 [4] [i_1 + 2] [4]))) % (max((arr_3 [i_1] [i_1]), (max(var_7, 3154178142))))));
    }
    var_24 += var_7;
    var_25 = var_3;
    var_26 |= (323326673 || -126787006);
    #pragma endscop
}
