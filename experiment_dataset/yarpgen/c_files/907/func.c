/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/907
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
    var_11 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 428102347)) && (((/* implicit */_Bool) var_10)))) ? (((/* implicit */long long int) ((var_0) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))) : (((var_0) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_5))))))));
    var_12 = var_3;
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((min((var_4), (((/* implicit */unsigned long long int) arr_4 [i_0 + 1] [i_0 - 1] [i_0 + 2])))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1137387012U)) ? (0) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 1284776408U)) != (5ULL))))))));
                arr_6 [i_0] |= ((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)67)), ((unsigned short)3)));
                var_13 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(10203302056273702624ULL)))) || (((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_1] [i_1])) || (((/* implicit */_Bool) var_5))))));
            }
        } 
    } 
}
