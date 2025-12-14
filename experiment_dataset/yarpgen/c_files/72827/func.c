/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72827
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((short) var_0))), (((unsigned int) arr_3 [i_0] [i_1]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_1]), (((/* implicit */signed char) var_18)))))) ^ (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) : (arr_2 [i_1] [10ULL]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 - 1])))))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 141863388262170624ULL)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_1]))))), (arr_4 [i_1 + 3] [i_1 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_0)))) : (((unsigned long long int) max((((/* implicit */unsigned long long int) var_1)), (10520939265048426082ULL))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 4) 
                {
                    var_21 -= ((/* implicit */short) (-(arr_4 [i_1 + 4] [i_1 - 2])));
                    var_22 = ((/* implicit */signed char) ((short) arr_1 [7U] [i_0]));
                }
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_2 [9ULL] [6U]) >> (((/* implicit */int) arr_7 [i_3] [i_1] [4U]))))) ? (((((/* implicit */_Bool) arr_5 [4ULL])) ? (arr_1 [10U] [(signed char)6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)577)))))));
                    var_24 = ((/* implicit */unsigned long long int) arr_7 [i_1 - 2] [i_1 - 2] [i_1 - 1]);
                    var_25 = ((/* implicit */signed char) ((unsigned long long int) var_2));
                    var_26 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) || (arr_7 [i_1] [i_1 + 1] [i_1])));
                }
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned int) var_13);
}
