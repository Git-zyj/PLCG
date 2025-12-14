/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67009
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
    var_16 = ((/* implicit */_Bool) var_9);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) (short)867)), (((((/* implicit */_Bool) min((arr_2 [i_0] [i_0]), (var_12)))) ? (((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_1]))) : (((/* implicit */int) ((_Bool) var_11)))))));
                var_17 = ((_Bool) ((((/* implicit */int) var_8)) > (arr_2 [i_1 - 2] [i_1 + 3])));
                var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((arr_0 [i_0]), (((/* implicit */int) var_3)))) - (max((-1852250265), (-1852250261)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0])))) : ((-(arr_3 [i_1 + 4])))));
                arr_5 [i_0] &= ((/* implicit */unsigned long long int) arr_3 [i_0]);
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) min((((var_6) ? (max((((/* implicit */unsigned long long int) 1852250262)), (17121051893239457257ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (short)32754))))))), (((/* implicit */unsigned long long int) var_5))));
}
