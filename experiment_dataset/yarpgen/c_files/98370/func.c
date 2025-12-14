/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98370
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_4))) != (var_3))) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : ((+(-912324340338991191LL)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((_Bool) min(((unsigned short)2615), (var_4)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (arr_3 [i_0] [(_Bool)1] [i_0]))))))) % ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-10472))) : (5061194182409392742LL))))))));
                arr_4 [i_1] [i_0] = ((unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */long long int) ((var_2) << (((((/* implicit */int) var_14)) - (17913)))))) : (max((((/* implicit */long long int) var_0)), (arr_1 [(_Bool)1] [i_1])))));
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) min((((long long int) arr_3 [i_0] [i_0] [8LL])), (max((((/* implicit */long long int) (~(((/* implicit */int) (signed char)56))))), (912324340338991190LL))))))));
            }
        } 
    } 
}
