/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76034
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
    for (long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        arr_4 [(unsigned short)9] = ((/* implicit */long long int) ((max((((unsigned int) var_15)), (var_16))) == (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)57518)) >> (((((/* implicit */int) (unsigned char)240)) - (222))))) ^ (((/* implicit */int) (unsigned char)45)))))));
        arr_5 [i_0] [(short)2] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((signed char) var_10))) ? (var_6) : (((/* implicit */unsigned long long int) ((var_0) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)45)))))))), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_11)))) != (((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned short) var_11))))))))));
    }
    for (int i_1 = 1; i_1 < 18; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
        {
            arr_11 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)154))) ^ (0ULL)))) ? (((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_9))) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_9 [i_2])) + (2147483647))) >> (((var_12) - (1197374228))))))))));
            arr_12 [(unsigned short)21] [i_2] &= ((/* implicit */long long int) min((((((/* implicit */_Bool) 1752265931U)) ? (3301489637158565004ULL) : (((/* implicit */unsigned long long int) max((5582172191348901481LL), (((/* implicit */long long int) -148767094))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)21))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((long long int) arr_6 [(signed char)20])))))));
        }
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
        {
            arr_16 [18LL] = ((((/* implicit */_Bool) arr_7 [(_Bool)1])) ? ((-(((/* implicit */int) arr_8 [i_3] [i_3] [i_1 + 3])))) : ((+(((/* implicit */int) arr_8 [(signed char)18] [i_1 + 4] [(signed char)4])))));
            arr_17 [i_3] [(unsigned short)12] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) (short)21573))))), (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 90355865))))), (min((822275720U), (((/* implicit */unsigned int) (short)32767))))))));
            arr_18 [i_3] [i_3] = ((/* implicit */unsigned int) arr_9 [(signed char)1]);
        }
        for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            arr_21 [i_1] [(unsigned short)11] [i_4] = ((/* implicit */short) ((int) arr_14 [(_Bool)1] [i_1 + 1]));
            arr_22 [(unsigned char)10] [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) (unsigned char)45)))));
        }
        arr_23 [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) var_15)), (((unsigned short) (~(((/* implicit */int) var_8)))))));
        arr_24 [(signed char)9] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)45)))))), (max((arr_10 [i_1 - 1]), (arr_10 [i_1 + 1])))));
    }
    var_17 = ((/* implicit */short) max(((~(((int) var_11)))), (((/* implicit */int) var_4))));
    var_18 = ((/* implicit */unsigned long long int) var_5);
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) 7379238886656121740LL)) ? (2943776323U) : (((/* implicit */unsigned int) 527831692))));
}
