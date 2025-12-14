/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90915
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = (+(4294967295U));
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) var_10)), ((+(((((/* implicit */int) arr_1 [i_0])) << (((arr_0 [i_1] [10U]) - (293892012)))))))));
                arr_8 [i_0] [(unsigned short)5] [i_1] = ((/* implicit */_Bool) (((+(((((/* implicit */int) arr_1 [4])) | (((/* implicit */int) (unsigned char)15)))))) >> (((arr_0 [i_1] [6LL]) - (293891997)))));
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) var_1);
    var_13 = ((/* implicit */_Bool) max((max((((/* implicit */long long int) (unsigned short)35311)), (max((var_11), (((/* implicit */long long int) (unsigned short)40909)))))), (((/* implicit */long long int) var_1))));
}
