/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64076
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
    var_14 |= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (var_10))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 21; i_2 += 4) 
                {
                    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)64218)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) : (var_5))))))));
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_5 [(short)12] [(short)12]))));
                }
                var_17 ^= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) ((unsigned short) var_12))) ? (((/* implicit */int) max((arr_5 [i_0 - 2] [i_1]), (((/* implicit */unsigned short) arr_2 [i_0 - 3] [i_0 + 2]))))) : (((/* implicit */int) arr_3 [i_0])))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (~(max((((((/* implicit */_Bool) (unsigned short)1317)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (0ULL))), (((/* implicit */unsigned long long int) (!((_Bool)1))))))));
}
