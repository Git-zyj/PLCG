/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((min(-187655445, (((3072 <= -5713346086305643733) + ((var_12 ? var_3 : var_3)))))))));

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        arr_3 [21] = (((arr_2 [i_0] [i_0]) > ((max((((!(arr_2 [i_0] [i_0])))), ((5866213270168347871 ? 1 : (arr_1 [i_0] [i_0 - 3]))))))));
        var_21 = ((~((~((0 | (arr_2 [i_0 - 4] [i_0 - 2])))))));
    }
    #pragma endscop
}
