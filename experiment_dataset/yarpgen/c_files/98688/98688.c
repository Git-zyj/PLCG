/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((!((min(var_3, 8931419179613699277)))))) >= var_9));
    var_15 = var_2;
    var_16 += (!1615177336);
    var_17 = (~var_0);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 += ((((max((65535 ^ 49912), 23))) ? (max((arr_1 [i_0]), 8835078190923840666)) : ((2002151989 ? (arr_0 [i_0]) : (arr_1 [i_0])))));
        arr_3 [i_0] = min((max(974118102, (arr_2 [i_0]))), ((((var_11 ? (arr_0 [i_0]) : (arr_2 [i_0]))))));
        var_19 = (min((~-2002152012), var_11));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        var_20 ^= 1526511520;
        var_21 = (max((((max(1244708958, -2002151990)) % 8968)), ((min((arr_5 [i_1]), (arr_6 [i_1]))))));
        arr_7 [i_1] [i_1] = (max((((!(arr_6 [i_1])))), ((((max(15, 15623))) ? ((min((arr_5 [19]), 65531))) : (!18295)))));
    }
    #pragma endscop
}
