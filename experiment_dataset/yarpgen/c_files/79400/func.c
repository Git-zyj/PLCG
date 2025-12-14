/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79400
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))) ? (((((/* implicit */_Bool) var_6)) ? (-1) : (min((-213852859), (1623653402))))) : ((-(((/* implicit */int) ((short) (unsigned char)172)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-793)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_8))))) : (max((min((((/* implicit */unsigned int) var_0)), (arr_2 [i_2]))), (((/* implicit */unsigned int) (short)8617))))));
                    var_16 = ((/* implicit */long long int) arr_3 [8]);
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (-(9524384375598454545ULL))))));
                }
            } 
        } 
    } 
}
