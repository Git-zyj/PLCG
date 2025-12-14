/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56479
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_2] [i_1] [i_1] = ((short) 12515660445802642050ULL);
                    var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) arr_0 [i_0]))));
                    var_11 = max((((/* implicit */unsigned short) max((arr_2 [i_2]), (arr_2 [i_0])))), ((unsigned short)30612));
                }
            } 
        } 
    } 
    var_12 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)7100))) <= (min(((((_Bool)1) ? (((/* implicit */unsigned long long int) 1749741541)) : (4203875994193104414ULL))), (14763071961242654658ULL)))));
    var_13 = ((/* implicit */long long int) var_4);
}
