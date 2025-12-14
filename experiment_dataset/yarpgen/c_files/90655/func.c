/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90655
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
    var_11 = ((/* implicit */unsigned int) ((var_0) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : ((+(((/* implicit */int) var_10)))))) : (((/* implicit */int) var_0))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_12 += ((/* implicit */_Bool) var_3);
                                arr_10 [(short)15] [i_1 - 1] [(short)15] [i_3] [(short)15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5))) : (((((/* implicit */_Bool) arr_8 [i_0 - 1] [(unsigned short)20] [(unsigned short)16])) ? (arr_3 [i_1] [i_2] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_3])))))));
                                var_13 = arr_3 [i_0 + 2] [i_0 - 1] [i_3];
                                var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6)))) & (var_5)));
                                var_15 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)37)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))), (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-1))))) ? (min((((/* implicit */unsigned int) (unsigned char)10)), (arr_1 [i_1]))) : (((/* implicit */unsigned int) var_5)))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))) * ((-(arr_1 [i_0]))))));
                            }
                        } 
                    } 
                    var_16 *= ((/* implicit */short) ((9223372036854775807LL) / ((((-(-9223372036854775807LL))) / (((/* implicit */long long int) ((unsigned int) (unsigned short)65535)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) var_9);
    var_18 = ((/* implicit */long long int) (((~(((var_6) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-32752)))))) << (((/* implicit */int) var_1))));
}
