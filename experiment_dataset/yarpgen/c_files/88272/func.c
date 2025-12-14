/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88272
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
    var_20 = (signed char)127;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned long long int) ((int) 9223372036854775807LL));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_1 - 2] [i_2 - 2] [i_2 - 2] = var_7;
                            /* LoopSeq 2 */
                            for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                            {
                                var_21 = (~((~(((/* implicit */int) arr_12 [i_1 + 1] [i_2 - 2] [i_2 - 2])))));
                                arr_16 [i_0] [i_4] [i_2 + 2] [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (min((arr_13 [i_0] [i_0] [i_2] [i_0] [i_4]), (((/* implicit */unsigned long long int) arr_8 [i_0])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */long long int) var_1)) : (var_2)))) ? (min((var_14), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_2 + 1] [i_0])))) : (((((/* implicit */_Bool) var_0)) ? (10626801191569277916ULL) : (((/* implicit */unsigned long long int) var_0))))))));
                            }
                            for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
                            {
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (((((+(arr_14 [i_0] [i_0] [i_2] [i_2 + 2] [(unsigned short)13] [i_3] [i_3]))) != (((/* implicit */long long int) 4294967295U)))) ? (-4346596802498693810LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
                                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((333489156140900971ULL) & (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)126))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) (signed char)32))))) : (((((((/* implicit */_Bool) var_15)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                                var_24 = ((unsigned long long int) ((unsigned long long int) max((var_8), (((/* implicit */int) (unsigned short)33702)))));
                            }
                        }
                    } 
                } 
                arr_19 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_8);
            }
        } 
    } 
}
