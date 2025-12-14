/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85962
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
    var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) (short)25)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (9223372036854775807LL)))));
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_7))))));
    var_18 = var_6;
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] [i_0 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 3] [i_1 + 1] [i_1 - 3])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_5 [i_1 - 3] [i_1 + 1]))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551615ULL) : (0ULL))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65517)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            arr_15 [i_1] [i_1] [i_1 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_12 [i_0] [(unsigned short)1] [(signed char)23] [(unsigned short)1])) : (((/* implicit */int) (signed char)31))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)512))) : (-4822412700418241889LL)))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_11)) : (arr_4 [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2190385235094056434LL)) ? (((/* implicit */int) var_12)) : (var_11))))));
                            arr_16 [(unsigned short)13] [i_1 - 3] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) arr_7 [i_0 + 2])) : (20ULL)))) ? (((((/* implicit */_Bool) 2097151U)) ? (-4822412700418241879LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_15)))))));
                        }
                    } 
                } 
                arr_17 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_13 [i_1] [i_0])))) ? (((((/* implicit */_Bool) var_0)) ? (arr_7 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4515))))) : (((((/* implicit */_Bool) arr_13 [i_1] [i_1])) ? (((/* implicit */long long int) var_7)) : (arr_7 [i_0 - 1]))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (var_2) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_2)))) ? (var_5) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 3518662447U)) : (4822412700418241888LL))))))))));
}
