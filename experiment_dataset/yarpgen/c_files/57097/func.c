/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57097
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
    var_12 += (+(((((/* implicit */_Bool) (short)-15192)) ? (((/* implicit */int) ((18446744073709551609ULL) == (((/* implicit */unsigned long long int) 2762102894U))))) : ((+(((/* implicit */int) var_5)))))));
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) % (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) 3025948819U)) : (var_7)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))) : (min((18446744073709551590ULL), (var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)36)) : (((/* implicit */int) (short)32767))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */int) var_1)))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_14 -= ((((((_Bool) arr_0 [12U])) ? (arr_3 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) == (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_2))) ^ (((/* implicit */int) var_4))))));
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) (((+(((/* implicit */int) arr_1 [i_0] [i_1])))) < (((/* implicit */int) var_6))))) : (((/* implicit */int) ((var_8) < (((/* implicit */unsigned long long int) var_10)))))));
                arr_7 [(unsigned char)18] [i_1] [(unsigned char)18] = ((/* implicit */long long int) ((((unsigned int) var_7)) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_8) * (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) var_2)) < (1269018477U)))) : (((/* implicit */int) ((unsigned short) arr_2 [i_0]))))))));
            }
        } 
    } 
}
