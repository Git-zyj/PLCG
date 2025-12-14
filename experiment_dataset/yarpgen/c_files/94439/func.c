/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94439
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((arr_0 [(signed char)9] [(signed char)9]) && (((/* implicit */_Bool) 9223372036854775807LL)))) ? (((((/* implicit */_Bool) var_11)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : ((~(arr_1 [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1696093949)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-4))) : (var_11)));
        var_18 = ((/* implicit */unsigned short) 4290842036326048784ULL);
        var_19 = ((/* implicit */unsigned long long int) ((unsigned short) var_7));
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 = ((((/* implicit */_Bool) 14155902037383502804ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_1 [i_2]))))) : (((/* implicit */int) arr_0 [i_1] [i_2])));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 + 1] [i_1 - 1])))))));
                            var_22 = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [14ULL] [i_0] [5ULL] [i_3])))) | (((/* implicit */int) ((signed char) var_6)))));
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((unsigned long long int) arr_10 [i_1 - 2] [i_1 - 1]))));
                            arr_16 [i_0] [i_0] [i_0] [i_1 - 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1 - 2])) ? (arr_14 [i_0] [i_0] [i_0] [i_1 + 2] [i_2] [i_1]) : ((-(((/* implicit */int) arr_0 [i_0] [i_0]))))));
                            arr_17 [i_4] [i_2] [i_2] [i_2] [(signed char)18] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1 + 2] [i_1 + 2] [i_3])) ? (((/* implicit */int) arr_7 [i_1 + 2] [i_1 + 2] [i_4])) : (((/* implicit */int) arr_7 [i_1 + 2] [i_1 + 2] [i_1 + 2]))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            var_24 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_4 [i_2] [i_2] [i_2])) : (4194176ULL))))));
                            arr_20 [i_0] [i_0] [i_0] [(unsigned char)9] [i_5] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (short)31866)) & (-1696093949)));
                            arr_21 [i_0] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)15890)) ? (((/* implicit */unsigned long long int) arr_4 [i_1 + 1] [i_1 - 2] [i_1 - 1])) : ((((_Bool)1) ? (arr_12 [i_0] [i_0] [i_2] [i_2] [i_5] [i_5] [(short)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (int i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
    {
        var_25 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_6])) ? (((/* implicit */int) arr_11 [i_6])) : (((/* implicit */int) arr_11 [i_6]))))) ? (((long long int) 1474162519902159641ULL)) : (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_6])) >> (((((/* implicit */int) arr_11 [i_6])) - (57957))))))));
        var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-4)), (4294967292U)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_8))))) - (((arr_8 [i_6] [i_6]) / (((/* implicit */unsigned long long int) arr_19 [i_6] [(unsigned char)12] [i_6] [i_6] [i_6] [i_6]))))));
        var_27 = ((/* implicit */long long int) ((-1771886192) & (((/* implicit */int) max((arr_11 [i_6]), (arr_11 [i_6]))))));
    }
    var_28 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (signed char)4)) ? (18446744073705357437ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23070))))));
}
