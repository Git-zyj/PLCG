/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64824
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((((/* implicit */unsigned int) 1348001564)) * (854138587U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (var_6))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((var_4) ? (var_2) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_8), (var_4))))))) : (((unsigned int) (~(3440828701U))))));
    var_13 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 854138583U)) ? (11674348577502409008ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32749)))));
        var_15 *= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))) ? (((((/* implicit */_Bool) 854138587U)) ? (1557487999U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21))))) : (min((3440828689U), (3440828716U)))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(854138587U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)20]))) : (((unsigned int) (unsigned short)50232))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0]);
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_1]))))), ((((!(((/* implicit */_Bool) arr_4 [i_1])))) ? (min((((/* implicit */long long int) arr_5 [(signed char)21])), (arr_4 [i_1]))) : (arr_4 [i_1]))))))));
        var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) (+(arr_5 [i_1])))) : ((-(arr_4 [i_1]))))))));
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            var_18 = (i_1 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_4 [i_1]) + (9223372036854775807LL))) >> (((arr_7 [i_1] [i_2] [i_1]) - (2796140606128058452ULL)))))) ? (max((((/* implicit */unsigned long long int) 690236239)), (17312643589171529942ULL))) : (((/* implicit */unsigned long long int) (((~(arr_5 [i_1]))) >> ((((~(arr_6 [i_2]))) - (2235658862U))))))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_4 [i_1]) + (9223372036854775807LL))) >> (((((arr_7 [i_1] [i_2] [i_1]) - (2796140606128058452ULL))) - (1270767927473376569ULL)))))) ? (max((((/* implicit */unsigned long long int) 690236239)), (17312643589171529942ULL))) : (((/* implicit */unsigned long long int) (((~(arr_5 [i_1]))) >> ((((~(arr_6 [i_2]))) - (2235658862U)))))))));
            arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_4 [i_2]), (((/* implicit */long long int) arr_5 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1])) && (((/* implicit */_Bool) arr_5 [i_2])))))) : (arr_6 [(signed char)11])))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_4 [(unsigned char)18])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_1])) || (((/* implicit */_Bool) arr_4 [7U])))))) : (arr_4 [i_1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 690236239)) ? (-690236239) : (((/* implicit */int) (signed char)88))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_1])) ? (arr_4 [i_2]) : (((/* implicit */long long int) arr_6 [i_2]))))) : (min((arr_7 [i_1] [8LL] [i_1]), (((/* implicit */unsigned long long int) arr_5 [i_1]))))))));
        }
        for (int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            arr_13 [i_1] = ((((/* implicit */_Bool) 3150084041U)) ? (((/* implicit */unsigned int) 690236239)) : (3440828716U));
            arr_14 [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [i_3]) : (arr_6 [i_3])))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_1]))) : (arr_9 [14U])))))) : (((((arr_4 [2LL]) >= (((/* implicit */long long int) arr_9 [11ULL])))) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_4 [i_3]) : (((/* implicit */long long int) arr_10 [(short)23] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_3]))))))))));
        }
        for (long long int i_4 = 1; i_4 < 24; i_4 += 3) 
        {
            var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) 854138580U)), (5209582532612518358LL)))) ? (max((((/* implicit */long long int) (_Bool)1)), (5209582532612518366LL))) : (((/* implicit */long long int) 1756254042))))) ? (min((((((/* implicit */_Bool) arr_16 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1] [i_1]))) : (arr_7 [i_1] [i_1] [(unsigned short)18]))), (((unsigned long long int) arr_15 [i_1] [(_Bool)1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_5 [i_4])) - (arr_10 [5ULL] [8U])))) ? (min((arr_4 [i_1]), (((/* implicit */long long int) arr_12 [i_4] [i_1] [i_1])))) : (((/* implicit */long long int) max((((/* implicit */int) arr_12 [i_1] [i_1] [i_4])), (arr_5 [i_1])))))))));
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_12 [i_1] [i_4] [i_4])), (arr_5 [(short)2])))), ((~(arr_7 [i_1] [i_1] [i_1])))))) ? (min((min((2415867180747836863ULL), (8394631637097492918ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_15 [1ULL] [(unsigned short)19])), (arr_9 [i_1])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4] [i_4 + 1]))) != ((-(arr_6 [i_1])))))))));
            arr_18 [i_1] [i_1] = ((/* implicit */short) (~(-5209582532612518358LL)));
        }
    }
}
