/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87189
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
    var_18 = ((/* implicit */short) ((long long int) ((((/* implicit */int) ((short) var_13))) << (((var_7) - (5321234510014739325LL))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_19 = ((((long long int) arr_1 [i_0])) ^ (((/* implicit */long long int) ((/* implicit */int) ((short) var_4)))));
                    var_20 &= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_2)), (var_3)))) && (((((/* implicit */int) (unsigned short)56901)) != (-1)))))), (max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) var_3)) : (var_17))), (((/* implicit */long long int) 2147483647))))));
                    var_21 = var_15;
                }
            } 
        } 
    } 
    var_22 = var_14;
}
