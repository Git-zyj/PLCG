/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82100
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
    var_15 &= ((/* implicit */unsigned char) (-(((/* implicit */int) min((((/* implicit */short) (unsigned char)7)), ((short)18518))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)13207))))) ? (((/* implicit */int) max((arr_1 [i_0] [(unsigned char)0]), (((/* implicit */short) var_10))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) arr_4 [i_0] [i_0] [i_1]))) - (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) ((short) arr_2 [12LL]))) : (((/* implicit */int) ((signed char) (short)-32138)))))));
                arr_5 [i_0] [(unsigned char)21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-32138)) ? (464687502) : (((/* implicit */int) (unsigned char)129))));
                var_18 &= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((int) (short)22910))) <= (((((/* implicit */_Bool) 0LL)) ? (1LL) : (((/* implicit */long long int) ((/* implicit */int) (short)13207)))))))) << (((((long long int) arr_1 [i_1] [i_1])) + (17959LL)))));
            }
        } 
    } 
}
