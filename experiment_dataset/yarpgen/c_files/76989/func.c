/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76989
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
    var_18 = ((/* implicit */unsigned long long int) (short)2668);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) (short)2668)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23530))) : (3711579847898796362ULL))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) max((min((arr_0 [i_0]), (((/* implicit */int) (unsigned short)60783)))), ((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))))));
    }
    for (unsigned int i_1 = 2; i_1 < 13; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */int) var_0)) == (((/* implicit */int) (unsigned short)60783))));
        arr_7 [i_1] = ((/* implicit */unsigned char) (unsigned short)36011);
    }
    var_20 = ((/* implicit */unsigned long long int) var_2);
}
