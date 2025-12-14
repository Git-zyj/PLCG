/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((110 ? ((1 ? 5332370771190531412 : 1)) : 192))) ? -658773154 : ((22137 ? 1315721748750052279 : -9223372036854775795)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 &= (arr_2 [3] [i_0]);
        var_16 = (max((((min(3413529969653767314, 665307157)) / (13017358671074223870 * -1))), (((((((arr_0 [1]) ? 98 : (arr_1 [i_0])))) ? (((!(arr_2 [1] [i_0])))) : (0 ^ var_6))))));
        arr_3 [1] [i_0] = (max(var_6, (~var_5)));
        arr_4 [i_0] = ((65524 ? var_9 : (((((~(arr_1 [i_0])))) ? (((73 ? -9171 : 14942))) : (max((arr_0 [5]), var_12))))));
    }
    var_17 = (max(var_17, var_9));
    #pragma endscop
}
