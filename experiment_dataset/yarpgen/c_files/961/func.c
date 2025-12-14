/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/961
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
    for (short i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        var_15 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (var_8) : (var_1)))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)114))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (1744473571U)))));
        arr_4 [i_0 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1152912708513824768LL)));
    }
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) max((114466967), (((((/* implicit */_Bool) 570924598193964087ULL)) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) (signed char)-113))))))) ? (((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned char)255))))))) : (min((((/* implicit */unsigned int) (+(2147483647)))), (((var_5) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113)))))))));
    var_17 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3938)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
}
