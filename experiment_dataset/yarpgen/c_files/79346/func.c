/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79346
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
    var_12 = ((((((/* implicit */_Bool) max((-1381744066), (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) (+(3501071367U)))))) ? (((/* implicit */int) var_10)) : ((+(var_0))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = 2342888880U;
                var_13 = ((/* implicit */int) min((var_13), (min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)247)), (2564048075U)))) ? ((-(((/* implicit */int) (unsigned short)11895)))) : (((((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) | (((/* implicit */int) (_Bool)1)))))), ((+(arr_1 [i_1 + 2] [i_1])))))));
                var_14 |= ((/* implicit */signed char) ((long long int) ((((/* implicit */int) arr_0 [i_1 + 2] [i_1 + 1])) & ((+((-2147483647 - 1)))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (2147483647) : (((/* implicit */int) arr_0 [i_0] [i_1]))))))), (max((min((((/* implicit */unsigned int) arr_3 [i_0] [i_1 + 2] [i_1 + 2])), (2268972992U))), (2268972988U)))));
                arr_6 [i_0] [i_0] = ((/* implicit */int) (unsigned char)113);
            }
        } 
    } 
}
