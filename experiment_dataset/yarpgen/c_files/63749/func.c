/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63749
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
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) == (((((/* implicit */_Bool) (short)(-32767 - 1))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32762)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)3)) == (((/* implicit */int) (_Bool)1)))))));
    var_19 = ((/* implicit */signed char) var_16);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_1] [i_4] = ((/* implicit */unsigned char) var_10);
                                arr_16 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned int) ((long long int) (~(var_9))));
                                arr_17 [i_0 - 1] [i_0 - 1] [i_1 + 2] [i_2] [i_2] [i_3] [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((((/* implicit */int) arr_7 [i_3] [(signed char)2] [i_0])) * (((/* implicit */int) var_7)))) >= (((/* implicit */int) arr_7 [i_0] [i_1] [i_4]))))) : (((/* implicit */int) arr_1 [i_4 + 1]))));
                            }
                        } 
                    } 
                } 
                arr_18 [i_1] [i_1 + 4] [i_0] = ((/* implicit */unsigned short) arr_6 [i_0] [i_0]);
            }
        } 
    } 
}
