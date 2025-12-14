/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65835
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) 8059252488902186351LL);
        arr_4 [i_0] = ((/* implicit */short) (_Bool)1);
        arr_5 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_14 |= ((/* implicit */unsigned int) ((signed char) arr_6 [13U] [i_1]));
        var_15 = ((/* implicit */signed char) (+(469842354U)));
    }
    for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)127)) ? (((((/* implicit */_Bool) (-(3825124941U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-8059252488902186351LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_2] [2U])) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_1)) / (((/* implicit */int) arr_6 [i_2] [17ULL])))))))));
        var_16 = ((/* implicit */unsigned int) arr_10 [i_2]);
        arr_13 [(short)8] [(unsigned short)4] |= ((/* implicit */unsigned char) ((short) max((arr_6 [i_2] [i_2]), (((/* implicit */unsigned char) ((3825124943U) == (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
        var_17 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_1 [i_2]))))));
        arr_14 [i_2] = var_12;
    }
    var_18 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */long long int) (unsigned char)19)), (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_0))))))));
    var_19 = ((/* implicit */_Bool) var_13);
}
