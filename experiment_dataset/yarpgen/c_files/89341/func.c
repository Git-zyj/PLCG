/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89341
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */signed char) (~(((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)155))) <= (255810732996962628LL))) ? (16348708721186965301ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1])))))));
                arr_6 [i_0] [i_0] &= ((/* implicit */unsigned int) ((arr_0 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_1] [8LL]), (((/* implicit */unsigned char) ((((/* implicit */int) var_9)) != (((/* implicit */int) arr_5 [i_0] [(unsigned short)6])))))))))));
            }
        } 
    } 
    var_11 = (~(((/* implicit */int) var_9)));
    var_12 = ((/* implicit */unsigned short) 2098035352522586339ULL);
    var_13 = ((/* implicit */unsigned long long int) var_7);
}
