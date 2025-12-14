/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69407
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
    var_17 = ((/* implicit */long long int) var_0);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_4 [(_Bool)1] [i_1] = (unsigned char)59;
                arr_5 [i_0] [(unsigned short)3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_0 [(unsigned char)11]), (arr_0 [i_0])))) || (((((/* implicit */_Bool) min((arr_3 [i_0]), (((/* implicit */unsigned short) (unsigned char)14))))) || (((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned short) var_13)))))))));
            }
        } 
    } 
}
