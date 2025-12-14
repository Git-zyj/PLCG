/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67848
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) (short)32767))));
    var_14 = var_6;
    var_15 = (((-(var_12))) - ((-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)202)) : (-833149201))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */int) (~(4294967280U)));
                var_17 = ((/* implicit */unsigned short) max((min((var_5), (((/* implicit */unsigned long long int) arr_3 [i_0])))), (((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_0 + 3]))));
                var_18 = ((/* implicit */unsigned long long int) arr_1 [i_0 - 1]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)53))));
}
