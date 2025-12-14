/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81847
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
    var_13 = ((/* implicit */unsigned long long int) ((var_4) < (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 268435455)), (13623104764266413092ULL)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_4)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) 4823639309443138525ULL);
        var_15 = ((_Bool) 6074469322965881447LL);
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) 4823639309443138511ULL))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */int) 4823639309443138523ULL);
            var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) var_6)))))));
            var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((4823639309443138523ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))))))));
        }
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
        {
            arr_9 [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(13623104764266413127ULL)))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (((/* implicit */int) (short)-32762)) : (((/* implicit */int) arr_3 [i_0] [i_2])))) : (((/* implicit */int) ((arr_0 [i_0] [i_0]) < (13623104764266413104ULL))))));
            arr_10 [i_0] [i_2] = ((/* implicit */signed char) min(((~(((var_8) << (((13623104764266413092ULL) - (13623104764266413055ULL))))))), (((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_2]) ? (((/* implicit */int) arr_6 [i_0] [i_2])) : (((/* implicit */int) arr_7 [i_0])))))));
            var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_7 [i_0]))));
            arr_11 [i_0] [i_0] = ((arr_4 [i_2]) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((4823639309443138523ULL), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */int) max((((/* implicit */short) var_6)), ((short)-29899)))) : ((+(((/* implicit */int) var_10))))))));
        }
    }
    var_21 = ((/* implicit */short) 4823639309443138493ULL);
    var_22 = var_9;
}
