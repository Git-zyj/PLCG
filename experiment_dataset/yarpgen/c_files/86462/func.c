/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86462
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
    var_10 = ((/* implicit */int) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0] [i_0]))));
                arr_5 [(_Bool)1] |= ((/* implicit */short) ((var_4) ? (((arr_2 [i_1] [i_1] [i_1]) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_1]))))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (9U)))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((_Bool) ((var_4) ? (var_8) : (var_8)))) ? (((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) max((((/* implicit */signed char) var_4)), ((signed char)14)))))) : (((/* implicit */int) ((short) min((((/* implicit */signed char) (_Bool)1)), ((signed char)112)))))));
                var_11 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (!((_Bool)1)))), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) (signed char)-117))))))) ? ((-(((/* implicit */int) arr_0 [i_0] [(short)4])))) : (((((_Bool) var_9)) ? (((arr_0 [i_0] [(signed char)2]) ? (((/* implicit */int) arr_3 [i_0] [6LL])) : (((/* implicit */int) var_0)))) : (((((/* implicit */int) (unsigned char)119)) ^ (arr_1 [(_Bool)1])))))));
                var_12 = ((/* implicit */unsigned char) (+(((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) var_6);
    var_14 = ((/* implicit */long long int) max(((((!(((/* implicit */_Bool) var_3)))) || (((/* implicit */_Bool) var_3)))), (var_4)));
    var_15 += ((/* implicit */unsigned char) (-(var_7)));
}
