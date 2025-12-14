/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79582
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)41287)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) ^ ((~(5930843993949431475ULL)))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_1 [i_0])))) ? ((+(arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41451)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [(unsigned short)8] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)24268))))) : ((-(var_11)))))) ? (((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42166))) : (var_11))) : (((((/* implicit */_Bool) arr_2 [i_0] [1U])) ? (var_12) : (((((/* implicit */_Bool) 4294967295U)) ? (4286387782451707579ULL) : (17ULL)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) ((arr_4 [i_1] [(unsigned short)11]) / (var_5)));
        arr_6 [(unsigned short)10] = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)926));
    }
    for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((3214691294U), (((/* implicit */unsigned int) (unsigned short)64016))))) ? (((((/* implicit */_Bool) 14697185015274054004ULL)) ? (((((/* implicit */_Bool) var_3)) ? (12515900079760120166ULL) : (((/* implicit */unsigned long long int) 4294967295U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)65512)) : (((/* implicit */int) (unsigned short)36777))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24265)))));
        /* LoopNest 3 */
        for (unsigned int i_3 = 1; i_3 < 11; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 4) 
            {
                for (unsigned short i_5 = 2; i_5 < 12; i_5 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (-((-(3214691294U))))))));
                        arr_21 [i_3] [(unsigned short)5] [10ULL] [(unsigned short)5] [i_3] = (((!((!(((/* implicit */_Bool) arr_14 [(unsigned short)0])))))) ? (max((3608419328336545908ULL), (((/* implicit */unsigned long long int) 2147483647U)))) : (((/* implicit */unsigned long long int) 0U)));
                        var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((unsigned long long int) 1050069206U)) << (((((((/* implicit */_Bool) 2147483616U)) ? (((/* implicit */unsigned long long int) var_8)) : (17592186044415ULL))) - (4166095559ULL))))))));
                        var_19 *= 0ULL;
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned short) arr_7 [i_2]))), (((((/* implicit */_Bool) var_2)) ? ((-(var_12))) : (17592186044415ULL)))));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
    {
        var_21 &= ((/* implicit */unsigned short) ((var_6) - (((/* implicit */unsigned long long int) arr_17 [i_6] [i_6]))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_6])) && (((/* implicit */_Bool) ((unsigned long long int) 10U)))));
        var_23 = ((unsigned int) (!(((/* implicit */_Bool) var_7))));
        var_24 -= ((/* implicit */unsigned int) var_2);
        arr_25 [10U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_24 [(unsigned short)4]))));
    }
}
