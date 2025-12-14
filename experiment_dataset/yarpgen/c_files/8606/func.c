/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8606
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
    var_13 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */long long int) (~(((max((var_2), (((/* implicit */unsigned long long int) var_1)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)12287)))))))));
                arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (unsigned short)12772)))))) < (var_8)));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)64))), (((((/* implicit */_Bool) (short)11844)) ? (((/* implicit */unsigned long long int) -4912658042063879097LL)) : (10551997669681980006ULL))))), ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43790))) & (504ULL)))))));
}
