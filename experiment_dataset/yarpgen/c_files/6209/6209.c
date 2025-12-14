/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((min(29101, var_7)) & -var_7));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_13 = (arr_1 [i_0]);
        var_14 &= ((-7178988477724557683 ? (arr_0 [2] [i_0]) : (arr_0 [18] [18])));
        var_15 = (((((((max(7200, 58355))) ? ((max(58331, var_6))) : (arr_0 [i_0] [i_0])))) ? (((min(var_2, 58344)))) : (var_10 + var_11)));
        arr_2 [17] [i_0] = (arr_1 [i_0]);
        var_16 = (5763 << (1847124507 - 1847124496));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_17 = (58319 != 65515);
        var_18 = -4407644904058831302;
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_19 = (((((max(144115188075855808, 25676)))) ? ((min((min(var_6, 144115188075855808)), (arr_7 [7])))) : ((144115188075855808 ? 7200 : 557087661195484563))));
        var_20 = ((39853 ? (arr_4 [22] [22]) : (min((arr_5 [2]), (arr_0 [18] [i_2])))));
    }
    var_21 = (~var_1);
    #pragma endscop
}
