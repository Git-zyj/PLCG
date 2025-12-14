/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97800
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
    var_12 = ((/* implicit */int) ((var_2) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_7)) <= (((long long int) var_3))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_10 [i_0] [i_0] [i_0 - 3] [i_1] [1ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [6U] [i_0] [6U])) ? (((/* implicit */unsigned long long int) arr_1 [i_0 - 2])) : (((5089143904767306915ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-97)))))));
                                var_13 *= ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_5 [i_3] [i_1 - 1])))) >> (((((((/* implicit */_Bool) (short)(-32767 - 1))) ? ((-(18163445744820930176ULL))) : (((/* implicit */unsigned long long int) (+(475707699)))))) - (283298328888621414ULL)))));
                                arr_11 [i_1] [18] [i_1] [i_3] [i_1] = ((/* implicit */unsigned short) var_11);
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (unsigned short)3393)) : (10))), (((/* implicit */int) ((((/* implicit */long long int) (+(3333036264U)))) <= (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_0] [(unsigned short)6] [i_0]))) : (-5628612332756991669LL)))))))))));
                arr_12 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (max((var_2), (((/* implicit */unsigned long long int) arr_7 [i_0] [15U])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 262143)) ? (((((/* implicit */_Bool) -5628612332756991657LL)) ? (4145113690896454745LL) : (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) var_11)))))));
            }
        } 
    } 
}
