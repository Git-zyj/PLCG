/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60701
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        arr_2 [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_0]))));
    }
    for (unsigned int i_1 = 4; i_1 < 7; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) -461763017))) ? ((-(1574206404U))) : (2720760914U)))) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)10737)))))));
        var_21 = ((/* implicit */signed char) min((((/* implicit */int) (!((!(((/* implicit */_Bool) 1574206404U))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */long long int) 2720760891U)) : (-5482712667242258070LL)))) ? ((~(((/* implicit */int) (signed char)13)))) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)43579))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        var_22 = ((/* implicit */unsigned char) (!(arr_8 [i_2])));
        var_23 = ((/* implicit */_Bool) 1529444545U);
    }
    var_24 = ((/* implicit */signed char) min(((+(var_18))), (((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_9)), (1574206375U)))) >= (((((/* implicit */_Bool) var_1)) ? (18446744073709551597ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235))))))))));
}
