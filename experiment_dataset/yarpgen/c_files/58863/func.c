/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58863
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min(((short)-1), ((short)0)))) || (((/* implicit */_Bool) min(((short)0), (((/* implicit */short) (signed char)-89))))))) ? (max((140737488355327LL), (((/* implicit */long long int) min(((unsigned short)28333), (((/* implicit */unsigned short) (short)-1))))))) : (((/* implicit */long long int) ((/* implicit */int) (short)32767)))));
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_1 [i_0] [i_1]))));
                var_17 = ((/* implicit */signed char) min((arr_1 [i_1 - 1] [i_1 + 1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)-1)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_5 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2])))))) ? (arr_5 [i_2]) : (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))) : (arr_5 [i_2])))));
        var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) (short)-1))));
        arr_8 [i_2] = ((/* implicit */unsigned int) arr_6 [i_2]);
    }
}
