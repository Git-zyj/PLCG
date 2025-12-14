/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87755
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
    var_12 = ((/* implicit */_Bool) 18446744073709551615ULL);
    var_13 = ((/* implicit */unsigned short) (!((!(((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) 3501069263U))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(960U)))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) (short)25052)) | (((/* implicit */int) (_Bool)1))))));
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (-(((/* implicit */int) (short)-25047)))))));
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_3 [i_0])))) > (((((/* implicit */_Bool) (short)32767)) ? (arr_3 [i_1 + 1]) : (((/* implicit */long long int) 2147483647))))));
                arr_6 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (~(arr_5 [i_1 - 1] [i_1 + 2] [i_1 + 1])))) && (((/* implicit */_Bool) ((int) arr_4 [i_0]))));
                var_17 = ((/* implicit */int) arr_0 [i_0]);
            }
        } 
    } 
}
