/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98071
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                var_14 &= ((/* implicit */int) ((1198956345U) >> (((((((/* implicit */_Bool) 1198956333U)) ? (3096010965U) : (1198956345U))) - (3096010934U)))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) (-(3096010962U)));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((int) var_13));
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((var_10) <= (min((3263566563U), (((/* implicit */unsigned int) (signed char)-18)))))))));
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_13)) / ((~(0ULL))))))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 4; i_2 < 18; i_2 += 2) 
    {
        for (unsigned int i_3 = 3; i_3 < 16; i_3 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((long long int) arr_4 [i_2] [i_2]))) ? (((((/* implicit */int) (signed char)82)) - (arr_9 [i_3] [i_2] [1U]))) : (((/* implicit */int) var_6)))) / (((/* implicit */int) arr_4 [6U] [i_3 + 2]))));
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_2 - 2])) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) / (var_3)))))) : (((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (signed char)37)))))));
                                arr_18 [16LL] [i_3] [i_3] [i_4] [(_Bool)1] [i_5] [i_6 - 2] |= ((/* implicit */long long int) ((((/* implicit */int) var_4)) | (((/* implicit */int) ((short) var_5)))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) ((var_1) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) arr_15 [i_3 + 2] [i_6])))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3096010976U)) && (((/* implicit */_Bool) var_8))))), (var_0))) : (((var_1) ? (min((var_0), (((/* implicit */unsigned long long int) -391402187)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4])))))));
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_4 [i_6 + 1] [i_6 + 1]), (arr_4 [i_6 + 1] [(short)15])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
