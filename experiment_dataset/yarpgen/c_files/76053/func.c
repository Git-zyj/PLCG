/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76053
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
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-66)) < (1173437167))))));
    var_21 = ((/* implicit */int) ((min((var_14), (((/* implicit */unsigned long long int) (unsigned char)170)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-66)) >= (((/* implicit */int) var_18))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 = ((unsigned long long int) ((arr_2 [i_0] [i_1]) >> (((min((var_11), (((/* implicit */long long int) var_12)))) - (61LL)))));
                arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_2 [i_0] [0LL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_23 &= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) & (((var_17) << (((arr_8 [i_0] [2ULL] [i_0] [2ULL]) + (7880343673529618337LL)))))));
                            var_24 = var_8;
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (~(((/* implicit */int) min(((short)16167), (arr_10 [i_3] [i_2] [i_2] [i_0])))))))));
                            arr_14 [i_0] [i_3] [i_2] [i_0] = ((/* implicit */_Bool) ((arr_8 [i_0] [i_1] [i_1] [i_3]) / (((/* implicit */long long int) ((/* implicit */int) (short)-16185)))));
                            var_26 ^= ((/* implicit */long long int) ((unsigned int) min((((/* implicit */long long int) (+(((/* implicit */int) var_9))))), (arr_0 [i_2]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
