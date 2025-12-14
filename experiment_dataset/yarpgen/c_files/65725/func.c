/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65725
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
    var_17 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) var_2)), (min((((/* implicit */unsigned long long int) (short)24836)), (18446744073709551615ULL))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)10)) : (((/* implicit */int) (unsigned short)10)))))));
                    arr_6 [(unsigned short)11] = ((((/* implicit */_Bool) (unsigned short)14)) || (((/* implicit */_Bool) -771314580)));
                    arr_7 [i_0] [i_0] = (+(((/* implicit */int) (_Bool)0)));
                }
                arr_8 [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)11002))));
            }
        } 
    } 
}
