/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83190
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
    /* vectorizable */
    for (int i_0 = 1; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */int) (-(var_5)));
        var_21 += ((unsigned int) (-(arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 1; i_1 < 13; i_1 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */short) min((((((/* implicit */int) (unsigned char)163)) | (((/* implicit */int) (unsigned short)56313)))), (((/* implicit */int) ((unsigned char) 2147483636)))));
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) (((-(arr_2 [i_1 - 1]))) << ((((~(((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))))))) + (7269513205338539608LL)))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? ((-(max((((/* implicit */unsigned long long int) var_11)), (11629193627390689696ULL))))) : (((/* implicit */unsigned long long int) (-(max((arr_0 [i_1]), (((/* implicit */long long int) (unsigned char)83)))))))));
    }
    var_23 = ((/* implicit */unsigned short) ((6563225958040846567ULL) / ((+(11883518115668705047ULL)))));
}
