/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((((1 ? var_2 : 1)) * -var_3))) ? ((max(6017022959737213, 63))) : ((((64 ? (arr_2 [i_0] [i_0]) : 1718306255546094543)) % (((13871630100032505945 ? 8633870610052840698 : 239)))))));
        arr_4 [i_0] = ((-(203 && 2995231517646598922)));
        arr_5 [i_0] [i_0] = ((!(--175)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_20 += ((((((arr_7 [i_1]) ? 67 : (arr_7 [8])))) ? (arr_6 [i_1]) : ((2586136063 ? (arr_6 [i_1]) : -8633870610052840699))));
        var_21 = 10357660730381379279;
        arr_8 [i_1] = ((~(arr_6 [i_1])));
    }
    var_22 = ((37 && ((!((min(54, 39)))))));
    #pragma endscop
}
