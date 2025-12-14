/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92592
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
    for (unsigned int i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17480807504800517734ULL)) ? (((((/* implicit */_Bool) 2147483647)) ? (1444411650001145673LL) : (var_2))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_0 + 2])) : ((-2147483647 - 1)))))))) ? (max((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)26))) : (arr_2 [i_0]))), (min((arr_2 [i_1]), (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) 576460614864470016LL))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0 + 1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_1 [i_4] [i_1])), (((unsigned long long int) -3849834764148462279LL))));
                                var_13 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) min((3588359667U), (((/* implicit */unsigned int) (signed char)(-127 - 1)))))) > (-213970650930514879LL))))) * (min((((/* implicit */unsigned long long int) ((signed char) var_5))), (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1]))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_11 [i_0 - 4] [5] [i_0 - 4] [i_1] [i_1] [i_1]))));
                var_15 = ((/* implicit */unsigned short) max((((10982049836358360009ULL) / (((/* implicit */unsigned long long int) 1959978867U)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)238)) == (1122905363))))));
            }
        } 
    } 
    var_16 = ((((/* implicit */_Bool) max((((((/* implicit */int) (unsigned char)3)) << (((var_9) + (5519233766667264121LL))))), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_3)))))))) ? (((((((((/* implicit */_Bool) (short)21639)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-21640))) : (-213970650930514893LL))) + (9223372036854775807LL))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) == (12893291113468696240ULL)))))) : (((/* implicit */long long int) ((int) (!(var_4))))));
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(max((14435940519525911049ULL), (((/* implicit */unsigned long long int) -213970650930514882LL)))))))));
}
