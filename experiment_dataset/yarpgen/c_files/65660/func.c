/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65660
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 3; i_2 < 21; i_2 += 1) 
                {
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */signed char) var_6)), (var_2)))) ^ ((+(((/* implicit */int) var_7))))));
                    arr_11 [i_0] [8U] [i_2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) >> (((/* implicit */int) arr_8 [i_2] [0] [i_2 + 1]))))) ? (((((/* implicit */int) var_5)) >> (((/* implicit */int) arr_3 [i_2] [4U] [i_2 + 1])))) : (((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-109))))));
                    var_18 ^= ((/* implicit */_Bool) var_4);
                    var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */int) (unsigned short)13213)) : (((/* implicit */int) (_Bool)1))));
                    var_20 |= ((((((/* implicit */_Bool) var_4)) ? (max((var_8), (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [(unsigned char)8] [i_2 + 2] [(unsigned char)8]))))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 3; i_3 < 23; i_3 += 3) 
                {
                    var_21 = ((/* implicit */unsigned char) arr_9 [i_0] [i_1] [i_3] [(unsigned short)21]);
                    var_22 = ((/* implicit */int) (!((_Bool)1)));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))) && (((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))))));
                }
                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) max((((/* implicit */unsigned int) -2111508198)), (1993976325U))))));
                var_25 = ((/* implicit */_Bool) var_3);
                arr_14 [18LL] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_9 [i_0] [(unsigned short)12] [i_1] [i_1])), (((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) max((var_16), (var_1)))) : (((/* implicit */int) var_4))));
                arr_15 [i_0] [i_1] [i_1] = ((/* implicit */long long int) min((min((arr_13 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) var_13)))), (arr_13 [i_0] [i_1] [i_0] [i_1])));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7)))))));
    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) (_Bool)0))))) ^ (((/* implicit */int) var_0))))));
}
