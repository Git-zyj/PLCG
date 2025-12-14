/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59259
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
    var_12 = ((/* implicit */long long int) (unsigned short)0);
    var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) ((var_4) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)0))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned short)6), ((unsigned short)65535)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2ULL))))) : (((/* implicit */int) (signed char)84)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned char)63)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [4])))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        arr_6 [8ULL] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1]))))) ? (min((arr_0 [i_1] [i_1]), (arr_0 [i_1] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_5 [i_1])))));
        arr_7 [i_1] = ((/* implicit */unsigned short) max((arr_0 [i_1] [i_1]), (((/* implicit */unsigned int) ((arr_0 [i_1] [i_1]) != (arr_0 [10LL] [i_1]))))));
        arr_8 [16LL] &= ((/* implicit */unsigned int) min((arr_4 [6LL]), ((-(var_10)))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
    {
        var_15 &= ((/* implicit */unsigned int) 2689988761756592082ULL);
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_2]))))) ? (min((((/* implicit */unsigned int) arr_4 [14LL])), (var_11))) : (((/* implicit */unsigned int) ((1970506641) >> (((/* implicit */int) var_6)))))))) ? ((+(((/* implicit */int) (unsigned short)65529)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65529))))))))));
        arr_11 [i_2] = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535)))))))), (arr_0 [i_2] [i_2]));
        arr_12 [(_Bool)1] &= ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65529)))))) != (((((/* implicit */_Bool) arr_4 [10U])) ? (((/* implicit */long long int) arr_4 [(signed char)8])) : (arr_10 [i_2]))));
    }
    var_17 = ((/* implicit */int) max((var_17), ((~(((/* implicit */int) var_3))))));
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (+(((/* implicit */int) var_9)))))));
}
