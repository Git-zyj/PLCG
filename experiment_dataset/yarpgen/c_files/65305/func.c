/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65305
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
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_18))))), (var_0))))));
    var_21 = ((/* implicit */long long int) var_4);
    var_22 = (-(((((/* implicit */int) var_2)) + (((/* implicit */int) (unsigned short)22319)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_23 ^= ((/* implicit */short) ((unsigned int) ((signed char) var_4)));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((37947572U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)53))))))));
                            var_25 ^= ((/* implicit */unsigned short) 5278730503851995123LL);
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((long long int) arr_8 [i_0] [i_2] [(unsigned char)8])))));
                            arr_12 [i_0 - 1] [i_3] [i_2] [i_1] [i_0 - 1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_9 [i_3] [i_2 + 1] [i_2 - 1] [i_0 + 2]) - (var_18))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */long long int) arr_8 [(short)3] [i_0] [i_1]);
                var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_7 [i_0 + 1])))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1] [i_1]))))) : (max((((/* implicit */long long int) arr_11 [i_1] [i_0 + 2] [i_1])), ((~(arr_3 [i_1] [i_0 + 2])))))));
                var_29 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 2])))))));
            }
        } 
    } 
}
