/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8359
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
    var_12 = ((/* implicit */int) max((var_12), (var_6)));
    var_13 -= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) ? (max((((/* implicit */unsigned long long int) var_9)), (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) + (((/* implicit */unsigned long long int) (~(var_11))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) -477882250)) ? (600233787858902989LL) : (((/* implicit */long long int) 2520968034U)))) < ((~(var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (max((((/* implicit */unsigned int) (signed char)-15)), (1773999244U)))));
                    arr_9 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))), (max((18446744073709551599ULL), (((/* implicit */unsigned long long int) 1332011056U))))))) ? (((((/* implicit */_Bool) var_9)) ? (var_8) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) min((((/* implicit */long long int) var_3)), (var_2))))))));
                }
            } 
        } 
        var_14 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_1)) / (var_3)))) || (((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (var_6)))))) ? (var_0) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_11)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_0)))))));
        var_15 += ((/* implicit */long long int) ((int) max((((/* implicit */int) ((_Bool) var_4))), (var_6))));
        arr_10 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */long long int) var_6)))), (var_9)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_7))))) : (((var_11) << (((var_6) - (1892608380)))))));
    }
    for (int i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_4)) - (max((var_9), (var_2)))));
        var_16 = ((/* implicit */long long int) var_7);
    }
}
