/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94626
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((arr_5 [i_0] [(short)8] [i_2] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_0))))) : (((/* implicit */int) (unsigned short)10503)))))));
                    arr_8 [i_1] [(short)3] [(unsigned short)3] = ((/* implicit */short) (+(max((((((/* implicit */int) (short)(-32767 - 1))) / (((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) arr_0 [i_0 - 1]))))));
                    arr_9 [i_0] [i_1] [(short)5] = ((/* implicit */short) ((((/* implicit */int) var_5)) - (((((/* implicit */int) (unsigned short)55032)) >> (((((/* implicit */int) arr_3 [i_0 - 2])) - (19286)))))));
                    var_14 = ((/* implicit */unsigned long long int) var_5);
                    var_15 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_1])) ? (((((/* implicit */_Bool) (unsigned short)63448)) ? (((/* implicit */int) (unsigned short)55032)) : (((/* implicit */int) (short)32767)))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (6309845400794586029ULL)))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (short)32767)))) : (((((/* implicit */_Bool) 18330371151087538414ULL)) ? (((/* implicit */int) arr_0 [(short)5])) : (((/* implicit */int) (unsigned short)30994))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) min(((unsigned short)55032), (((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned short)65535)))) > (((/* implicit */int) var_12)))))));
}
