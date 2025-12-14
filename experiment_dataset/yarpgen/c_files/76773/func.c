/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76773
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
    var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((18U), (4041336006U))))))), (253631278U)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) != (((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0])) != (((/* implicit */int) arr_2 [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (signed char)124)))))));
    }
    var_18 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned char)250)), (36028797018931200ULL)));
}
