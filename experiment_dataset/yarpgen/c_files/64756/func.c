/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64756
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
    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (var_9))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_7 [i_2]) - (arr_7 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_1]))) : (953212858U)));
                    var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))));
                    var_17 = ((/* implicit */long long int) var_5);
                    arr_10 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 16301296427903750452ULL)) ? ((+(arr_7 [i_0]))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) 16301296427903750452ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_0])))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_5))));
                        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [12U] [(unsigned short)5] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(short)16]))) : (953212858U)))), (max((var_13), (((/* implicit */unsigned long long int) var_2)))))))));
                        var_20 -= ((/* implicit */unsigned char) ((((2145447645805801156ULL) - (12662089094339188444ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)37)) && (((/* implicit */_Bool) 2145447645805801155ULL))))) & (((/* implicit */int) arr_6 [i_0] [i_1] [i_3])))))));
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        var_21 = ((/* implicit */short) ((unsigned int) arr_12 [i_2] [i_2] [12LL] [(_Bool)1] [i_2] [i_2]));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)27864)) ? (12662089094339188441ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27878)))));
                        var_23 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(arr_1 [i_4] [i_1]))))) < (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_2] [i_4]))) / (3085347754083294471LL)))));
                        arr_18 [(unsigned char)4] [i_4] [i_1] [11U] [i_2] [(unsigned short)23] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0])) ? (arr_13 [i_0] [i_1] [i_1] [i_4]) : (arr_13 [i_0] [(_Bool)1] [(_Bool)1] [i_4])));
                        arr_19 [i_4] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) & (arr_5 [i_0] [i_2] [i_4])));
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_4))));
    var_25 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3085347754083294471LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)5223))) : (var_12)))), (max((var_7), (var_1))))), (((/* implicit */unsigned long long int) ((((6941234684824180945ULL) & (((/* implicit */unsigned long long int) var_3)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37672))))))));
}
