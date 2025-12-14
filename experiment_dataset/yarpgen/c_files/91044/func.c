/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91044
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
    var_13 = ((/* implicit */unsigned int) ((((min((((/* implicit */int) ((signed char) 4194303))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-27253)))))) + (2147483647))) >> (((2363117149865345364LL) - (2363117149865345335LL)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) < (0U))) && (((/* implicit */_Bool) (short)5415))));
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_2 [i_0] [i_0])))))))));
        arr_4 [(signed char)17] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_0 - 3] [i_0 + 2]))));
        arr_5 [9ULL] = ((/* implicit */unsigned char) ((((int) (_Bool)1)) ^ (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) arr_2 [i_0] [i_0]))))));
        var_15 *= ((/* implicit */int) ((((/* implicit */int) (short)13529)) != (((/* implicit */int) (short)-24122))));
    }
    var_16 = ((/* implicit */unsigned char) ((long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)7072))))))));
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1555415998)) ? (max((((((/* implicit */_Bool) (short)384)) ? (((/* implicit */unsigned long long int) -540229336416560990LL)) : (16767294745014140645ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)178)) >= (-6)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25912)))));
}
