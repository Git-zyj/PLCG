/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83708
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
    /* LoopSeq 4 */
    for (int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) max((arr_1 [i_0] [i_0 - 3]), ((unsigned short)65520)))) : (((/* implicit */int) ((((/* implicit */_Bool) 8642149605343729559LL)) || (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0]))) > (-8642149605343729575LL)))))))))));
        arr_2 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 - 1])) | (((/* implicit */int) arr_1 [i_0] [(unsigned short)13]))))) ^ (max((((/* implicit */unsigned long long int) arr_1 [(short)10] [2ULL])), (var_4)))))) ? (((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (arr_1 [i_0] [i_0])))), (((((/* implicit */int) arr_1 [i_0] [i_0])) >> (((((/* implicit */int) arr_0 [i_0])) - (79)))))))) : (max((max((((/* implicit */long long int) var_3)), (-8642149605343729572LL))), (((/* implicit */long long int) arr_1 [i_0] [i_0 + 1]))))));
    }
    for (int i_1 = 1; i_1 < 7; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 1; i_2 < 8; i_2 += 3) 
        {
            arr_10 [i_1] &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_10))))) ? (((unsigned int) var_6)) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_9 [6LL] [i_2 + 1])) + (34)))))))) | (((unsigned int) (unsigned short)65535))));
            arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) var_15);
        }
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            var_17 += ((/* implicit */unsigned short) 3629161159U);
            arr_15 [i_3] = ((/* implicit */signed char) 8642149605343729559LL);
            arr_16 [i_3] = arr_3 [i_1];
        }
        /* vectorizable */
        for (unsigned int i_4 = 1; i_4 < 6; i_4 += 3) 
        {
            arr_19 [i_1] [i_1 - 1] [i_1] = ((/* implicit */short) arr_14 [2ULL]);
            var_18 += ((/* implicit */long long int) ((((/* implicit */_Bool) 2130706432)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6144))) : (4ULL)));
            var_19 = ((/* implicit */unsigned int) ((_Bool) 18446744073709551615ULL));
        }
        var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1] [(signed char)10])) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_18 [8U] [i_1 + 1])) / (1442951912300261204ULL)))) ? (((((/* implicit */_Bool) -8642149605343729575LL)) ? (arr_8 [i_1 + 2] [i_1 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)82))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (var_2)))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1]))))))))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 7; i_5 += 3) /* same iter space */
    {
        arr_23 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5 + 1] [i_5 - 1]))) % (2364058328U)));
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            var_21 ^= ((/* implicit */unsigned short) ((arr_5 [i_5] [i_6]) << (((arr_5 [i_6] [i_5]) - (2104169592)))));
            arr_28 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [(unsigned short)1] [i_5 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5] [i_5]))) == (arr_25 [i_5]))))) : (((((/* implicit */_Bool) 17003792161409290399ULL)) ? (arr_12 [(signed char)3] [(signed char)3]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
        }
    }
    for (int i_7 = 1; i_7 < 7; i_7 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_0 [i_7 + 2])))) * (((((/* implicit */_Bool) ((unsigned short) var_14))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-5))))) : (((/* implicit */int) ((0U) == (((/* implicit */unsigned int) arr_27 [(unsigned short)4]))))))))))));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 10; i_8 += 4) 
        {
            for (unsigned short i_9 = 3; i_9 < 9; i_9 += 2) 
            {
                for (short i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    {
                        var_23 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (~(((((/* implicit */int) var_10)) + (4194303))))))));
                        arr_42 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (~(min((arr_40 [(_Bool)1] [i_9 + 1] [i_8] [i_7 + 2]), (arr_5 [i_10] [(signed char)7])))))) ? (((((/* implicit */_Bool) ((8642149605343729571LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)58)))))) ? ((~(var_14))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_12 [i_8] [8ULL])) : (arr_7 [i_7] [(short)3] [(short)3]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_36 [i_10] [i_9 + 1] [3ULL])) >> (((max((var_4), (((/* implicit */unsigned long long int) var_7)))) - (15072603611254878468ULL))))))));
                        var_24 = ((/* implicit */unsigned long long int) min((8642149605343729574LL), (-8532089782803602423LL)));
                        arr_43 [i_7] [7LL] [i_7] = ((/* implicit */unsigned int) (+(-4194304)));
                        var_25 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((arr_12 [i_7 + 2] [i_9 - 2]), (arr_12 [i_7 + 2] [i_9 - 1])))), (((unsigned long long int) arr_1 [i_9 + 1] [i_7 + 3]))));
                    }
                } 
            } 
        } 
        arr_44 [5ULL] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) 8642149605343729559LL)) ? (-8642149605343729603LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-6090)))));
    }
    /* LoopNest 3 */
    for (long long int i_11 = 0; i_11 < 23; i_11 += 3) 
    {
        for (short i_12 = 0; i_12 < 23; i_12 += 2) 
        {
            for (unsigned short i_13 = 0; i_13 < 23; i_13 += 4) 
            {
                {
                    var_26 = ((/* implicit */int) var_12);
                    var_27 = ((/* implicit */int) var_12);
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 8642149605343729572LL)) ? ((~(((/* implicit */int) arr_47 [i_13] [i_11])))) : (((/* implicit */int) (unsigned char)200))));
                    arr_51 [(unsigned short)11] [(unsigned short)11] = ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned char)13])))))) >= ((-(arr_49 [(unsigned char)4] [i_12]))))) ? (((long long int) ((((/* implicit */_Bool) (unsigned char)196)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_13))))) : (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_12]))));
                }
            } 
        } 
    } 
}
