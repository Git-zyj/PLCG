/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73426
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
    var_12 = ((/* implicit */short) (!(var_8)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [16LL] [i_2] = max(((signed char)-51), (((/* implicit */signed char) ((((_Bool) (_Bool)0)) && (((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)51)), (4824276234171671645LL))))))));
                    var_13 = max((((/* implicit */short) (signed char)31)), ((short)-10670));
                    var_14 += ((/* implicit */unsigned long long int) ((int) (+(min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (var_7))))));
                }
            } 
        } 
    } 
}
