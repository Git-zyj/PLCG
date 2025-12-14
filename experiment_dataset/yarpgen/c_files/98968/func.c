/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98968
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
    var_18 = ((/* implicit */unsigned char) -1879972760);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15893))) : (var_11)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) || ((_Bool)1)))) : (((/* implicit */int) ((var_10) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42079))))))))), (((((/* implicit */_Bool) var_10)) ? (var_6) : (max((((/* implicit */unsigned int) arr_2 [i_0] [i_1])), (var_0)))))));
                arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_0 [i_0] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) arr_4 [i_0] [i_1 + 3])))) : (((/* implicit */int) max(((unsigned short)21798), ((unsigned short)42079))))))) : (((((/* implicit */_Bool) arr_0 [i_1] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))) : (arr_0 [i_1] [i_1 - 1])))));
            }
        } 
    } 
}
