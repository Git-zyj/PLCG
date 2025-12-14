/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_16 = (max(var_16, (arr_0 [i_0])));
        arr_3 [i_0] [i_0] |= (((((((min(33496, (arr_1 [i_0] [i_0 + 4])))) ? (max(129, 8838776799636420918)) : ((min(var_13, 150)))))) ? var_3 : 6594));
        arr_4 [i_0] = (((((+(((arr_2 [i_0] [10]) ? 5981 : var_14))))) ? ((497 ? 150 : 129)) : (~14090697989334119832)));
        arr_5 [i_0] [i_0 + 4] = (max((((~(arr_0 [i_0])))), (max(var_2, (arr_1 [i_0] [i_0])))));
        var_17 |= (max(784491868932428844, (~784491868932428844)));
    }
    var_18 = (min(var_18, (((-var_15 && ((((((var_14 ? var_11 : 9943))) ? var_3 : var_10))))))));
    #pragma endscop
}
