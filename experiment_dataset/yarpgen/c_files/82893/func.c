/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82893
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
    var_14 = ((/* implicit */unsigned int) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) var_4);
                                var_16 = ((/* implicit */unsigned long long int) arr_7 [i_3] [i_4]);
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0]))) >= (3903713863U)))) : (((/* implicit */int) arr_1 [i_2]))));
                                var_18 *= ((/* implicit */short) min((3903713863U), (391253432U)));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_3 [i_0]), (var_0)))) ? (((/* implicit */int) (unsigned short)65526)) : (((/* implicit */int) var_3))));
                    arr_15 [3ULL] [i_1] [i_0] |= ((/* implicit */unsigned char) arr_7 [i_0] [i_0]);
                }
                var_20 ^= ((/* implicit */short) min(((unsigned char)92), ((unsigned char)87)));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) max((var_21), (var_0)));
}
