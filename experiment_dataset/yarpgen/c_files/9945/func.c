/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9945
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
    var_11 = ((/* implicit */signed char) ((int) var_0));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [(short)12] = ((/* implicit */int) max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65511))))), (arr_3 [i_0])));
                arr_7 [i_0] [12] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) arr_0 [i_1])) | (3374272121518692603ULL))) << (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (signed char)-53))) || (((arr_2 [i_0]) == (18446744073709551615ULL))))))));
            }
        } 
    } 
}
