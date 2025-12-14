/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61760
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned int) (~(((((_Bool) (unsigned short)46718)) ? (min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])), (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_4 [i_0])), (var_5))))))));
                arr_5 [(_Bool)1] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (~(arr_0 [i_1] [i_0])))) ? (arr_4 [(_Bool)1]) : (1242071462U))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_6)) | (var_13)))) ? (((/* implicit */int) (short)3895)) : (((/* implicit */int) (unsigned short)17023))))) : (min((((/* implicit */long long int) (signed char)-14)), (326398407557155913LL)))));
    var_21 = var_14;
}
