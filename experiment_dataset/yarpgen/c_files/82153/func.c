/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82153
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
    var_12 *= ((/* implicit */unsigned char) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_0] [i_0])))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_15 [i_4] [(short)2] [i_1] [i_1 + 1] [i_0] = ((/* implicit */unsigned char) arr_9 [i_1 + 1] [i_3] [i_1] [i_1 + 1] [(signed char)4]);
                                var_14 -= ((/* implicit */unsigned short) arr_4 [i_0]);
                                var_15 = ((/* implicit */_Bool) arr_10 [i_4] [(unsigned short)4] [i_2] [(unsigned short)4]);
                            }
                        } 
                    } 
                } 
                arr_16 [i_1] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) arr_2 [i_0] [i_0])))) << (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)0)))))) ^ ((~((~(((/* implicit */int) arr_8 [i_1] [i_1] [i_1]))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_0);
}
