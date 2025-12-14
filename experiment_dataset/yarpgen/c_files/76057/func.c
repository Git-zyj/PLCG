/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76057
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
    var_16 |= ((/* implicit */short) var_1);
    var_17 = ((/* implicit */unsigned char) ((var_3) & (((/* implicit */int) var_10))));
    var_18 = ((/* implicit */unsigned int) var_15);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_3 [(_Bool)1] [i_1]))));
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 21; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_20 |= (+(min((var_11), (((/* implicit */int) arr_5 [i_2 - 3] [i_3] [i_3 + 1])))));
                                var_21 += ((/* implicit */long long int) ((_Bool) min((var_1), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) % (arr_4 [i_2] [i_2])))))));
                            }
                        } 
                    } 
                } 
                var_22 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_5 [i_1] [i_1] [i_0])), ((unsigned char)142)))) : (((/* implicit */int) (_Bool)1)))) / (((((/* implicit */int) (!((_Bool)0)))) ^ (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) var_10))))))));
            }
        } 
    } 
}
