/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66212
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_12 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) 1351101176U)) || (((/* implicit */_Bool) -4503599627370496LL)))))));
        var_13 = ((/* implicit */long long int) max(((~(((((/* implicit */_Bool) arr_1 [i_0])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6610))))))), (((/* implicit */unsigned long long int) ((unsigned short) max((var_3), (arr_1 [i_0])))))));
        var_14 = ((/* implicit */unsigned char) (+(-4933809362634486658LL)));
        arr_3 [i_0] = ((/* implicit */unsigned short) -4933809362634486681LL);
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_16 += ((/* implicit */unsigned char) arr_5 [i_1]);
        arr_6 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(-4933809362634486681LL))))));
    }
    var_17 = ((_Bool) (_Bool)1);
    var_18 = ((/* implicit */long long int) var_8);
}
