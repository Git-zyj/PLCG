/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90089
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
    for (short i_0 = 3; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_18 += ((/* implicit */_Bool) arr_1 [(signed char)4]);
        var_19 ^= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((int) var_5))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 4]))) : (((((/* implicit */_Bool) arr_1 [(signed char)12])) ? (arr_1 [2U]) : (arr_1 [(_Bool)0])))))));
    }
    for (short i_1 = 3; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) min((var_20), ((!(((/* implicit */_Bool) arr_2 [6]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_2 = 2; i_2 < 12; i_2 += 2) 
        {
            arr_7 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_1 + 3] [i_1]))));
            var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) arr_6 [(_Bool)0])) : (((/* implicit */int) (short)-32692))))) ? (arr_4 [i_1 - 2] [i_2 - 2] [i_2]) : (arr_4 [i_2 - 2] [i_2 - 1] [i_2 - 1])));
            arr_8 [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_14 [i_1] [i_4 - 1] [i_1 + 4] [i_1]))));
                        var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1 - 3])) ? (((/* implicit */int) arr_6 [i_4 - 1])) : (((((/* implicit */_Bool) (short)-18609)) ? (arr_12 [i_3] [i_4]) : (((/* implicit */int) var_8))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 + 1] [i_1 - 3])) ? (arr_3 [i_1 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)32692)) || (((/* implicit */_Bool) (signed char)4))))))));
        }
        var_25 = ((/* implicit */int) ((_Bool) (~(((/* implicit */int) arr_15 [i_1 - 2] [i_1])))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 1; i_6 < 12; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_26 &= ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) arr_9 [i_1] [(short)0] [(short)13])))), (((((arr_16 [i_6 - 1] [i_6] [(_Bool)1] [i_6] [i_6] [i_6 - 1]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_7])))) == (((((/* implicit */_Bool) arr_1 [(short)4])) ? (((/* implicit */int) arr_22 [i_1] [4ULL] [(unsigned char)8] [(unsigned char)4])) : (((/* implicit */int) arr_6 [i_1]))))))));
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [i_1 - 3] [i_1 - 1] [i_1 - 2])) ? (((/* implicit */unsigned int) ((var_8) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_14 [(signed char)2] [i_7] [i_6 + 2] [(signed char)2]))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (0U))))) - (min((((arr_3 [i_7]) * (((/* implicit */unsigned int) -1819696444)))), (((/* implicit */unsigned int) ((arr_12 [(unsigned short)4] [i_6 - 1]) << (((((((/* implicit */int) arr_5 [i_1] [4])) + (29188))) - (20)))))))))))));
                }
            } 
        } 
    }
    for (short i_8 = 3; i_8 < 10; i_8 += 3) /* same iter space */
    {
        var_28 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_8] [(_Bool)1] [i_8])) ? (((((/* implicit */_Bool) min((arr_18 [(signed char)12]), (((/* implicit */unsigned short) var_10))))) ? (((unsigned long long int) arr_1 [(_Bool)1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_8]))))) : (((unsigned long long int) ((((/* implicit */int) (signed char)7)) * (((/* implicit */int) (short)19655)))))));
        /* LoopNest 3 */
        for (short i_9 = 0; i_9 < 14; i_9 += 3) 
        {
            for (unsigned short i_10 = 0; i_10 < 14; i_10 += 1) 
            {
                for (signed char i_11 = 0; i_11 < 14; i_11 += 3) 
                {
                    {
                        var_29 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_8 - 2] [i_8 + 1] [i_9] [i_10] [i_11])) ? (((/* implicit */unsigned long long int) (-(min((arr_3 [i_9]), (((/* implicit */unsigned int) arr_22 [i_11] [(_Bool)1] [(_Bool)1] [i_8 - 3]))))))) : (((arr_19 [i_8 + 3] [(short)12] [i_8 + 1] [i_8 - 2]) >> (((arr_10 [(signed char)4]) - (656247378U)))))));
                        arr_34 [i_9] [i_9] [i_8] [i_9] = ((/* implicit */unsigned int) var_9);
                        var_30 = (i_8 % 2 == 0) ? (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_20 [i_8 + 3])) ? (((/* implicit */int) arr_20 [i_8 + 1])) : (((/* implicit */int) arr_20 [i_8 - 3])))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_31 [9ULL] [i_9] [i_8])) : (((/* implicit */int) arr_25 [i_8 + 3] [i_8]))))) ? (((((/* implicit */int) arr_21 [i_8])) * (((/* implicit */int) arr_0 [i_9])))) : (((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */int) arr_32 [i_8] [i_9] [i_10] [i_11] [i_11])) : (((/* implicit */int) var_17)))))) - (485744890)))))) : (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_20 [i_8 + 3])) ? (((/* implicit */int) arr_20 [i_8 + 1])) : (((/* implicit */int) arr_20 [i_8 - 3])))) >> (((((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_31 [9ULL] [i_9] [i_8])) : (((/* implicit */int) arr_25 [i_8 + 3] [i_8]))))) ? (((((/* implicit */int) arr_21 [i_8])) * (((/* implicit */int) arr_0 [i_9])))) : (((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */int) arr_32 [i_8] [i_9] [i_10] [i_11] [i_11])) : (((/* implicit */int) var_17)))))) - (485744890))) + (297965648))))));
                        var_31 = ((/* implicit */unsigned long long int) ((((arr_16 [i_8 + 1] [i_8 - 3] [i_8] [i_8] [i_8 - 3] [i_10]) ? (((/* implicit */int) arr_16 [i_8 - 1] [i_8 - 1] [i_8] [i_8] [i_8 + 1] [i_11])) : (((/* implicit */int) arr_16 [i_8 + 4] [i_8 + 3] [i_8] [i_8] [i_8 + 4] [9])))) < (((/* implicit */int) arr_16 [i_8 - 2] [i_8 - 1] [i_8] [i_8] [i_8 - 2] [i_11]))));
                    }
                } 
            } 
        } 
    }
    var_32 = ((/* implicit */unsigned int) var_15);
}
