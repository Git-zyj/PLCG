/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74089
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
    var_20 = (+((-((+(((/* implicit */int) (unsigned short)59035)))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [i_0 + 2] = ((/* implicit */int) (!(((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned short)6501)))))))));
                var_21 = ((/* implicit */signed char) arr_1 [i_0 - 4]);
                arr_5 [i_0 + 1] [9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-110)) % (((/* implicit */int) arr_3 [i_0 + 1]))))), (max((arr_0 [(unsigned char)11] [i_1]), (arr_0 [(_Bool)1] [(unsigned char)5]))))))));
            }
        } 
    } 
}
