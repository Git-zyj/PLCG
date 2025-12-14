/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95247
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
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) var_6)) ^ (((/* implicit */int) (unsigned short)0)))) : (((((((/* implicit */_Bool) -6806157274396157444LL)) ? (((/* implicit */int) (unsigned short)22)) : (((/* implicit */int) (short)-29885)))) & (((/* implicit */int) var_1)))))))));
    var_16 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-26792)) : (((/* implicit */int) var_13)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) 2042291977);
                arr_6 [i_1] |= ((/* implicit */short) min((((((/* implicit */int) arr_5 [i_0] [i_1 + 1])) ^ (((/* implicit */int) (unsigned short)10)))), (((((/* implicit */_Bool) 2042291977)) ? (((/* implicit */int) arr_2 [i_1] [i_1 - 1])) : (((/* implicit */int) arr_5 [i_0] [i_1 + 3]))))));
                arr_7 [i_1 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */int) arr_2 [i_1 + 3] [i_1])) : (((/* implicit */int) arr_1 [i_1 + 1]))))) ? (((/* implicit */int) arr_1 [i_1 + 3])) : (((((/* implicit */int) (unsigned short)65535)) << (((((/* implicit */int) (short)-19224)) + (19236)))))));
                var_18 = ((/* implicit */long long int) (unsigned short)65526);
            }
        } 
    } 
}
