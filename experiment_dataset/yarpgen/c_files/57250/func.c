/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57250
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
    var_12 ^= ((int) var_4);
    var_13 = ((/* implicit */short) 2296375253U);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) ((unsigned long long int) max((min((((/* implicit */unsigned long long int) arr_7 [(signed char)5] [i_1] [i_2])), (arr_4 [(signed char)7]))), (((/* implicit */unsigned long long int) max((var_7), (arr_7 [i_0] [i_1] [i_2])))))));
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((-294911351), (-294911340)))), (((((/* implicit */_Bool) -294911355)) ? (((/* implicit */unsigned int) -294911351)) : (1998592038U)))))), (((((/* implicit */_Bool) arr_0 [6U])) ? (max((((/* implicit */unsigned long long int) 1998592042U)), (16088636487368766601ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                    var_15 = ((int) (-(var_3)));
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((130944ULL), (((/* implicit */unsigned long long int) var_8))))) ? ((-(1255819530))) : (((/* implicit */int) arr_0 [i_0]))))), (var_2))))));
                    arr_9 [i_2] [i_1] [i_2] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_0 [i_2])) == (((/* implicit */int) ((unsigned short) arr_4 [i_1]))))));
                }
            } 
        } 
    } 
}
