/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67938
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_2])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_0])) : (((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)39))))))) ? (max((((/* implicit */unsigned long long int) min((arr_4 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */signed char) arr_6 [(unsigned short)3] [i_2] [i_2]))))), (max((((/* implicit */unsigned long long int) (unsigned short)56105)), (arr_5 [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)53))) : (var_7)))))))));
                    var_13 |= ((/* implicit */short) max((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_0 [i_1]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)44590)))))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((unsigned long long int) (short)14375))))) ? (((((/* implicit */unsigned long long int) (+(528870401680911339LL)))) + (8074826729479477752ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        var_14 += ((/* implicit */_Bool) (-(arr_10 [i_3])));
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((arr_10 [20LL]) >> (((arr_10 [i_3]) - (2724457745699468205LL))))))));
    }
    for (unsigned int i_4 = 2; i_4 < 17; i_4 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_8 = 0; i_8 < 18; i_8 += 4) 
                        {
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_9 [i_4 + 1]) : (arr_9 [i_4 + 1])))) ? (((((/* implicit */_Bool) -3205538566694034023LL)) ? (((var_7) & (arr_20 [i_4] [i_5] [i_5]))) : (min((((/* implicit */long long int) var_8)), (arr_20 [i_4] [i_7] [i_4]))))) : (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_22 [i_4 - 2] [i_4] [i_4] [i_4]))))))))));
                            var_17 = ((/* implicit */int) min(((((_Bool)0) ? (((/* implicit */unsigned long long int) arr_18 [i_4] [i_4] [i_4 - 1] [i_8])) : (8074826729479477752ULL))), (((/* implicit */unsigned long long int) -9223372036854775797LL))));
                        }
                        for (unsigned short i_9 = 3; i_9 < 17; i_9 += 4) 
                        {
                            var_18 = ((((/* implicit */_Bool) 3818834103728783990LL)) ? ((~(-3205538566694034023LL))) : (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 2949946312464874898LL)))))));
                            arr_26 [i_4] [i_5] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_3))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_4 - 1] [i_4 - 1] [i_6] [(unsigned short)17]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 131072)), (var_2)))))))));
                        }
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) 9223372036854775779LL))));
                    }
                } 
            } 
        } 
        arr_27 [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-39))));
    }
    var_20 &= ((/* implicit */unsigned long long int) var_9);
}
