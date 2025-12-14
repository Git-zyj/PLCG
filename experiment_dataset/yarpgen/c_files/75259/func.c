/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75259
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((((((arr_1 [i_0 - 3] [14LL]) / (((/* implicit */long long int) ((/* implicit */int) (short)-16384))))) + (9223372036854775807LL))) << (((var_5) - (2278493336358260530LL))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    var_19 = ((/* implicit */long long int) ((signed char) max((((/* implicit */long long int) var_2)), (var_7))));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (-(arr_7 [i_2] [i_1] [(_Bool)1])))) ? (((/* implicit */unsigned long long int) 6014974680299179709LL)) : (((unsigned long long int) (short)6351))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) var_9);
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)124))) : (2194876474803872950LL)));
                    }
                }
                arr_11 [i_0] [i_1] = ((/* implicit */unsigned int) var_15);
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) + (((/* implicit */long long int) -433387365))))) ? (arr_9 [i_0 + 1] [i_0 - 3] [i_0 - 4] [i_0 - 4]) : (arr_1 [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)30))))) : ((+(var_15)))));
                var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-17643))));
            }
        } 
    } 
    var_25 = ((/* implicit */short) ((unsigned short) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_8)) : (var_11))), (((var_4) ? (var_0) : (var_10))))));
    var_26 = ((((/* implicit */_Bool) 1423612227U)) ? (4026531840U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)62))));
}
