/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73639
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
    var_13 = ((/* implicit */long long int) ((unsigned short) var_3));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((var_9) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_11)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_3))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16476)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_15 += ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) ((_Bool) arr_0 [(_Bool)1] [(_Bool)1]))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
        var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0] [2LL])) || (var_11))) ? (((1698285030881770064ULL) ^ (((/* implicit */unsigned long long int) 433437014U)))) : (((/* implicit */unsigned long long int) ((long long int) var_1)))));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) ((unsigned char) arr_2 [i_1]))) : (((/* implicit */int) arr_3 [i_1])))) * (((/* implicit */int) ((_Bool) (_Bool)1)))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            var_17 = ((/* implicit */short) min((((unsigned int) 4934962950258245082ULL)), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_1])))))));
            var_18 = ((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_1])), (((((/* implicit */_Bool) ((unsigned short) arr_8 [i_1] [i_2]))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_7 [i_2]))))));
            arr_9 [i_1] [i_2] = ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (signed char)-36)))), ((-(-552772241)))))) ^ (((unsigned long long int) arr_6 [i_2])));
            var_19 ^= ((/* implicit */unsigned short) 5657893752970535861LL);
        }
    }
}
