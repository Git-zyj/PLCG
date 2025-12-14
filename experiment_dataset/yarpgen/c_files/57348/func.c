/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57348
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
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_9 [(unsigned char)12] [i_1 - 1] [i_1 - 1] [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [i_2]);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (2676736435U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11864)))));
    var_16 = ((/* implicit */short) ((signed char) max((((/* implicit */long long int) min(((signed char)92), (((/* implicit */signed char) var_5))))), (((var_4) ? (var_6) : (674706919829462274LL))))));
    var_17 += ((/* implicit */signed char) var_11);
    var_18 = ((/* implicit */unsigned int) ((var_11) ? (((/* implicit */long long int) (~((~(((/* implicit */int) (_Bool)1))))))) : (min((min((((/* implicit */long long int) (_Bool)1)), (var_1))), (((/* implicit */long long int) var_5))))));
}
