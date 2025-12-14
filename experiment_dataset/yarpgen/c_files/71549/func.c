/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71549
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
    var_14 -= ((/* implicit */unsigned int) min(((unsigned short)11), ((unsigned short)29205)));
    var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) % (var_10)))) ? (((/* implicit */int) min((var_8), (var_12)))) : (((var_5) ? (var_0) : (((/* implicit */int) var_5))))))) || (((/* implicit */_Bool) max((((int) var_12)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    var_16 = ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [(unsigned short)1] [i_2 - 1])) ? (((/* implicit */long long int) arr_1 [i_0])) : (arr_4 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 1072693248U)))) : (arr_5 [i_1]));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        var_17 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_3] [i_3])) / (arr_0 [i_2] [i_3 + 3])))) ^ (((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_6 [i_0] [4U] [4U] [i_3 + 3]) : (arr_6 [i_3] [0ULL] [i_2] [i_2])))));
                        var_18 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((arr_9 [4] [4] [i_3]) | (((/* implicit */int) arr_3 [i_1] [i_1]))))) != (((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [(short)0])) : (arr_7 [i_0] [i_0] [i_0] [i_3 + 3])))));
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2 + 4] [i_0] [i_2 + 4] [i_3 + 1])) || (((/* implicit */_Bool) arr_4 [i_3 - 1]))));
                        arr_10 [i_0] = ((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_2 + 4]);
                    }
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((min((min((1133375986850536356LL), (((/* implicit */long long int) (_Bool)0)))), (((/* implicit */long long int) ((unsigned short) (unsigned short)36324))))) >= (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_4]))))))));
                        arr_13 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */int) arr_8 [i_0] [(unsigned char)9] [i_0] [i_4] [(unsigned char)9]))))) ? (arr_2 [i_1] [i_2 + 1] [i_4]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_5 [i_4]) : (arr_6 [i_0] [i_0] [i_2] [i_4]))))))) ? (((((/* implicit */_Bool) max((arr_9 [i_0] [i_2] [i_4]), (arr_11 [i_0])))) ? (((/* implicit */int) arr_8 [i_0] [i_4] [i_2 + 4] [i_2 + 4] [i_0])) : (arr_1 [i_0]))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 + 2] [i_0] [i_0] [i_0])) ? (arr_6 [(unsigned short)6] [i_0] [i_2 + 1] [i_2]) : (arr_5 [i_4])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_11 [(short)15])))))))));
                        var_21 -= max((((/* implicit */long long int) min((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_5 [16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4] [i_1] [i_1] [i_4]))))), (((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_1] [i_4]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 175690487U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11))) : (4110192689U)))) ? (((/* implicit */long long int) arr_5 [i_4])) : (((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4] [i_0])) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) arr_0 [i_1] [i_4])))))));
                    }
                    arr_14 [i_0] [i_1] [i_2 + 1] = ((/* implicit */int) arr_12 [i_0] [(unsigned char)16] [(unsigned char)16] [i_0]);
                    arr_15 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_12 [i_0] [i_0] [i_0] [i_0])), (arr_8 [i_0] [i_1] [i_1] [i_0] [i_2 + 4])))) ? (((/* implicit */int) arr_8 [i_0] [i_2 + 1] [i_2 + 3] [i_2 + 3] [i_2])) : (((((/* implicit */_Bool) arr_0 [2] [(unsigned short)14])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_0])) : (arr_0 [i_1] [i_1])))))) * (min((((/* implicit */long long int) min((arr_9 [i_0] [i_1] [i_1]), (((/* implicit */int) arr_12 [i_0] [i_0] [(unsigned short)2] [i_0]))))), (((((/* implicit */_Bool) 3983993035660747111LL)) ? (1151741459014561745LL) : (-6123373063940917870LL)))))));
                    arr_16 [i_0] [i_0] [i_1] = ((/* implicit */int) ((unsigned short) ((min((arr_6 [i_2] [i_0] [i_2] [i_0]), (((/* implicit */unsigned int) arr_3 [i_1] [i_2])))) * (((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_2])))));
                }
            } 
        } 
    } 
}
