/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78062
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
    var_12 &= ((/* implicit */_Bool) var_7);
    var_13 |= ((/* implicit */_Bool) ((((/* implicit */int) var_1)) | (((/* implicit */int) ((signed char) var_2)))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_14 = ((/* implicit */_Bool) max((var_14), (((((((var_7) >> (((/* implicit */int) var_3)))) % (((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned short)12]))))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(signed char)16]))) != (max((((/* implicit */unsigned long long int) (unsigned char)14)), (8617786347432012081ULL)))))))))));
        var_15 ^= ((/* implicit */signed char) max((((unsigned long long int) 2147483647)), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_0 [(unsigned char)4])))))));
        arr_2 [(_Bool)1] &= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [4ULL])) & (((/* implicit */int) arr_1 [i_0])))) - (((/* implicit */int) var_11))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            var_16 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) max((arr_5 [(unsigned char)13]), (arr_6 [i_1] [i_1]))))))));
            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((unsigned long long int) arr_7 [i_1] [i_1] [i_1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_5 [(signed char)0]))))) ? (((/* implicit */int) ((signed char) (unsigned char)232))) : (((/* implicit */int) arr_6 [i_1] [i_2]))))) : (min((((((/* implicit */_Bool) var_10)) ? (2118002859U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-50))))), (((/* implicit */unsigned int) arr_4 [i_1] [i_1]))))));
            arr_8 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2] [i_1])) / (((/* implicit */int) arr_6 [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_6 [i_1] [i_2])))) : (((unsigned long long int) arr_6 [i_1] [i_2]))));
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (+((+(2118002859U))))))));
            var_19 = ((/* implicit */long long int) ((((int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [(_Bool)1] [i_1]))) : (var_9)))) - (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_1))))))));
        }
        /* vectorizable */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            arr_13 [i_1] [i_3] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_3 - 1] [i_3 - 1])) ? (((/* implicit */int) arr_3 [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) (unsigned char)23))));
            arr_14 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_3] [i_3 - 1]))));
        }
        for (signed char i_4 = 1; i_4 < 23; i_4 += 3) 
        {
            var_20 ^= ((/* implicit */unsigned int) ((unsigned short) arr_12 [1LL] [i_4 - 1] [i_4]));
            var_21 ^= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)13))));
        }
        arr_18 [i_1] = ((/* implicit */unsigned char) arr_9 [i_1]);
        arr_19 [i_1] = ((/* implicit */signed char) (+(((arr_15 [i_1] [i_1]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_15 [i_1] [i_1]))))));
        var_22 *= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_1] [i_1])) + (-1897864366)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))) : (arr_10 [i_1])))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (-(((var_5) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5] [i_5]))))))))));
        arr_23 [(signed char)9] [3LL] = ((/* implicit */unsigned short) arr_22 [i_5]);
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (unsigned char)232))));
    }
    for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
    {
        var_25 = ((/* implicit */unsigned short) ((unsigned int) arr_16 [i_6] [i_6]));
        var_26 = ((/* implicit */_Bool) var_4);
    }
}
