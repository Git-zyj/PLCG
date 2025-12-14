/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89878
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
    var_15 &= ((/* implicit */int) (unsigned char)128);
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((-1376714883934636104LL) == (((/* implicit */long long int) 3186067200U)))) ? ((-(((((/* implicit */long long int) var_14)) | (1147661676681025185LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)26462)))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) && (((/* implicit */_Bool) -1376714883934636096LL)))));
                var_18 = ((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))));
                arr_5 [i_1] [7LL] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) 3521040710U)))));
            }
        } 
    } 
    var_19 = (!(((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) (-(((/* implicit */int) var_0)))))))));
}
