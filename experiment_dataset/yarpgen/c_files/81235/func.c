/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81235
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */int) var_2))))));
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_3 [i_1] [i_0] [i_0])))) * (((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_2 [i_0])), (arr_1 [i_0] [i_0]))))) : ((-(var_0)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_11 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((arr_4 [i_0] [i_2] [6ULL]) + (2147483647))) >> (((((((/* implicit */long long int) arr_3 [i_3] [i_1] [i_2])) & (var_1))) + (7987801231396698001LL))))))));
                            arr_10 [i_1] = max((((/* implicit */int) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) var_4))))), (((((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_0])) - (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_0])))));
                        }
                    } 
                } 
                var_12 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_6), (((/* implicit */int) arr_0 [i_1] [3LL]))))) ? (((/* implicit */unsigned int) max((var_3), (arr_4 [(signed char)14] [(signed char)4] [i_0])))) : (((arr_9 [i_0] [i_0] [i_0] [i_0]) / (var_0)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_0])) || (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) var_2))));
                arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_7 [i_1] [6] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_1]))))) ? (((((/* implicit */int) var_4)) / (var_3))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) : (var_8))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */unsigned int) var_5)))))) ? (((((/* implicit */_Bool) ((var_2) ? (var_6) : (var_8)))) ? (((/* implicit */long long int) (~(var_7)))) : ((~(var_9))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((int) var_6)) : ((-(var_3)))))))))));
}
