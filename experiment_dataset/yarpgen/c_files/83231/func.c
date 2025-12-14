/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83231
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
    var_16 = ((/* implicit */unsigned int) (short)30510);
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned char)255))))))) ? ((~(((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) : (((/* implicit */unsigned int) (~((~(((/* implicit */int) (signed char)83)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0 + 2] = ((/* implicit */unsigned int) ((unsigned short) ((arr_2 [i_1] [i_1] [i_1 - 1]) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_1] [i_1 - 1])) : (((/* implicit */int) var_5)))));
                arr_6 [i_0 + 2] = ((/* implicit */signed char) arr_1 [i_0 + 1]);
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_16 [i_4] [i_4] [i_4] [i_4] [i_4] [i_3] [i_4] = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_10 [i_0 - 1])) & (((/* implicit */int) var_4))))));
                                arr_17 [i_4] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */unsigned char) ((signed char) min(((+(arr_12 [i_2 - 1] [i_2]))), (((/* implicit */unsigned long long int) ((0ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0])))))))));
                                arr_18 [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) (unsigned char)55);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((((long long int) (signed char)75)) / (((/* implicit */long long int) ((/* implicit */int) var_5)))));
}
