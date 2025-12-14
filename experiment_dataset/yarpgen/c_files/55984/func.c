/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55984
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
    var_20 = ((/* implicit */_Bool) var_12);
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))) || (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) (signed char)-72))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) var_19)))), ((-(((/* implicit */int) arr_4 [i_0] [5LL] [i_0]))))))) ? (((/* implicit */int) max((arr_4 [i_1 - 2] [i_0] [i_1]), (arr_4 [i_1 - 2] [i_1] [i_1 - 2])))) : (((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)5)))))));
                var_22 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1 + 3])) << (((var_0) - (4679589032638533400LL)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1 + 2]))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [(unsigned char)14]))) + (arr_3 [i_1] [(unsigned char)9]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))) : (((/* implicit */long long int) ((((/* implicit */int) max(((unsigned char)190), (var_17)))) - ((-(((/* implicit */int) arr_2 [i_0] [i_1]))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}
