/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98167
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
    var_13 = (-(min((((/* implicit */long long int) min((((/* implicit */short) var_3)), (var_10)))), (((((var_5) + (9223372036854775807LL))) << (((/* implicit */int) var_8)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            arr_4 [i_1] = ((/* implicit */_Bool) ((long long int) var_1));
            arr_5 [0LL] [i_1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) ((_Bool) var_8)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((arr_0 [i_1]), (((/* implicit */short) arr_2 [i_1] [i_0]))))) : (((/* implicit */int) arr_1 [(_Bool)1]))))));
        }
        for (long long int i_2 = 2; i_2 < 14; i_2 += 3) 
        {
            arr_9 [i_0] = 7301512356975452874LL;
            arr_10 [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */short) min(((((((-(arr_3 [i_0] [i_0]))) + (9223372036854775807LL))) << (((/* implicit */int) var_4)))), (((/* implicit */long long int) (-(((/* implicit */int) max((var_11), (((/* implicit */short) arr_2 [i_0] [i_0]))))))))))) : (((/* implicit */short) min(((((((((-(arr_3 [i_0] [i_0]))) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((/* implicit */int) var_4)))), (((/* implicit */long long int) (-(((/* implicit */int) max((var_11), (((/* implicit */short) arr_2 [i_0] [i_0])))))))))));
            arr_11 [(_Bool)1] [(_Bool)1] &= ((/* implicit */short) ((min((((/* implicit */long long int) max((arr_1 [(short)10]), (var_4)))), (((var_8) ? (arr_3 [10LL] [10LL]) : (arr_6 [i_0] [(short)0] [i_0]))))) != (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_7 [i_0]))), (((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
            arr_12 [i_0] [i_2] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0] [i_0]))))), (var_1)))) ? (((max((((/* implicit */long long int) arr_1 [i_0])), (7794095976195328211LL))) << (((((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) + (arr_6 [i_0] [i_0] [i_0]))) + (3510476315309471015LL))) - (36LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_6 [i_2 + 2] [i_0] [i_0])) ? (-7794095976195328223LL) : (-7794095976195328211LL))))))))) : (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0] [i_0]))))), (var_1)))) ? (((max((((/* implicit */long long int) arr_1 [i_0])), (7794095976195328211LL))) << (((((((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) + (arr_6 [i_0] [i_0] [i_0]))) - (3510476315309471015LL))) - (36LL))) - (3330974839544250850LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_6 [i_2 + 2] [i_0] [i_0])) ? (-7794095976195328223LL) : (-7794095976195328211LL)))))))));
        }
        /* LoopSeq 3 */
        for (short i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            arr_15 [i_0] = (-(((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)-29915))))));
            arr_16 [i_3] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */int) min((arr_2 [i_3] [(short)7]), (arr_2 [i_0] [i_3])))) | (((/* implicit */int) ((_Bool) (~(var_5)))))));
            arr_17 [i_0] = ((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) ? (((/* implicit */int) arr_2 [i_3] [i_0])) : (((/* implicit */int) arr_2 [(_Bool)1] [(_Bool)1]))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_3] [i_3]))));
            arr_18 [i_0] [i_3] = (i_0 % 2 == 0) ? (((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (var_7)))) ? (((7301512356975452874LL) << (((((((/* implicit */int) arr_0 [i_0])) + (17332))) - (15))))) : (var_6))), (min((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */long long int) (_Bool)1))))))) : (((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (var_7)))) ? (((7301512356975452874LL) << (((((((((((/* implicit */int) arr_0 [i_0])) + (17332))) - (15))) + (8428))) - (35))))) : (var_6))), (min((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */long long int) (_Bool)1)))))));
            arr_19 [i_3] [i_0] [i_3] = ((/* implicit */short) var_8);
        }
        for (long long int i_4 = 2; i_4 < 14; i_4 += 4) 
        {
            arr_22 [i_0] [i_0] = ((long long int) ((((/* implicit */int) arr_2 [i_4 + 1] [i_4 - 2])) >> (((/* implicit */int) (_Bool)1))));
            arr_23 [i_0] = ((/* implicit */short) ((((((/* implicit */int) arr_13 [i_0] [i_4 - 2] [i_0])) * (((/* implicit */int) arr_13 [i_0] [i_4 + 1] [i_0])))) != (((/* implicit */int) arr_13 [i_0] [i_4 - 1] [i_0]))));
            arr_24 [i_4] [i_4] |= ((/* implicit */_Bool) (((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-4))) != (arr_6 [2LL] [i_4] [2LL])))))) * (((((/* implicit */_Bool) arr_14 [i_0] [i_4 - 1] [i_4 - 2])) ? (((/* implicit */int) ((_Bool) var_3))) : ((+(((/* implicit */int) var_3))))))));
            arr_25 [i_0] = ((/* implicit */short) (+(max((((((/* implicit */_Bool) arr_21 [i_4] [i_4] [(short)2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_21 [i_4 + 2] [i_4] [i_0]))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))))));
        }
        /* vectorizable */
        for (long long int i_5 = 1; i_5 < 15; i_5 += 4) 
        {
            arr_28 [i_0] [i_0] [i_5] = var_7;
            arr_29 [i_0] = ((/* implicit */long long int) ((var_5) != (((/* implicit */long long int) (+(((/* implicit */int) arr_13 [i_0] [i_0] [i_0])))))));
        }
        arr_30 [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_20 [i_0] [i_0])) ? (arr_20 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
    }
    var_14 = ((/* implicit */short) var_9);
}
