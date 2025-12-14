/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62156
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
    var_10 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_1)), (((unsigned short) var_5))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        var_11 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)39))) : (6247540430067345026ULL))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)106)) ? (arr_2 [i_0 + 2] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 2]))))))));
        var_12 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)178)) ? (arr_2 [i_0 + 2] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) && (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) var_2))));
    }
    for (signed char i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
    {
        var_13 += ((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) ((short) (short)0)))));
        var_14 += ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((_Bool) 0ULL)) ? ((+(((/* implicit */int) var_2)))) : ((-(((/* implicit */int) (unsigned char)0))))))), (max((((/* implicit */unsigned int) ((unsigned short) var_2))), (((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_8)))))));
        arr_7 [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) max(((!(((/* implicit */_Bool) var_9)))), (((arr_6 [i_1] [i_1]) >= (((/* implicit */unsigned long long int) var_8)))))))));
    }
    for (signed char i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
    {
        arr_10 [(signed char)10] [(signed char)10] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)91))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-11))) : (-7005092833413524798LL)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_2]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_9 [(unsigned char)2]) : (((/* implicit */unsigned long long int) var_8))))) ? (((((/* implicit */_Bool) (unsigned char)212)) ? (arr_9 [(_Bool)1]) : (((/* implicit */unsigned long long int) var_9)))) : (((((/* implicit */_Bool) arr_9 [(short)4])) ? (arr_6 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(unsigned char)8] [(unsigned char)8])))))))));
        arr_11 [i_2] [i_2] = ((/* implicit */long long int) (-((((!((_Bool)1))) ? (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned char) var_7)))))));
        var_15 *= ((/* implicit */short) (unsigned short)20);
    }
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) (short)13)) / (((/* implicit */int) var_1))));
    var_17 = ((/* implicit */unsigned long long int) ((max(((+(((/* implicit */int) var_3)))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)10)) || (((/* implicit */_Bool) 13ULL))))))) < ((-(((((/* implicit */_Bool) 817323549671200175LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-27375))))))));
}
