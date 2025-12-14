/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98445
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
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)55925)) + (var_0))))));
    var_21 -= ((/* implicit */unsigned int) var_13);
    var_22 = ((/* implicit */signed char) ((((/* implicit */int) var_14)) == (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((-1713476736) + (1713476746)))))) && (((/* implicit */_Bool) 1713476716))));
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_4 [i_1])) | (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) && (((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0]))))))) - (((/* implicit */int) arr_2 [i_1] [i_0 + 2])))))));
                var_25 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_4 [i_0])) * (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) < (((/* implicit */int) arr_3 [i_0] [(unsigned short)11] [i_1]))))))) - (((((((/* implicit */int) arr_0 [i_1])) >> (((arr_1 [i_0] [i_0]) - (6258235763562924799ULL))))) & (((((/* implicit */int) arr_0 [i_0])) >> (((arr_1 [(signed char)13] [i_1]) - (6258235763562924800ULL)))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) ((var_4) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) > (((var_4) & (((/* implicit */long long int) ((/* implicit */int) var_5)))))))))));
}
