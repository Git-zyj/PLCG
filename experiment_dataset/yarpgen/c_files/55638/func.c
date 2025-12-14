/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55638
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) <= (18446744073709551615ULL)))))))));
        var_16 = ((/* implicit */unsigned char) (+(5538712592952063450LL)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 1; i_2 < 11; i_2 += 4) 
        {
            var_17 = ((long long int) (!(((/* implicit */_Bool) 584433195U))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 4) 
                {
                    {
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (+(((/* implicit */int) arr_0 [2LL])))))));
                        var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_13 [i_2 + 1] [i_4 - 1]), (arr_13 [i_2 + 2] [i_4 + 1])))) ? ((+(max((((/* implicit */unsigned int) var_7)), (var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                    }
                } 
            } 
            var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((5538712592952063442LL) | (((/* implicit */long long int) -13))))))) ? (((((/* implicit */_Bool) max((2311846350U), (var_4)))) ? (1983120931U) : (((/* implicit */unsigned int) arr_8 [i_2 + 2] [i_2] [i_2])))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_3)))))));
        }
        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            var_21 = ((/* implicit */int) var_0);
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 4) 
            {
                for (long long int i_7 = 1; i_7 < 12; i_7 += 2) 
                {
                    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */short) (+(((/* implicit */int) var_5))));
                            var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) ((long long int) var_3))) : (((unsigned long long int) var_9))))) ? (((arr_16 [i_6 - 1] [i_7 - 1]) | (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_10))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_3 [i_5]))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 13; i_9 += 2) 
            {
                for (unsigned char i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_11 = 0; i_11 < 13; i_11 += 2) 
                        {
                            arr_31 [i_1] [i_5] [0LL] [i_10] [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((var_0) >> (((var_11) - (1878660972U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((5538712592952063461LL) >= (((/* implicit */long long int) ((/* implicit */int) var_7))))))))))));
                            arr_32 [i_1] [(short)8] [7ULL] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned short)39091)) ? (arr_4 [i_10]) : (arr_4 [i_1])))));
                        }
                        for (signed char i_12 = 2; i_12 < 12; i_12 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) 2311846350U))))))));
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) var_13))));
                        }
                        for (int i_13 = 0; i_13 < 13; i_13 += 3) 
                        {
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */unsigned int) (+(arr_12 [i_1])))) * (((((/* implicit */_Bool) arr_12 [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_11))))))));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_1])) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) var_14))));
                            arr_39 [i_10] [4ULL] [i_9] [i_10] [i_13] |= ((/* implicit */int) (_Bool)1);
                        }
                        var_28 = ((/* implicit */unsigned int) var_3);
                        arr_40 [i_10] [i_5] [0] [(_Bool)1] [i_1] = ((/* implicit */unsigned long long int) arr_12 [i_5]);
                    }
                } 
            } 
        }
        var_29 += ((/* implicit */short) max((((/* implicit */unsigned int) arr_2 [(short)10])), ((-(arr_4 [1U])))));
    }
    var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((unsigned int) (!(((/* implicit */_Bool) (signed char)46))))))));
}
