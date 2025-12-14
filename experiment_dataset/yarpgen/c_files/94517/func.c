/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94517
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
    var_14 = ((/* implicit */unsigned short) ((unsigned char) ((((((/* implicit */int) var_12)) - (((/* implicit */int) var_10)))) != (((((/* implicit */int) var_12)) >> (((-8880724432928128848LL) + (8880724432928128868LL))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)49152)) : (((/* implicit */int) (unsigned char)218))))) ? (((((/* implicit */_Bool) var_13)) ? (21ULL) : (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) min((var_6), (-9223372036854775792LL)))))), (((/* implicit */unsigned long long int) 2107033929U))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (arr_3 [i_1])))) && (((/* implicit */_Bool) ((unsigned short) 9223372036854775775LL)))));
                arr_8 [i_0] = ((/* implicit */int) arr_4 [i_0]);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((((unsigned long long int) (-(((/* implicit */int) var_10))))) ^ (((((/* implicit */unsigned long long int) var_7)) ^ (((4639393218149309631ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12)))))))));
}
