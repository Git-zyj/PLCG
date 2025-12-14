/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86977
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
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    var_17 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) - (((/* implicit */int) (unsigned short)64085))));
                    var_18 &= ((((arr_1 [i_2 + 2] [i_1]) >> (((var_2) - (4265891475219699148ULL))))) | (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)65535)) << (((((/* implicit */int) arr_5 [i_0] [i_0])) - (30))))) ^ (((/* implicit */int) max((var_13), (var_16))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max(((~(((((/* implicit */int) var_13)) / (((/* implicit */int) var_3)))))), (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)15111)), (var_13)))) < (((/* implicit */int) var_16)))))));
}
