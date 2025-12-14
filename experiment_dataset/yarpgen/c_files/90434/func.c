/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90434
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = var_0;
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) 9720456482570878814ULL))) ? (((/* implicit */long long int) ((/* implicit */int) ((12222462142569700906ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (arr_0 [i_0] [6U])));
        var_10 = ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (9396375186602896532ULL) : (var_0)));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            var_11 *= ((/* implicit */_Bool) ((signed char) 9720456482570878814ULL));
            arr_9 [i_0] = ((/* implicit */signed char) 10337392120107153102ULL);
            var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_4) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0]) != (arr_2 [(short)5]))))) : (8726287591138672794ULL)));
            arr_10 [i_0] = ((/* implicit */_Bool) (+(arr_6 [i_0])));
            arr_11 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) -23LL)) ? (arr_2 [i_1]) : (10337392120107153102ULL))));
        }
    }
    var_13 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
    var_14 = ((/* implicit */unsigned char) 165539121U);
    var_15 = ((/* implicit */unsigned long long int) var_9);
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12222462142569700906ULL)) ? (6549806643307995288ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31)))))) ? (max((var_2), (18446744073709551615ULL))) : (((unsigned long long int) (-(((/* implicit */int) var_6))))));
}
