/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6888
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
    for (int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 9190412990750606258ULL)) ? (var_10) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))) <= ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (869236681)))))) : ((-(((/* implicit */int) max(((_Bool)0), ((_Bool)1)))))));
        arr_3 [i_0] &= ((/* implicit */unsigned int) ((_Bool) var_10));
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 20; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1 - 1] = (_Bool)0;
        arr_8 [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)9247)) : (((/* implicit */int) (signed char)104)))) | (((/* implicit */int) (_Bool)1))));
    }
    for (long long int i_2 = 3; i_2 < 20; i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */unsigned int) (signed char)26);
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (!((_Bool)1))))))));
        arr_13 [i_2] |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) ((10637880191526197656ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)115)))))), (((var_15) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (!(arr_6 [i_2 + 1])))) : (((/* implicit */int) arr_10 [i_2]))));
        arr_14 [i_2] = ((/* implicit */short) (unsigned short)22223);
    }
    var_18 |= ((/* implicit */long long int) max(((_Bool)1), ((_Bool)1)));
}
