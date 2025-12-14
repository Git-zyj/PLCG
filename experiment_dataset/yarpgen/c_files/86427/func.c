/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86427
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
    var_17 |= ((/* implicit */unsigned long long int) var_9);
    var_18 ^= ((/* implicit */unsigned long long int) max((var_7), (((/* implicit */short) ((max((((/* implicit */long long int) 829052172)), (var_12))) < (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned char)206)) : (((/* implicit */int) var_0))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)206))) : (0U)))) ? (((/* implicit */int) (unsigned char)206)) : (((/* implicit */int) arr_1 [i_0 - 1]))))) && (((/* implicit */_Bool) (unsigned char)49))));
                arr_6 [i_0] = ((/* implicit */signed char) max((((((((/* implicit */int) (unsigned char)50)) < ((-2147483647 - 1)))) ? (((/* implicit */unsigned int) arr_2 [i_0])) : (((((/* implicit */_Bool) 16655124653846568384ULL)) ? (2708117613U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)205))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0]))))));
            }
        } 
    } 
}
