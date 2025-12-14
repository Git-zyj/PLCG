/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68310
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_5))))));
            var_13 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? ((+(var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            var_14 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))));
            /* LoopSeq 3 */
            for (short i_3 = 2; i_3 < 14; i_3 += 1) /* same iter space */
            {
                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (~(var_5))))));
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((var_9) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))))))));
            }
            for (short i_4 = 2; i_4 < 14; i_4 += 1) /* same iter space */
            {
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_4))));
                var_18 *= ((/* implicit */short) (-(((var_2) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
            }
            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                arr_12 [i_0] = ((/* implicit */signed char) ((var_2) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_11) : (var_8))))));
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_1)))))));
                var_20 = ((/* implicit */_Bool) max((var_20), (var_10)));
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_11)) : (var_9))))));
            }
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_1))));
        }
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((var_5) == (((var_5) - (var_5))))))));
    }
    var_24 = ((/* implicit */long long int) max((var_24), (var_3)));
}
