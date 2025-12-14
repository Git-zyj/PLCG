/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78994
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
    var_18 |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_9)) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((signed char) var_15))))), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)-125))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_7 [i_1] [(signed char)8] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) var_10)))));
                arr_8 [i_0] [(short)6] = ((/* implicit */_Bool) max((((1481107844U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)237))))), (((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) 5514584096962178230LL)) ? (var_0) : (((/* implicit */int) arr_4 [7LL]))))))));
                arr_9 [(signed char)13] [i_1] [i_1] = ((/* implicit */int) min((max((((((/* implicit */_Bool) 5514584096962178244LL)) ? (1216869031394317585LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) (unsigned char)118)))), (((/* implicit */long long int) (-(359344499))))));
                arr_10 [i_0] [(signed char)14] [1ULL] = ((/* implicit */short) ((((/* implicit */_Bool) max((min((var_10), (var_11))), (((32767) & (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2813859450U))) : (((unsigned int) (unsigned char)0))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((unsigned int) -290592729));
}
