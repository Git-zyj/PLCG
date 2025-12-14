/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83050
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
    var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) var_1)))));
    var_14 &= ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    var_15 = ((/* implicit */int) max((var_15), ((~((+(((/* implicit */int) (!(var_5))))))))));
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (unsigned short)19320))));
                    var_17 = ((/* implicit */long long int) ((((unsigned long long int) ((((/* implicit */int) (unsigned char)241)) < (((/* implicit */int) arr_5 [i_0]))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)241))))) ? (((arr_1 [i_2]) ? (4294967295U) : (arr_4 [i_0] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) arr_3 [i_2])))))))) - (4294967289U)))));
                }
                var_18 = ((/* implicit */signed char) ((unsigned long long int) ((unsigned char) (((_Bool)0) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) arr_5 [i_0]))))));
            }
        } 
    } 
}
