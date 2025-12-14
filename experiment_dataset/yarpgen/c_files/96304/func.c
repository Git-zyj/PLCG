/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96304
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
    var_17 &= ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) arr_2 [i_0 + 2]);
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 18; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))))), (max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 3]))))))));
                                var_20 *= ((/* implicit */signed char) var_13);
                                var_21 = ((/* implicit */_Bool) arr_11 [i_0]);
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1 - 1] [i_1 - 1]))) : (((((/* implicit */_Bool) var_9)) ? (arr_10 [i_0] [i_0] [i_1 - 1] [i_1] [i_1 - 1] [i_0]) : (((/* implicit */long long int) 2147483647))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_0] [i_0]))))) : (max(((+(var_13))), (((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_0]) ? (((/* implicit */long long int) arr_11 [i_1])) : (var_9))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_11)) ? ((-(var_12))) : (((/* implicit */long long int) ((((/* implicit */int) var_1)) >> ((((((-2147483647 - 1)) - (-2147483632))) + (23))))))))));
    var_24 = ((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)0)), (var_6)));
    var_25 = ((/* implicit */long long int) 3738922341U);
}
