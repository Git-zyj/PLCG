/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85219
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
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((signed char) (short)-3811);
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
                        arr_12 [i_1] [i_3] = ((/* implicit */unsigned long long int) var_9);
                        arr_13 [i_3] = ((/* implicit */unsigned int) (((_Bool)1) ? (11233040409666703943ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)126)))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_8))) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_15)))))))));
}
