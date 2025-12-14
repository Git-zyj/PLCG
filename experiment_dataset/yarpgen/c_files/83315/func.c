/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83315
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
    var_13 = ((/* implicit */signed char) max((0ULL), (14ULL)));
    var_14 += (+(((/* implicit */int) var_0)));
    var_15 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((5ULL) >> (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1] [i_1] [i_1])) / (((/* implicit */int) arr_3 [i_0] [i_0])))))))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (18446744073709551613ULL))))) : ((+(18446744073709551607ULL))))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) (~(var_1)));
                                var_18 = var_0;
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? ((+(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((var_11) << (((18446744073709551615ULL) - (18446744073709551600ULL))))))));
                }
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    arr_14 [i_0] [9U] [i_0] = ((/* implicit */int) ((arr_6 [i_1]) == (arr_1 [i_0])));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0] [i_0])) / (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_5]))))));
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_5])))))));
                }
                var_22 = ((/* implicit */signed char) ((unsigned long long int) 18446744073709551609ULL));
                var_23 = ((/* implicit */unsigned long long int) min((var_23), (18446744073709551607ULL)));
            }
        } 
    } 
}
