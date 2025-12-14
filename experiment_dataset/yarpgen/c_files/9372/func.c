/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9372
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) var_9)) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (2903397832U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_11)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                var_16 = ((_Bool) arr_3 [i_0]);
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (-((+((-(((/* implicit */int) var_10))))))));
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) max((max((18446744073709551609ULL), (((/* implicit */unsigned long long int) (unsigned short)0)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_1 - 2] [i_1 - 2])) % (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) ^ (((((/* implicit */_Bool) var_2)) ? (min((var_11), (var_7))) : (max((17583769189154322915ULL), (((/* implicit */unsigned long long int) (unsigned short)54670))))))));
}
