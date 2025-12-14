/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80353
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
    var_14 &= ((/* implicit */unsigned long long int) (((-(((/* implicit */int) ((((/* implicit */_Bool) 9512881266246120198ULL)) || (((/* implicit */_Bool) (unsigned short)6812))))))) + (((/* implicit */int) ((unsigned short) min((8575988270325390694ULL), (8388607ULL)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) (((-(2447671875165676307ULL))) > (min((var_6), (var_6)))))) > (((/* implicit */int) max((arr_7 [i_1 - 1] [i_0]), (arr_7 [i_1 + 1] [i_0])))))))));
                    arr_8 [i_2] [i_0] [(unsigned short)6] [i_2] &= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) & (((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */unsigned long long int) var_2)) : (18446744073701162991ULL))))) < (arr_5 [i_0])));
                }
            } 
        } 
    } 
}
