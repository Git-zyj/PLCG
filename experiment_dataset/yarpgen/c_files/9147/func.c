/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9147
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
    var_17 = ((/* implicit */long long int) var_4);
    var_18 = ((/* implicit */unsigned short) (-(min((((((((/* implicit */int) var_11)) + (2147483647))) << (((((-5730081656646840034LL) + (5730081656646840053LL))) - (19LL))))), (var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_19 = ((max((((((/* implicit */_Bool) 8646911284551352320ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (5U))), (((/* implicit */unsigned int) var_7)))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)896))));
                arr_7 [i_1] [i_0] [i_1] = ((/* implicit */signed char) (~(((((long long int) arr_6 [23] [i_1])) << (((max((((/* implicit */int) var_4)), (var_7))) - (90)))))));
                arr_8 [i_1] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) - (((((/* implicit */_Bool) -7235134425251716777LL)) ? (-4329064733332358418LL) : (7235134425251716798LL))))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) - (((/* implicit */int) arr_6 [i_0] [i_1]))))))))));
                arr_9 [i_1] = ((/* implicit */signed char) (unsigned short)15387);
            }
        } 
    } 
}
