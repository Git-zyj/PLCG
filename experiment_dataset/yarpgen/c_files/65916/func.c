/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65916
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
    var_16 = ((/* implicit */signed char) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) + (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_7))))))) <= (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) || (((/* implicit */_Bool) var_15)))))));
    var_17 = ((/* implicit */long long int) var_12);
    var_18 = ((/* implicit */unsigned int) min((var_0), (((/* implicit */short) var_1))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_19 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 1]) : (arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 1]))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_20 += ((/* implicit */unsigned long long int) ((arr_1 [(unsigned short)0]) >> (((arr_8 [i_3] [i_2] [i_1] [i_0]) + (2008031850)))));
                            var_21 = ((/* implicit */short) arr_7 [i_0] [i_1]);
                        }
                    } 
                } 
                arr_9 [12LL] [12U] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(signed char)4] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [i_0])) >> (((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) + (24)))))) : (arr_3 [i_1] [i_1] [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 + 1])))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_15);
}
