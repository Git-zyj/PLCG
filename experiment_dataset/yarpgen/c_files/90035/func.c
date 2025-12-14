/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90035
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
    var_11 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)251)))) : (((unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) (unsigned char)248))));
    var_12 += ((/* implicit */int) ((((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((var_0) - (((/* implicit */unsigned long long int) var_9)))))) << (min((((var_0) << (((((/* implicit */int) var_4)) - (2135))))), (((/* implicit */unsigned long long int) (!((_Bool)1))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */signed char) max(((~(arr_4 [i_1 - 1] [i_1 - 1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 - 1])))))));
                var_14 = ((/* implicit */_Bool) max((var_14), (arr_2 [i_1] [i_1 + 1])));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) 15285652341947504088ULL))) >> (((arr_3 [i_0] [i_0]) - (8903745302627855257LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((4294967278U), (((/* implicit */unsigned int) arr_2 [i_1 - 1] [i_1 - 1])))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))))) : ((-(arr_5 [i_2] [i_1 + 1] [i_1 - 1] [(short)1]))))))));
                    var_16 = ((/* implicit */_Bool) var_4);
                    arr_7 [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) (!(arr_6 [i_1] [i_1])));
                }
                var_17 += ((/* implicit */int) ((long long int) (+(((/* implicit */int) var_5)))));
            }
        } 
    } 
    var_18 = var_6;
}
