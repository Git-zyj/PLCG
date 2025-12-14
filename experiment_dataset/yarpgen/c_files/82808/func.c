/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82808
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
    var_14 += ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
    var_15 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (!(var_7)))))) - (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 4881658097340449576LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_11))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_16 *= ((/* implicit */signed char) (~(((arr_1 [i_0]) + (((/* implicit */long long int) arr_2 [i_0]))))));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned char) (short)31547))) > (min((((/* implicit */int) var_0)), (arr_2 [i_0])))))))));
        var_18 ^= ((/* implicit */signed char) ((((arr_2 [i_0]) | (arr_2 [i_0]))) & (((arr_2 [i_0]) ^ (arr_2 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    var_19 += ((/* implicit */_Bool) ((((0LL) + (6232855053980007550LL))) + (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                    arr_8 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_0 [i_2 + 1] [i_2 + 1])))) + (min((((/* implicit */long long int) arr_2 [i_0])), (min((arr_1 [i_1]), (((/* implicit */long long int) var_3))))))));
                    var_20 = 2758226241323125861LL;
                }
            } 
        } 
    }
    var_21 = var_1;
}
