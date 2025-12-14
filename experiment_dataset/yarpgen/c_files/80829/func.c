/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80829
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
    var_19 = ((((/* implicit */_Bool) (signed char)48)) ? (2147483630) : (((/* implicit */int) (signed char)47)));
    var_20 = ((/* implicit */long long int) (signed char)-1);
    var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_3))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 4; i_0 < 16; i_0 += 1) /* same iter space */
    {
        var_22 = ((int) ((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 2]))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) (signed char)48)) / (((/* implicit */int) (signed char)31))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0 + 1]))) : (-2888922428998624266LL)))));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(signed char)15] [i_0])) ? (arr_1 [i_0 - 3] [i_0 - 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16753)))))) ? (((((/* implicit */unsigned long long int) 521602142)) ^ (arr_1 [i_0] [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115)))));
    }
    for (unsigned int i_1 = 4; i_1 < 16; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 4])) ? (arr_3 [i_1 - 2]) : (arr_3 [i_1 - 1])))) ? ((((!(((/* implicit */_Bool) 3125181601U)))) ? (min((((/* implicit */unsigned long long int) arr_3 [i_1])), (arr_1 [i_1 - 1] [i_1 - 1]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-48))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_4 [i_1])) <= (((/* implicit */int) arr_0 [i_1] [i_1]))))))))));
        var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) (signed char)31)))) == (((/* implicit */int) arr_4 [i_1 - 4]))));
        var_25 = ((/* implicit */unsigned int) min((var_25), (((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-47))) : (arr_1 [i_1] [i_1 - 3]))) ^ (((/* implicit */unsigned long long int) 1563843489U))))) ? (((((/* implicit */_Bool) (unsigned char)128)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-48))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192)))))));
        var_26 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967278U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_1 - 4]))) : (1992930543835976394LL)))) ? (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)31))) : (arr_3 [5ULL]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 2] [i_1 - 4])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)48)) ^ (((/* implicit */int) arr_0 [i_1] [i_1]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_1 - 2] [i_1]))))) : ((-(315027203U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((min((13828536108361420257ULL), (((/* implicit */unsigned long long int) (unsigned short)65532)))) > (((/* implicit */unsigned long long int) min((16777215U), (((/* implicit */unsigned int) arr_0 [i_1 + 1] [i_1 - 1])))))))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 4; i_2 < 16; i_2 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_7 [i_2]) : (arr_7 [i_2])));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_28 = ((/* implicit */int) min((var_28), (((((/* implicit */_Bool) (unsigned short)56)) ? (((/* implicit */int) arr_0 [i_2 - 2] [i_3])) : (((/* implicit */int) (signed char)31))))));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 15; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    {
                        var_29 = ((/* implicit */signed char) (+(arr_1 [i_2 - 4] [i_4 + 2])));
                        arr_14 [i_2] [i_3] [i_4 - 1] [i_4] [i_4] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(unsigned char)12] [(unsigned char)12])) ? (arr_8 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4 + 2] [i_3] [i_2 - 2] [i_5])))))) ? (arr_10 [i_2 + 1] [i_2 - 1] [i_4 + 1]) : (((/* implicit */unsigned long long int) arr_3 [i_4 - 1]))));
                        var_30 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)24)) + (((/* implicit */int) arr_13 [i_2] [i_3] [i_4] [i_5]))))) ? (1992930543835976394LL) : (((/* implicit */long long int) 2731123791U))));
                        var_31 = ((/* implicit */int) arr_4 [i_4 - 1]);
                    }
                } 
            } 
        }
        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (!(((/* implicit */_Bool) 2906259856U)))))));
    }
}
