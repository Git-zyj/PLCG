/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89164
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
    var_11 = ((/* implicit */unsigned int) var_2);
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) (short)0))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_13 &= max(((~(((((/* implicit */int) (short)-26204)) / (((/* implicit */int) arr_0 [i_0])))))), ((~((-(arr_3 [i_1] [i_0] [(_Bool)1]))))));
                arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (-51238718580899412LL) : (((/* implicit */long long int) 469762048U))))) || (((/* implicit */_Bool) arr_0 [i_0 + 2]))));
                var_14 = ((/* implicit */signed char) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_5))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((short) var_5));
}
