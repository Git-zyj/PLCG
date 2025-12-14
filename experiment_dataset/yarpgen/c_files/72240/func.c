/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72240
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            arr_4 [8] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_1 [i_1] [i_0]), (var_2))))) >= (max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (3U)))), (6488903347849780528LL)))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                var_20 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2962395209U)) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_2]))))) ? (((/* implicit */int) max((arr_8 [i_0]), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) ((var_19) > (((/* implicit */int) (short)-5660))))))) : (((/* implicit */int) (unsigned short)42929))));
                arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */int) arr_3 [i_2]);
                arr_10 [i_0] [i_1] [i_0] = ((/* implicit */short) (+(((/* implicit */int) min((arr_7 [i_0] [i_0] [i_0] [9ULL]), (arr_7 [i_2] [i_1] [i_1] [i_0]))))));
                /* LoopSeq 2 */
                for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min(((_Bool)1), (((((/* implicit */int) (short)-577)) > (((/* implicit */int) (unsigned short)41277)))))))));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) & (arr_0 [13ULL]))) >> (((var_14) + (1480819150248666839LL))))) | (((/* implicit */unsigned long long int) arr_12 [i_0] [(signed char)12] [i_0] [i_0])))))));
                }
                for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    arr_16 [i_0] [i_1] [i_2] [i_4] &= ((/* implicit */signed char) arr_11 [i_1] [i_1] [i_1]);
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_1 [i_1] [i_2]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) arr_3 [(signed char)4]))))) ? (((/* implicit */unsigned long long int) 2147483640)) : (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) (_Bool)0)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4])))));
                }
            }
            for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
            {
                var_24 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_15 [i_0] [i_1])) || (((/* implicit */_Bool) arr_14 [i_5] [i_0] [i_1] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) min((arr_2 [i_0] [i_1] [i_5]), ((signed char)17)))) : (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) min(((_Bool)1), (var_3)))) : (arr_6 [i_5] [i_5] [i_1] [i_0])))));
                arr_19 [i_0] [i_1] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) -124333420)) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_5])) ? (4398045986816ULL) : (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_1] [i_0])))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_5])) ? (((/* implicit */unsigned long long int) arr_6 [i_5] [i_1] [i_0] [i_0])) : (arr_0 [i_0])))));
            }
        }
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-41)) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_0] [i_0] [i_0])) ? (1927651633U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
        arr_20 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_0] [10U])) : (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0]))) : (min((var_13), (((/* implicit */unsigned long long int) (short)-29229)))))), (((/* implicit */unsigned long long int) (-(arr_11 [i_0] [i_0] [i_0]))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_23 [i_6] = ((/* implicit */_Bool) var_8);
        arr_24 [i_6] = ((/* implicit */signed char) 2014673268);
        arr_25 [i_6] = ((/* implicit */short) max((((arr_13 [i_6] [i_6] [i_6]) ? (max((4062755530128314702LL), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) ((/* implicit */int) min(((short)8214), (((/* implicit */short) var_4)))))))), (((min((arr_12 [(short)7] [i_6] [(short)1] [i_6]), (((/* implicit */long long int) arr_13 [i_6] [i_6] [i_6])))) / (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)1009)))))))));
    }
    for (long long int i_7 = 3; i_7 < 6; i_7 += 1) 
    {
        arr_28 [i_7] = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)126)) > (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))) > (arr_27 [i_7])))))) ? ((((!((_Bool)1))) ? (arr_27 [i_7]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1766653551439684483LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_7]))))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) (signed char)-43))))), (((((/* implicit */_Bool) (unsigned short)4299)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_7] [5U] [i_7]))) : (arr_15 [i_7] [i_7]))))))));
        arr_29 [i_7] [(unsigned char)4] &= ((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)125))) == (((4112811487U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_7] [i_7])))))))), ((signed char)-52)));
    }
    var_26 = ((/* implicit */signed char) min(((unsigned short)15154), (((/* implicit */unsigned short) var_4))));
}
