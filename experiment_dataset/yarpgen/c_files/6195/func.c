/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6195
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
    var_13 *= ((/* implicit */unsigned short) var_7);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_6 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((var_10) | (((int) (unsigned short)55647))));
                    arr_7 [i_2] [i_2 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_0] [i_0] [14LL] [i_0])) >> (((((((/* implicit */_Bool) 17538675443427721897ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) - (18446744073709551595ULL)))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */int) (~(var_3)));
        var_14 += ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [3ULL] [3ULL]))))) ? (6ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
        arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 1) 
    {
        arr_13 [i_3] [i_3] = min((((((/* implicit */_Bool) ((signed char) (unsigned short)65533))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [i_3]))) : (arr_12 [i_3 - 1] [i_3 - 2]))), (((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) arr_11 [i_3] [i_3])), (1102584606111408248LL)))))));
        var_15 += ((/* implicit */short) min((min((17538675443427721883ULL), (((/* implicit */unsigned long long int) (unsigned short)58607)))), (((/* implicit */unsigned long long int) arr_5 [i_3 - 2] [i_3 - 1] [i_3 - 2] [(unsigned char)6]))));
        var_16 = ((/* implicit */int) max((var_16), ((~(((/* implicit */int) (_Bool)1))))));
        var_17 = ((/* implicit */unsigned char) min((((/* implicit */int) min((arr_11 [i_3 - 1] [i_3]), (((/* implicit */short) (!(((/* implicit */_Bool) var_9)))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_3] [i_3]))))) ? (((int) 1ULL)) : (((/* implicit */int) max(((unsigned short)14598), (arr_2 [i_3] [i_3]))))))));
        var_18 += ((/* implicit */short) (-(((((/* implicit */_Bool) (~(794950121U)))) ? (arr_10 [i_3]) : (((((/* implicit */_Bool) arr_1 [i_3 - 2])) ? (((/* implicit */int) arr_1 [i_3 - 1])) : (((/* implicit */int) (unsigned char)7))))))));
    }
}
