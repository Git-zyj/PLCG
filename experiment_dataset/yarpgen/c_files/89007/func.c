/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89007
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)8))))) ? (11673925105783846174ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)55)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        arr_4 [i_0] = min((var_2), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-31))))));
        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) (-(1000684616))))));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        arr_8 [i_1] [(signed char)13] = ((/* implicit */short) (-(((/* implicit */int) var_9))));
        var_12 = ((/* implicit */unsigned int) (unsigned char)111);
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            var_13 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_2 [14])) ? (((/* implicit */int) arr_1 [i_1] [(signed char)20])) : (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_10 [(unsigned char)9] [(unsigned char)7]))))));
            var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_6))));
            arr_12 [i_1] [(unsigned char)14] [i_2] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_11 [11])))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
            var_15 = ((/* implicit */unsigned int) arr_6 [i_1] [11LL]);
            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_3)), (-3643854269085249644LL))) + (((/* implicit */long long int) (+(4093893887U))))))) : (134217727ULL))))));
        }
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            var_17 = ((((/* implicit */_Bool) arr_2 [(signed char)2])) ? (((/* implicit */unsigned long long int) (~(-1846221827456353779LL)))) : (((((/* implicit */_Bool) 1152921504606846975ULL)) ? (((((/* implicit */_Bool) 18446744073575333888ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-110))) : (12603028543705056385ULL))) : (12146519644539745391ULL))));
            arr_15 [i_1] = ((/* implicit */int) var_6);
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            arr_20 [(short)0] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (((((/* implicit */_Bool) var_4)) ? (134217718ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
            arr_21 [i_1] = ((/* implicit */unsigned long long int) var_8);
            arr_22 [(unsigned char)4] [14ULL] [2ULL] &= ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
            arr_23 [i_1] [2ULL] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-18114))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_1] [i_1]))))) : (2713047009U)));
        }
        var_18 = ((/* implicit */long long int) var_0);
    }
}
