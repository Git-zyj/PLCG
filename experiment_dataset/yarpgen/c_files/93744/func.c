/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93744
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) ^ (max((1341986336237947350LL), (((/* implicit */long long int) (signed char)-36)))))) ^ (((/* implicit */long long int) 4294967295U))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */short) ((unsigned short) (unsigned short)65535));
            arr_6 [i_1] = max((((/* implicit */int) (unsigned char)135)), (((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_0)))) + (((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */int) (short)7947)) : (((/* implicit */int) var_11)))))));
            var_16 = ((/* implicit */unsigned long long int) var_13);
        }
    }
    for (long long int i_2 = 3; i_2 < 11; i_2 += 4) /* same iter space */
    {
        arr_9 [i_2 - 1] = ((/* implicit */short) ((((int) ((var_14) ? (-1954862452) : (((/* implicit */int) arr_2 [i_2]))))) != (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_2 + 2]))))) ? (((((/* implicit */int) var_2)) * (((/* implicit */int) arr_3 [i_2] [i_2])))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [i_2])), (arr_1 [i_2] [i_2]))))))));
        var_17 -= ((/* implicit */long long int) min((((arr_2 [i_2 - 2]) ? (((/* implicit */int) arr_2 [i_2 + 3])) : (((/* implicit */int) arr_2 [i_2 + 2])))), (min((arr_4 [i_2 + 1]), (arr_4 [i_2 + 3])))));
        var_18 = 1753771835;
    }
    for (long long int i_3 = 3; i_3 < 11; i_3 += 4) /* same iter space */
    {
        arr_13 [i_3] = ((/* implicit */unsigned short) ((short) 18446744073709551615ULL));
        var_19 &= ((/* implicit */_Bool) ((unsigned short) ((((((/* implicit */_Bool) arr_8 [(_Bool)1])) ? (((/* implicit */int) arr_12 [(signed char)4])) : (((/* implicit */int) arr_0 [i_3])))) & (544615587))));
    }
    var_20 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */unsigned long long int) var_7))))) ? ((+(((/* implicit */int) var_5)))) : (max((((/* implicit */int) var_0)), (-1954862442)))))));
    var_21 ^= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2147483647)), (var_8)))) ? (max((var_1), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))))));
}
