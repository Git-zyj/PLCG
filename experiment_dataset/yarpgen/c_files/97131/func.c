/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97131
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */int) max((var_18), ((-(((/* implicit */int) (_Bool)1))))));
                    arr_7 [i_1] = ((/* implicit */_Bool) (+(4398046511103LL)));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) ((unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), (var_1)))), (((unsigned long long int) -3692799971403225363LL)))));
    var_20 = ((/* implicit */_Bool) (unsigned short)65535);
    var_21 += ((/* implicit */unsigned short) (((!(((((/* implicit */int) var_8)) > (((/* implicit */int) (signed char)-100)))))) ? ((-((~(((/* implicit */int) var_16)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)70)), (var_9)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)63181)))) : (((/* implicit */int) var_8))))));
}
