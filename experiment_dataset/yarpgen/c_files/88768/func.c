/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88768
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
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) min((((/* implicit */int) ((_Bool) ((6962717727041591954ULL) * (var_15))))), ((((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((8962268681494714594ULL) - (8962268681494714594ULL))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            {
                var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) / ((-(arr_1 [i_1 - 3])))));
                arr_4 [(unsigned short)7] = ((/* implicit */unsigned short) arr_3 [(unsigned short)6] [15] [(signed char)7]);
                arr_5 [i_1] [i_0] = ((/* implicit */_Bool) min((((17650107074984702076ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1 - 2] [i_0]))));
            }
        } 
    } 
}
