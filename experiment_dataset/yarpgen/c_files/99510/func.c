/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99510
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
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((((_Bool)0) ? (var_4) : (((/* implicit */int) var_1)))) ^ (((/* implicit */int) min((var_1), (((/* implicit */short) var_0)))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_10))))) : (((var_3) ^ (((/* implicit */long long int) ((int) 2093056))))))))));
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)192)) ^ (((/* implicit */int) var_5))))) : (min((((/* implicit */unsigned long long int) var_6)), (var_13)))))) ? (((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_3)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (var_2))) : (((/* implicit */unsigned long long int) var_12)))) : (var_2))))));
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+((~(8388592)))))), (((((/* implicit */long long int) ((/* implicit */int) var_8))) / (min((var_3), (((/* implicit */long long int) var_10)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)192))) == (4118082352U))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) ((unsigned short) arr_4 [i_0]))));
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_3)))) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (arr_4 [(unsigned short)6]))) : (((/* implicit */long long int) ((((((/* implicit */int) var_5)) + (2147483647))) << (((((-1120993802) + (1120993804))) - (2))))))))) ? (((/* implicit */int) ((short) (+(arr_3 [i_0]))))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0] [i_1])), (var_10))))));
                var_17 = ((/* implicit */short) (+(arr_1 [1])));
            }
        } 
    } 
}
