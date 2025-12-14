/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_18 -= ((((min((~var_5), 15))) ? ((((((-7066317540918951606 ? (arr_1 [i_0]) : -105))) ? (arr_1 [i_0]) : (arr_1 [i_0 - 2])))) : ((((var_2 ? (arr_0 [i_0]) : 30052)) ^ ((max(60454, (arr_1 [i_0]))))))));
        var_19 *= ((((((arr_1 [i_0 - 2]) | (max((arr_1 [i_0 + 1]), var_1))))) ? (((+(((arr_1 [i_0]) ? (arr_1 [i_0]) : 1))))) : (max(-7612522689918575155, 14))));
    }
    var_20 = ((((!((max(3699308914637186084, 53429))))) ? (((var_4 ^ var_17) ^ (((min(var_3, var_17)))))) : 53408));
    var_21 = 104;
    #pragma endscop
}
