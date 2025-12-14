/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80815
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)8506)) : (1784452525)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (9048655358453718714ULL))))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)8485)))))));
        arr_2 [7ULL] [(unsigned short)0] = ((/* implicit */signed char) arr_0 [(_Bool)1]);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) (signed char)-88)))));
        var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (~(-1599302626))))));
        var_24 = ((/* implicit */unsigned int) (unsigned short)51990);
    }
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_19)))) <= (((/* implicit */int) ((signed char) (short)-2))))))));
}
