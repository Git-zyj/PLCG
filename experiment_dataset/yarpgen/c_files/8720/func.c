/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8720
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
    var_10 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_1)) << (((/* implicit */int) var_3)))) + (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_4))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_11 *= ((/* implicit */int) ((((/* implicit */int) arr_0 [i_1] [i_0])) < ((~(((/* implicit */int) arr_2 [i_0]))))));
                    var_12 &= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_0] [i_1]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_15 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 532676608)) * (18446744073709551615ULL)))) ? (((((/* implicit */int) arr_2 [i_0])) / (arr_11 [i_1] [i_1] [i_3] [i_4]))) : (((((/* implicit */int) arr_2 [i_0])) / (arr_11 [i_3] [i_1] [i_3] [i_3])))));
                                arr_16 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_4] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_0]))) : ((+(arr_13 [i_4])))));
                                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (((-(var_5))) | (((/* implicit */unsigned long long int) var_6))))) && (((/* implicit */_Bool) (-(((arr_3 [i_1]) - (var_6))))))));
                                arr_17 [i_1] [(unsigned short)8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) (unsigned short)65535))))))));
                                var_14 = ((/* implicit */unsigned short) arr_8 [i_1]);
                            }
                        } 
                    } 
                    var_15 ^= (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_7);
    var_17 ^= ((/* implicit */unsigned int) var_8);
}
