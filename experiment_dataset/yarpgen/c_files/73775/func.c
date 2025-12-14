/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73775
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
    var_18 = ((/* implicit */unsigned short) var_5);
    var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_16))));
    var_20 = var_16;
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */short) (!(((var_5) != ((((_Bool)1) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))));
                    arr_10 [i_0] [i_0 - 1] [i_1] = ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (var_7)))))));
                    var_21 = ((/* implicit */int) min((((long long int) 2973792198U)), (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (-9002844578645278587LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-120))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (unsigned char)47)))))))) ? (((((/* implicit */_Bool) var_11)) ? (min((var_11), (((/* implicit */unsigned int) (short)12116)))) : (min((948230100U), (((/* implicit */unsigned int) (signed char)0)))))) : (var_17))))));
}
