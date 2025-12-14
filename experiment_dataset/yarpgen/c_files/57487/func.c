/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57487
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_9)) : (var_4)))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_3))))) & (((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
    var_12 -= var_7;
    var_13 = ((/* implicit */signed char) var_5);
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            arr_7 [i_0 - 4] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_9)) : (var_0)))) : (var_8)));
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned long long int) var_1))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            var_15 &= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_0) : (var_7)))) || (((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) var_10))))))) ? (((/* implicit */long long int) ((unsigned int) ((var_10) && (((/* implicit */_Bool) var_2)))))) : (var_5)));
            var_16 ^= ((/* implicit */long long int) ((int) var_10));
            arr_10 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) var_6);
        }
        var_17 = min((((/* implicit */long long int) ((var_10) ? (((unsigned int) var_6)) : (var_0)))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) & (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_1) >= (var_9))))) : (((long long int) var_9)))));
    }
    for (int i_3 = 2; i_3 < 24; i_3 += 3) 
    {
        arr_14 [i_3] = ((/* implicit */int) ((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_2))) >= (((/* implicit */unsigned int) var_9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((var_5) > (((/* implicit */long long int) var_1))))) : (var_9)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_1)) : (var_8)))));
        arr_15 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_9)) : (var_0)))), (((var_10) ? (var_8) : (((/* implicit */unsigned long long int) var_9))))))) && (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_2)) <= (var_6))) ? (((((/* implicit */_Bool) var_8)) ? (var_7) : (var_2))) : (((/* implicit */unsigned int) ((var_9) + (var_9)))))))));
        var_18 |= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) ((var_10) ? (var_4) : (((/* implicit */unsigned long long int) var_0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) var_0))) < (max((var_8), (((/* implicit */unsigned long long int) var_10)))))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_0)) : (var_8)))));
    }
}
