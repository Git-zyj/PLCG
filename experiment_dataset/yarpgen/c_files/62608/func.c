/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62608
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
    var_11 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) 4758396692787386131LL)) & (18446744073709551607ULL))) >> (((-4758396692787386131LL) + (4758396692787386132LL)))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 14; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) max((var_12), (((signed char) ((((((/* implicit */_Bool) 4758396692787386108LL)) || (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_1] [i_4])))) || ((!(((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1] [i_4])))))))));
                                arr_16 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 3] &= ((/* implicit */unsigned short) ((long long int) (+((+(((/* implicit */int) (_Bool)1)))))));
                                var_13 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 8991043912690706088ULL)) ? ((~(8991043912690706079ULL))) : (((/* implicit */unsigned long long int) -4758396692787386133LL)))), (((/* implicit */unsigned long long int) -2078266391722444536LL))));
                                arr_17 [i_3] [i_3] [i_3 - 2] [i_3 + 1] [i_3] = var_3;
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 4; i_5 < 14; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        {
                            var_14 -= ((/* implicit */short) min((((((/* implicit */int) arr_9 [i_5 - 2])) * (((/* implicit */int) arr_0 [i_6])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)3)) ? (4758396692787386133LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)216)))))))))));
                            var_15 *= ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_6] [i_6])) : (((/* implicit */int) (signed char)37))))), (arr_21 [i_6]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((((/* implicit */unsigned short) var_0)), (var_1)))))));
                        }
                    } 
                } 
                arr_23 [i_0 - 3] [i_0 - 3] [i_1] = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_1] [i_1]))) + (((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 - 3] [i_0] [i_1] [i_1] [i_1])))))))));
                /* LoopNest 2 */
                for (long long int i_7 = 1; i_7 < 16; i_7 += 2) 
                {
                    for (long long int i_8 = 3; i_8 < 16; i_8 += 2) 
                    {
                        {
                            var_16 -= ((/* implicit */signed char) ((((((/* implicit */int) arr_14 [i_8 - 3] [i_8])) ^ (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 2])))) | (((((/* implicit */_Bool) arr_5 [i_0 - 4] [i_8 - 1])) ? (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 4])) : (((/* implicit */int) arr_14 [i_8 - 1] [i_8]))))));
                            arr_29 [i_0] [i_1] |= ((/* implicit */unsigned int) (((((+(arr_25 [i_0] [i_1]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_7])))))))) ? (((int) arr_3 [i_7 - 1] [i_8 + 1] [i_8])) : ((+(((/* implicit */int) arr_11 [i_0 + 1] [i_8 - 3] [i_8 - 1] [i_8] [i_8]))))));
                        }
                    } 
                } 
                arr_30 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4758396692787386133LL)) ? (((((/* implicit */_Bool) var_1)) ? (arr_20 [i_1] [i_1]) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((-4758396692787386123LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_1])))))))))) ? ((+(((/* implicit */int) arr_6 [i_0] [i_1] [i_1])))) : ((+(((/* implicit */int) var_5))))));
            }
        } 
    } 
}
