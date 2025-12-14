/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66904
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) (short)-14909)) : (2147483640))) + (2147483647))) << (((((-218633071) + (218633091))) - (20)))));
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((unsigned long long int) arr_1 [20U]))));
            var_17 = ((/* implicit */unsigned long long int) ((arr_5 [i_1] [i_1] [i_1]) + (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0])))))));
        }
        arr_8 [i_0] [i_0] = ((/* implicit */int) var_3);
    }
    var_18 -= ((/* implicit */int) ((4503599627370494ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)109)))));
}
