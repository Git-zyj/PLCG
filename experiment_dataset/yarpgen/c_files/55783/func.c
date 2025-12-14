/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55783
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
    var_20 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))));
    var_21 |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_4))))), ((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 1648395780U)) : (17251579573835381911ULL)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_2 [i_0])) ? (((1648395780U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))));
                    arr_9 [i_0] [i_0 - 1] [i_0] = ((/* implicit */signed char) (+(min((var_8), (var_14)))));
                    var_22 ^= ((signed char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))), (max((((/* implicit */unsigned long long int) var_5)), (2147483647ULL)))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) max((4194303), (((/* implicit */int) (unsigned short)60073))))) : (((((/* implicit */_Bool) (unsigned char)29)) ? (16360386753123751965ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5463)))))))))))));
    var_24 = ((/* implicit */_Bool) var_9);
}
