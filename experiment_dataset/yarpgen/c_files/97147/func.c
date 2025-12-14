/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97147
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                var_18 = (-(((/* implicit */int) var_13)));
                var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (916725067) : (916725067)))) && (((/* implicit */_Bool) var_7)))))));
            }
        } 
    } 
    var_20 = min((((/* implicit */unsigned long long int) var_1)), (((((((/* implicit */int) (signed char)-89)) < (((/* implicit */int) (unsigned short)10295)))) ? (((/* implicit */unsigned long long int) var_7)) : (min((var_4), (((/* implicit */unsigned long long int) (_Bool)1)))))));
    var_21 = ((/* implicit */unsigned int) ((min(((-(var_17))), (((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) (unsigned short)50792)) : (((/* implicit */int) var_14))))))) >= (((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) / (-916725088)))) : (var_16)))));
}
