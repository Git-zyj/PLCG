/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 = (min(var_12, 161));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 171;
        var_13 = min((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))), ((-624975688 / (arr_1 [i_0]))));
        var_14 |= (((((6493 ? 459009082705674014 : 95))) || ((((arr_0 [i_0] [i_0]) ? 82 : (min(var_4, (arr_0 [i_0] [i_0]))))))));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_15 = 6493;
        arr_6 [i_1] = (-2147483647 - 1);
        var_16 = (min(1939146427, (max(-32474, 19))));
        var_17 = ((((max(var_2, (min(11642524759052850593, 214))))) ? (((((79 ? 94 : 210))) ? 11894005280799586935 : 151110436)) : var_2));
    }
    var_18 -= var_9;
    var_19 = (var_0 | (-114351079 == 6248));
    #pragma endscop
}
