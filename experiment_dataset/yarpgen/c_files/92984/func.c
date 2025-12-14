/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92984
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
    for (long long int i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) ((((unsigned int) arr_1 [i_0] [i_0])) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_6)))))))));
        arr_2 [i_0] = ((/* implicit */int) ((arr_1 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [11] [i_0])) & (((/* implicit */int) var_6))))) : ((-(((unsigned long long int) arr_0 [i_0] [i_0]))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_2] [i_2 - 1] [i_2 - 2])) ? (min((arr_6 [i_1] [i_1] [i_2]), (((/* implicit */unsigned long long int) (signed char)2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [i_1] [(unsigned short)3] [i_1]) != (((/* implicit */unsigned long long int) arr_5 [i_1])))))))) % (((((/* implicit */_Bool) max((((/* implicit */long long int) 10U)), (arr_4 [i_1])))) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) arr_4 [i_1]))))));
            arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((arr_6 [9U] [i_2] [15ULL]), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [i_1] [13ULL] [(unsigned short)0]) > (((/* implicit */unsigned long long int) arr_4 [i_2])))))) : (arr_6 [i_2 - 2] [i_2 - 2] [(signed char)1]))) >> (((var_8) - (785938551)))));
            arr_9 [i_1] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((long long int) arr_6 [(signed char)15] [i_1] [(signed char)15])) / (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-24900)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1])))))))) - (((((/* implicit */_Bool) min((arr_3 [i_1]), (((/* implicit */unsigned short) (signed char)2))))) ? (max((0ULL), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)8514)))))))));
            /* LoopNest 3 */
            for (unsigned int i_3 = 1; i_3 < 16; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 1; i_5 < 18; i_5 += 4) 
                    {
                        {
                            arr_17 [i_1] [i_1] [9U] = ((/* implicit */long long int) ((((/* implicit */int) ((arr_10 [i_2 - 2] [i_3 + 1] [i_2 - 2]) != (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) != (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_2] [i_1] [i_5])))))))))) != ((+((+(arr_12 [i_1] [i_2] [i_2] [i_5])))))));
                            arr_18 [i_5] [i_1] [i_4] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-28167))))) ? (((/* implicit */long long int) ((((int) 18446744073709551615ULL)) % (((/* implicit */int) arr_11 [i_1] [12] [i_1] [(_Bool)0]))))) : (arr_13 [(unsigned char)3] [i_2 + 1] [i_3] [i_1])));
                        }
                    } 
                } 
            } 
        }
        arr_19 [i_1] [2LL] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned int) (unsigned short)24812)), (arr_16 [i_1] [i_1]))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_1] [16U] [i_1]))))))) != (((((((/* implicit */_Bool) arr_5 [i_1])) ? (3768071382600971195ULL) : (((/* implicit */unsigned long long int) var_8)))) >> (((min((arr_12 [i_1] [(unsigned short)9] [i_1] [10ULL]), (((/* implicit */int) arr_14 [i_1] [8] [(signed char)3] [i_1] [(unsigned char)17])))) - (20645)))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */int) ((unsigned long long int) (-(((/* implicit */int) arr_14 [i_6] [i_6] [i_6] [i_6] [i_6])))));
        var_15 -= ((/* implicit */unsigned int) var_6);
    }
    var_16 &= ((/* implicit */unsigned long long int) var_3);
}
