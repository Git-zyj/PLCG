/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83861
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
    var_13 = ((/* implicit */short) min((((/* implicit */long long int) (unsigned short)60562)), (min((((/* implicit */long long int) var_3)), (((long long int) (signed char)(-127 - 1)))))));
    var_14 = ((/* implicit */int) ((var_8) ? (max((((/* implicit */unsigned int) (+(var_11)))), (1985545395U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) max((((unsigned short) 6073229390783142407LL)), (((/* implicit */unsigned short) (short)-32758))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (unsigned char i_3 = 1; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */int) min((var_16), (((((/* implicit */_Bool) 1379521480U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((short) arr_8 [i_0] [i_2])))))));
                        arr_11 [i_3] = (~(((/* implicit */int) var_12)));
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_8 [i_3 + 2] [i_3 + 1]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_3 + 1]))))) ? (((((/* implicit */_Bool) arr_9 [i_3] [i_3 - 1])) ? (arr_9 [i_3] [i_3 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3 + 1] [i_3 + 1]))))) : (((long long int) arr_9 [i_3] [i_3 - 1]))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 9; i_4 += 2) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_4] [i_4 - 1] [i_4 - 1])) != (((/* implicit */int) arr_2 [i_4] [i_4]))));
        arr_14 [i_4] = arr_5 [i_4 - 2];
        arr_15 [8LL] = ((/* implicit */short) ((((/* implicit */_Bool) (-(-1668909559)))) ? (13575087099897105876ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4 + 2])))));
        var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_13 [i_4])) || (((/* implicit */_Bool) arr_13 [1])))) ? (((((/* implicit */_Bool) arr_9 [i_4] [i_4 + 3])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)511))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 57344U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))))));
    }
    for (unsigned int i_5 = 1; i_5 < 21; i_5 += 4) 
    {
        arr_20 [(unsigned char)12] |= ((/* implicit */unsigned long long int) max((((int) arr_16 [4ULL] [i_5 + 1])), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5]))) != (arr_19 [i_5])))) : (((/* implicit */int) arr_17 [(short)6]))))));
        arr_21 [i_5] = ((/* implicit */short) arr_17 [i_5]);
        arr_22 [i_5] = ((/* implicit */int) ((((arr_16 [i_5] [i_5 - 1]) ? (5LL) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5] [i_5 + 1]))))) | (((((_Bool) arr_16 [i_5] [i_5 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (min((var_9), (((/* implicit */long long int) arr_16 [i_5] [i_5]))))))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_5] [i_5]))))) ? (((long long int) ((((/* implicit */_Bool) arr_18 [6LL])) ? (var_3) : (((/* implicit */int) arr_16 [i_5] [i_5]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5])))));
    }
    var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)12423)), (1861850968U)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (var_2)))))) ? (((unsigned int) ((((/* implicit */_Bool) 1011655516)) ? (var_10) : (var_10)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -7394873624478208098LL)) ? (((/* implicit */int) (unsigned short)25085)) : (((/* implicit */int) (_Bool)0)))))));
}
