/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99879
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((var_10) ^ (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) arr_2 [9ULL] [i_1] [9ULL])) ? (var_2) : (((/* implicit */int) var_5))))))) : ((-(arr_6 [i_1])))));
                    arr_7 [i_0] [i_1] [i_1] = (+(var_7));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (min((var_6), (var_11))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2061300799)) ? (((/* implicit */long long int) ((/* implicit */int) (short)11196))) : (var_6)))) ? ((+(var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5388496227919839343LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))))))) ? ((((((_Bool)1) ? (((/* implicit */int) var_9)) : (var_10))) << (((((((/* implicit */_Bool) var_9)) ? (var_2) : (1352821151))) - (1714001699))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : ((-(((/* implicit */int) (_Bool)1))))))));
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (short)-19314))));
}
