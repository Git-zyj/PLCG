/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96526
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
    var_15 ^= ((/* implicit */int) (unsigned char)251);
    var_16 = ((/* implicit */short) ((min((596898581215686899LL), (((/* implicit */long long int) var_10)))) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3434)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_3 [i_0] [i_2] [i_1 + 1]) : (((/* implicit */int) var_5))))) ? ((-(((/* implicit */int) arr_4 [i_1] [i_1] [i_2])))) : (((((/* implicit */int) (signed char)-68)) ^ (((/* implicit */int) var_5)))))));
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62102))))))))));
                    arr_7 [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) 2211171212014702879ULL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((((/* implicit */_Bool) var_9)) ? (arr_1 [i_1 - 1]) : (((/* implicit */int) var_12)))))));
                }
            } 
        } 
    } 
}
