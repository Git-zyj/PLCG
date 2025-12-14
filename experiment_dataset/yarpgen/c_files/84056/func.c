/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84056
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) min((var_0), (arr_0 [i_0] [i_0]))))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65519)) ? (((/* implicit */long long int) -2070322620)) : (-611527330192370924LL)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) arr_3 [i_1]);
        var_17 = (((~((~(var_1))))) / ((+(((/* implicit */int) var_5)))));
    }
    var_18 = ((/* implicit */unsigned short) (-(var_6)));
}
