/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78358
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
    var_15 = ((/* implicit */int) max((((((/* implicit */_Bool) (short)19828)) ? (((((/* implicit */_Bool) (short)-19828)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))))), (((var_5) << (((/* implicit */int) (_Bool)1))))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_11)))), (18446744073709551615ULL)))) ? (min((min((2ULL), (18446744073709551614ULL))), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_2))), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1))))))))));
    var_17 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) arr_2 [(signed char)2] [i_0 + 1]))));
        var_19 &= ((/* implicit */unsigned int) max((((((9223372036854775807LL) <= (((/* implicit */long long int) 1920845254U)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 3] [i_0 + 4]))) + (arr_0 [i_0 + 4]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [(unsigned char)3])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))))), (((((/* implicit */_Bool) (unsigned char)219)) ? (arr_0 [i_0 + 4]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (_Bool)1))));
                            var_21 ^= ((/* implicit */unsigned long long int) (_Bool)1);
                            var_22 = ((/* implicit */unsigned char) (+(arr_10 [i_0] [i_1] [5] [i_3] [8ULL])));
                            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (var_9))) ? (((unsigned int) var_14)) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_0] [10ULL] [10ULL] [i_0 + 3] [i_0] [5U]))))))))));
                            var_24 = ((/* implicit */long long int) (unsigned short)42546);
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 4] [i_0 + 3])) >= (((/* implicit */int) arr_6 [i_0 + 4] [i_0 + 1] [i_0 + 2])))))));
        }
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            var_26 = ((/* implicit */unsigned char) (short)-19828);
            var_27 |= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0 + 2] [0ULL])) ? (((/* implicit */long long int) 2147483647)) : (-3786719014042654482LL))), (((/* implicit */long long int) ((arr_13 [i_0] [9U] [i_0 + 2] [i_0 - 1]) < (arr_13 [(_Bool)1] [i_0] [i_0 + 2] [i_0]))))));
        }
    }
}
