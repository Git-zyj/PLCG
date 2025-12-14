/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91900
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_0 [3LL] [i_0])))) && (((/* implicit */_Bool) var_1))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (arr_0 [i_0 + 2] [i_0 + 2]))))));
    }
    for (int i_1 = 1; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_3 [i_1 - 1]))))));
        arr_6 [i_1] = ((/* implicit */unsigned int) arr_5 [i_1]);
        arr_7 [i_1] = ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_1 + 3]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 1]))) : (((unsigned int) arr_3 [i_1 + 3])));
    }
    for (int i_2 = 1; i_2 < 21; i_2 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [i_2 + 2]))));
        arr_10 [(unsigned char)2] |= ((/* implicit */unsigned int) ((unsigned short) min((arr_5 [i_2]), (((/* implicit */unsigned char) (!(var_0)))))));
        arr_11 [i_2] = ((/* implicit */unsigned int) (((~(max((arr_8 [i_2]), (arr_8 [i_2]))))) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2])) || (((/* implicit */_Bool) (unsigned short)3330))))))))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_4 [i_2 + 1]), (-1284619117)))) ? (((var_9) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 669396737)) ? (((/* implicit */int) var_0)) : (arr_4 [i_2])))))) : (arr_8 [i_2 + 1])));
        arr_12 [i_2] = ((/* implicit */unsigned long long int) -669396737);
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 21; i_3 += 4) /* same iter space */
    {
        var_20 |= ((/* implicit */unsigned int) ((unsigned char) arr_13 [i_3 + 3]));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                {
                    var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)27371)) ? (((/* implicit */unsigned int) arr_4 [i_3 + 2])) : (((unsigned int) (signed char)121))));
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((((/* implicit */int) ((signed char) (signed char)-125))) + (2147483647))) << (((((/* implicit */int) arr_9 [i_3 + 2] [i_3 + 3])) - (69))))))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49326))) : (-6838902777224642639LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_3] [i_3 + 3] [6LL] [(unsigned char)9]))))))));
    }
    var_24 *= ((/* implicit */unsigned int) var_14);
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) var_7)) << (((((unsigned int) 281474976710655ULL)) - (4294967290U)))))));
}
