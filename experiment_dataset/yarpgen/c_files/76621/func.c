/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76621
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
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((signed char) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3)))) * (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))))))));
    var_20 = (((~(((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) ((short) var_14))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        arr_3 [0] |= ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775801LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775800LL)))) ? (((((/* implicit */int) var_3)) * (var_12))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) var_16))))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) < (2135673056U))))));
        var_21 -= ((/* implicit */short) -9223372036854775798LL);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                {
                    var_22 = min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_6 [i_2] [i_0] [i_2])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((var_13) - (4726395763754521381ULL))))))))));
                    arr_9 [i_0] [5LL] [i_2] [i_1] = ((/* implicit */short) arr_5 [i_0]);
                    var_23 = ((/* implicit */signed char) (((~(var_0))) >= (max((((/* implicit */unsigned long long int) 9223372036854775784LL)), (1704588422587083945ULL)))));
                    var_24 = ((/* implicit */signed char) (~(((((/* implicit */int) ((unsigned short) 1289380139980157134ULL))) & ((~(((/* implicit */int) arr_7 [i_0 + 2] [i_0 - 1] [i_1] [i_2]))))))));
                }
            } 
        } 
    }
}
