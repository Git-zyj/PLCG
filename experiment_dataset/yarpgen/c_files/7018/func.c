/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7018
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
    var_11 = ((/* implicit */long long int) (~((~(var_1)))));
    var_12 &= ((/* implicit */long long int) ((((long long int) var_7)) != (((/* implicit */long long int) (+(var_1))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */short) (-(((int) arr_3 [i_0]))));
                var_14 = ((/* implicit */int) var_5);
                arr_5 [(signed char)13] [i_1] = ((/* implicit */long long int) (((+(((/* implicit */int) arr_1 [7] [i_1])))) + (((var_2) ^ (((/* implicit */int) arr_0 [i_0]))))));
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) arr_0 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_0] [i_0])), (var_6))))) : (((unsigned int) var_5)))))))));
            }
        } 
    } 
    var_16 = ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))))), ((unsigned char)170))))) ^ (var_3));
}
