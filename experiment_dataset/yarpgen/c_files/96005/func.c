/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96005
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_19 = ((((((((/* implicit */int) (short)-32766)) + (2147483647))) >> (((((/* implicit */int) (signed char)-17)) + (18))))) | (min((((/* implicit */int) (signed char)-17)), (((((/* implicit */_Bool) 6727740014063502659ULL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)238)))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) max((arr_0 [i_0]), (arr_2 [i_0])));
    }
    for (int i_1 = 3; i_1 < 19; i_1 += 1) 
    {
        arr_6 [i_1] [i_1 + 3] = ((/* implicit */unsigned char) arr_1 [i_1] [1]);
        var_20 = ((/* implicit */int) max((max((arr_1 [i_1 + 3] [i_1 - 1]), (7158339651780440591LL))), (max((arr_1 [i_1 - 3] [i_1 + 3]), (((/* implicit */long long int) var_16))))));
        var_21 = ((/* implicit */int) (unsigned char)238);
    }
    var_22 = ((/* implicit */int) var_0);
    /* LoopSeq 2 */
    for (signed char i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
    {
        var_23 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_2]))))) ? ((-(((/* implicit */int) arr_0 [i_2])))) : (((var_11) >> (((((/* implicit */int) (unsigned char)186)) - (177))))))))));
        var_24 = ((/* implicit */unsigned char) ((((max((((/* implicit */unsigned int) (_Bool)1)), (arr_4 [i_2]))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)50)))));
        arr_9 [(short)4] = (short)-6411;
    }
    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
    {
        arr_13 [i_3] = ((((/* implicit */_Bool) (+(((((/* implicit */int) var_13)) - (((/* implicit */int) arr_5 [i_3]))))))) ? (((((/* implicit */int) arr_12 [i_3] [i_3])) >> (((((/* implicit */int) arr_12 [i_3] [i_3])) - (9260))))) : (966415556));
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) == (14283820484913444954ULL))))))));
        var_25 |= ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_5 [i_3])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)218))) + (11989507670490918600ULL))))), (((/* implicit */unsigned long long int) ((((min((-1537500882), (((/* implicit */int) arr_2 [i_3])))) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_3])) - (192))))))));
    }
    var_26 = max((var_16), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_8)), (var_3)))) >= (var_18)))));
}
