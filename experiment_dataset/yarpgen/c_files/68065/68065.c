/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((((min(var_2, var_3)) ? (var_4 && 3301584593524892423) : (((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : 22729))))));
        arr_3 [i_0] = (((var_7 || 22731) || var_1));
        var_10 ^= (((((((var_8 ? var_3 : var_5))) ? var_2 : ((((arr_1 [0]) == 15623229151715107763))))) <= (((((var_3 ? var_5 : var_1)) < var_8)))));
        arr_4 [i_0] = ((((min(var_8, (arr_1 [i_0]))))));
        arr_5 [15] [i_0] = ((((var_4 ? var_3 : var_6)) < (arr_0 [i_0] [i_0])));
    }
    var_11 = ((((-(var_0 || var_2))) - (((var_5 ? 1278417725 : -22710)))));
    var_12 -= (~var_2);
    var_13 = ((7480921759546779206 ? -2706734525548351864 : -1));
    var_14 += -22734;
    #pragma endscop
}
