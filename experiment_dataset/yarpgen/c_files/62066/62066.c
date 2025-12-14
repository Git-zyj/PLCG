/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = var_15;
        arr_3 [i_0] [i_0] = (((min((140737471578112 | 140737471578098), 18446603336237973504)) | 6459565989454224426));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = -2278333165994788310;
        arr_8 [i_1] = 1;
        arr_9 [i_1] = 18446603336237973487;
        var_19 = (((arr_5 [i_1]) > ((1 ? (arr_4 [i_1 + 3] [i_1 + 2]) : 140737471578122))));
    }
    var_20 = var_0;
    var_21 = (16168410907714763305 ? 2278333165994788340 : 0);
    var_22 = ((((min(-8897389771510644633, 16168410907714763282)) / var_2)));
    var_23 = (max((min((!1), var_0)), var_13));
    #pragma endscop
}
