/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5879
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [(short)9] = ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25589))))))))) ^ (((((((/* implicit */_Bool) 131071U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_6 [i_1] [i_1])))) | ((-(arr_2 [14ULL] [i_1]))))));
                    arr_11 [i_0] [i_1 + 1] [i_2] &= ((/* implicit */unsigned char) (~((~(((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [(unsigned short)13])) - (((/* implicit */int) (unsigned char)245))))))));
                    arr_12 [i_0] [i_1 - 1] [i_2] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) var_2)), (131071U)))))) ? (min((((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (arr_2 [i_1 - 2] [i_2]) : (((/* implicit */int) (signed char)-110)))), (((/* implicit */int) ((((/* implicit */int) var_16)) > (((/* implicit */int) arr_5 [(short)2] [i_1] [i_1]))))))) : ((~(((/* implicit */int) min((var_1), ((unsigned char)157))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) /* same iter space */
    {
        var_18 = ((((((/* implicit */_Bool) var_0)) ? (arr_13 [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))) / (((/* implicit */unsigned int) ((/* implicit */int) (!(var_14))))));
        var_19 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (short)-25602)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))));
    }
    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
    {
        var_20 &= ((((((/* implicit */_Bool) min((arr_15 [17ULL] [i_4]), (((/* implicit */unsigned char) (signed char)-118))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1495253423U)) ? (arr_13 [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_4])))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_13 [i_4] [i_4])) : (var_9))))) ^ (((/* implicit */unsigned long long int) ((((131071U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (((arr_13 [i_4] [i_4]) >> (((/* implicit */int) var_5))))))));
        arr_17 [i_4] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) var_17))) / (2799713872U))), (((((/* implicit */_Bool) arr_13 [9ULL] [9ULL])) ? (arr_16 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)26)))))))) ? (max((min((((/* implicit */unsigned long long int) var_3)), (1683822337748136245ULL))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)59084)) > (((/* implicit */int) (unsigned char)184))))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
        arr_18 [i_4] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? ((~(((/* implicit */int) arr_14 [i_4])))) : (((((/* implicit */_Bool) 134201344)) ? (((/* implicit */int) (unsigned short)9700)) : (((/* implicit */int) (signed char)21))))))), (max((max((arr_13 [i_4] [i_4]), (((/* implicit */unsigned int) (unsigned short)43602)))), ((~(arr_13 [i_4] [i_4])))))));
        arr_19 [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(arr_16 [7ULL])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((short)25577), (var_4))))) : (max((((/* implicit */unsigned int) (short)28269)), (arr_13 [i_4] [i_4]))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_14 [i_4])))) || ((!(((/* implicit */_Bool) var_10))))))))));
    }
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)4)) > (((/* implicit */int) var_11))))), (min(((unsigned char)253), (((/* implicit */unsigned char) var_8)))))))) > (max((((var_0) - (((/* implicit */unsigned int) var_7)))), (((3040779933U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))))));
}
