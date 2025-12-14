/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62017
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
    for (short i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (+(((/* implicit */int) arr_2 [i_0])))))) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) arr_2 [i_0]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            arr_8 [i_1] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_1])) < (((/* implicit */int) arr_2 [i_1 + 2])))))));
            var_11 = ((/* implicit */short) 9223372036854775807LL);
            var_12 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_3 [(unsigned short)2])) : (((/* implicit */int) (signed char)17))))));
        }
        for (short i_2 = 3; i_2 < 6; i_2 += 1) 
        {
            var_13 = ((/* implicit */signed char) ((int) max((((((/* implicit */_Bool) 4705706684175723531LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))) : (arr_6 [(short)1] [i_2]))), (((((/* implicit */_Bool) var_6)) ? (arr_6 [i_0] [i_0 - 1]) : (((/* implicit */unsigned long long int) 4294967295U)))))));
            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_6 [i_0] [i_2]) - (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_2 [i_0 - 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_0])) ^ (((/* implicit */int) arr_5 [i_0] [2LL] [i_0]))))) ? (((/* implicit */int) (short)-32753)) : (((/* implicit */int) arr_0 [i_2 - 1])))) : ((~(((((/* implicit */int) arr_3 [(short)8])) / (((/* implicit */int) arr_5 [(short)9] [i_0 + 1] [i_0 + 1])))))))))));
            arr_13 [i_2] = ((/* implicit */unsigned int) arr_0 [i_0]);
        }
        for (unsigned long long int i_3 = 2; i_3 < 8; i_3 += 3) 
        {
            arr_18 [i_3] [i_3 - 2] [i_3 - 2] = ((/* implicit */unsigned int) ((min((max((arr_15 [i_0]), (arr_0 [i_0]))), ((!(((/* implicit */_Bool) arr_6 [i_0] [i_3])))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)62)))))));
            arr_19 [i_3 + 2] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_7 [i_0 - 1] [i_0] [i_3]))));
            var_15 += ((/* implicit */unsigned long long int) min((717613135U), (((/* implicit */unsigned int) (short)-28175))));
            var_16 += ((/* implicit */unsigned long long int) (-(min((min((var_6), (((/* implicit */long long int) (short)-26658)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */int) arr_7 [i_3] [i_0] [i_0])) : (((/* implicit */int) arr_16 [i_0 - 1])))))))));
        }
    }
    for (unsigned short i_4 = 2; i_4 < 15; i_4 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)101)) % (arr_21 [i_4 - 2])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_4 - 2])) ? (((/* implicit */int) arr_22 [i_4 - 2])) : (((/* implicit */int) arr_22 [i_4 - 2]))))) : (((long long int) (~(1013279279U)))))))));
        arr_23 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((-(((/* implicit */int) (short)16980)))) & (((/* implicit */int) arr_20 [i_4 - 2]))))) ? (((((/* implicit */_Bool) arr_22 [i_4])) ? (((unsigned int) (unsigned short)2705)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [(unsigned char)1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)63)), (arr_21 [i_4])))) && (((/* implicit */_Bool) arr_20 [i_4]))))))));
        var_18 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_1), (arr_22 [i_4 - 1]))))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((4294967288U), (((/* implicit */unsigned int) (short)-2352))))) && (((/* implicit */_Bool) var_9))));
    }
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) var_1))))) / (max((((/* implicit */long long int) var_4)), (var_3)))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    var_21 = var_4;
}
