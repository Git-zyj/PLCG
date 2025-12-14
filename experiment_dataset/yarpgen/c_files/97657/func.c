/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97657
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
    for (short i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)34))))), ((+(((unsigned int) -1797908696005777823LL))))));
        var_13 *= ((/* implicit */short) var_11);
        var_14 = ((/* implicit */unsigned char) ((((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)-9888)))) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)9888)) - (((/* implicit */int) var_11))))) > (max((((/* implicit */unsigned long long int) var_3)), (var_4))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) var_5))));
        var_16 = ((/* implicit */int) (((_Bool)0) ? (arr_4 [i_1]) : (arr_4 [i_1])));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 14549055575879706958ULL)) ? (((/* implicit */int) (short)9913)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) > (arr_3 [i_1]))))));
        /* LoopSeq 3 */
        for (short i_2 = 4; i_2 < 11; i_2 += 3) 
        {
            var_18 = ((/* implicit */short) arr_7 [i_1] [i_1]);
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((arr_4 [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (-(var_4))))));
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_12))));
        }
        for (long long int i_3 = 2; i_3 < 11; i_3 += 3) 
        {
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (((_Bool)1) ? (arr_3 [i_3 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43139))))))));
            var_23 += ((/* implicit */unsigned short) arr_1 [2ULL]);
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (+(((unsigned int) var_12)))))));
        }
        for (int i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            var_25 = ((/* implicit */signed char) (unsigned char)161);
            var_26 -= ((/* implicit */long long int) var_6);
        }
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
    {
        var_27 = ((/* implicit */long long int) ((arr_13 [i_5]) > (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
        var_28 = ((/* implicit */unsigned char) arr_0 [i_5]);
    }
    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)128)) ? (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12)))) : ((-(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (short)10435))));
}
