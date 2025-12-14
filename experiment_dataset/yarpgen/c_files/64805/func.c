/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64805
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_0 [(signed char)10])))) ? (((/* implicit */int) ((4294967295U) == (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) : (min((arr_0 [(signed char)12]), (arr_0 [22LL]))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) arr_7 [(short)17] [i_1] [(short)17]))));
                            var_12 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967288U)) ? (arr_4 [i_2]) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 5U)), (-23LL))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_3 - 1])) && (((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) var_6)) ? (max((var_5), (((/* implicit */int) var_2)))) : (((/* implicit */int) (_Bool)1))))));
                            var_13 = ((/* implicit */_Bool) max((var_13), (arr_2 [i_0] [i_0])));
                            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) ^ ((+(((/* implicit */int) ((3752104183078734378LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [i_2])))))))))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */int) 4294967294U);
            }
        } 
    } 
    var_16 += ((/* implicit */short) max(((~(((/* implicit */int) ((-6721495849991694982LL) == (((/* implicit */long long int) 127))))))), (((/* implicit */int) var_9))));
    var_17 = ((/* implicit */unsigned int) min((var_17), (min((((/* implicit */unsigned int) var_2)), ((~(min((3758096384U), (((/* implicit */unsigned int) (_Bool)1))))))))));
    var_18 *= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)176)) - (((/* implicit */int) (signed char)-16))));
}
