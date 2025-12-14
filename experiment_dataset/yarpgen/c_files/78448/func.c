/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78448
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
    var_16 = ((/* implicit */unsigned char) min((max(((~(0ULL))), (var_11))), (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */unsigned long long int) var_12)) ^ (10194881367082819168ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_11))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_4)) ^ (((/* implicit */int) (unsigned short)14336))))))), (min((1333297323477008272ULL), (var_11)))));
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((unsigned long long int) ((arr_0 [i_1] [i_1 - 1]) > (arr_0 [i_1] [i_1 - 1])))))));
            }
        } 
    } 
}
