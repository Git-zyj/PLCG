/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93871
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (((!(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) 16010582807672086545ULL)))))) || (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (arr_0 [i_0])))))));
        arr_4 [i_0] = 1448566523303612080ULL;
        arr_5 [i_0] = ((/* implicit */_Bool) ((unsigned char) arr_2 [i_0] [i_0]));
        arr_6 [i_0] = ((unsigned long long int) arr_2 [i_0] [i_0]);
        arr_7 [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0]))))) > (((/* implicit */int) min((var_7), (((/* implicit */unsigned char) var_8)))))));
    }
    for (long long int i_1 = 3; i_1 < 20; i_1 += 4) 
    {
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) 4260323561333473884LL)) ? (((/* implicit */int) (unsigned short)65530)) : (((/* implicit */int) (unsigned char)3)))) / (-1473767513)))));
        arr_11 [i_1] [i_1] = (+(((/* implicit */int) var_7)));
    }
    var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) << (((16998177550405939535ULL) - (16998177550405939534ULL)))))) ? (((((var_2) + (2147483647))) << (((((/* implicit */int) var_7)) - (32))))) : (((((/* implicit */int) (unsigned short)65530)) << (((/* implicit */int) var_10)))))))));
}
