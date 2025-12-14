/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94085
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (~(-1285870405)))))) - ((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))) * (var_11))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 3])) ? (arr_5 [i_1] [i_1 + 3]) : (arr_5 [i_0] [i_1 + 3]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((short) arr_4 [i_0]))) : (((/* implicit */int) var_7))));
                    arr_12 [i_0] [i_0] [7ULL] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1 - 1])) % (((/* implicit */int) arr_1 [i_1 + 1]))));
                    arr_13 [(_Bool)1] [i_1] [1ULL] = ((/* implicit */unsigned short) ((arr_10 [i_1 + 1] [i_2 + 1]) ? (((/* implicit */int) arr_2 [i_1 - 1] [i_2 - 1] [i_1 - 1])) : (((/* implicit */int) arr_10 [i_1 - 2] [i_2 - 1]))));
                }
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_6);
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) (unsigned char)244))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */_Bool) 4294967288U)) || (((/* implicit */_Bool) (unsigned char)12)))))));
}
