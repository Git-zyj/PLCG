/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8593
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
    var_18 |= ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned short)52021)))) + (((/* implicit */int) ((_Bool) var_3)))))) ? (var_10) : (((/* implicit */int) (((-(((/* implicit */int) var_1)))) >= (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) (unsigned char)221)))))))));
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_15))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            arr_4 [i_1] [i_0] = ((/* implicit */int) ((_Bool) (~(-1430466932))));
            arr_5 [i_0] [(unsigned short)0] [3ULL] = ((/* implicit */unsigned long long int) ((-1430466932) + (((/* implicit */int) (unsigned short)61706))));
            arr_6 [i_0] = ((/* implicit */int) ((((1572864ULL) * (((/* implicit */unsigned long long int) 16777215)))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)64)))))));
            arr_7 [0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -16777215)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37154))) : (446855990U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) var_13))))) : (((/* implicit */int) ((((/* implicit */int) var_1)) == (var_6))))));
        }
        var_20 = ((/* implicit */int) min((var_20), (-1266059663)));
    }
    for (short i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_3 = 2; i_3 < 22; i_3 += 4) 
        {
            var_21 += ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)52021))) | (min((((/* implicit */long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))), (min((-8401860989041706909LL), (((/* implicit */long long int) (unsigned short)52145))))))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                for (int i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_19 [i_5] [i_3 - 2] [i_4] [3] [i_6] [i_4] [(unsigned short)13])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_2] [i_4] [21U]))) < (arr_13 [21ULL] [i_6]))))) : (var_4)));
                            var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1544441265)) ? (-8077417747912994120LL) : (((/* implicit */long long int) 1430466931))));
                            var_24 = ((/* implicit */unsigned long long int) ((int) 0U));
                        }
                        for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            arr_23 [0] [0] [0] [i_4] [i_7] [i_4] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) - (0ULL))))) & (((/* implicit */int) ((short) arr_14 [i_2] [i_4] [i_3] [i_4])))));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) min((((((/* implicit */_Bool) ((unsigned long long int) arr_20 [(short)1] [i_3] [i_3 - 1] [i_3] [i_3] [i_3]))) ? (((/* implicit */int) arr_18 [i_3 + 1] [i_3] [i_4])) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_6))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2991)) ? (arr_16 [i_4] [i_3] [i_5] [6] [2ULL]) : (((/* implicit */long long int) 1201438775))))) ? (((/* implicit */int) (unsigned short)7154)) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_9))))))))))));
                        }
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (~((~(-168745733)))))) ? (((/* implicit */unsigned long long int) var_6)) : (var_3)));
                        var_27 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -603879367)), (((((/* implicit */_Bool) 1885913404375751820ULL)) ? (62914560ULL) : (((/* implicit */unsigned long long int) -7439965777878310622LL))))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)20417))) - (4358678038072852368LL))) : (((/* implicit */long long int) arr_19 [i_2] [4] [i_3] [20] [4] [i_3] [i_5])));
                        arr_24 [i_2] [13U] [i_4] [i_2] [18] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_10 [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_13 [i_2] [i_3 + 1])))) ? (-16777216) : (((arr_9 [i_4]) - (arr_12 [i_2])))))) ? (min((((/* implicit */unsigned int) arr_18 [i_2] [i_2] [i_5])), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) ^ (0U))))) : (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) var_2)) : (arr_13 [i_2] [i_2]))) : (((/* implicit */unsigned int) ((var_2) / (((/* implicit */int) var_7)))))))));
                    }
                } 
            } 
        }
        var_28 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) -902874916)) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1297859204)) ? (1455708352) : (1430466932)))) ? (max((((/* implicit */unsigned int) (_Bool)1)), (3904977122U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -2793774063220506520LL)) ? (arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) : (16777215))))))));
        var_29 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(17629773835497432916ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */int) var_7))))) : (arr_13 [i_2] [i_2]))) >= (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) < (arr_22 [(_Bool)1] [i_2] [i_2])))))))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 3) 
    {
        arr_28 [i_8] = var_15;
        arr_29 [i_8] = ((/* implicit */int) (~(var_4)));
    }
}
