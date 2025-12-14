/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97929
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
    var_10 = (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(var_5)))) + (((8673172731487289602ULL) + (((/* implicit */unsigned long long int) 1026163319))))))));
    var_11 = ((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) * (var_3)));
    var_12 += ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        arr_4 [i_0] = arr_1 [i_0];
        arr_5 [(signed char)9] = var_7;
        arr_6 [i_0] = ((/* implicit */unsigned short) ((arr_0 [i_0 + 3] [i_0 + 2]) == (arr_0 [i_0 + 3] [i_0 - 1])));
    }
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned long long int) var_0);
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            var_13 = ((/* implicit */int) ((((/* implicit */unsigned int) (~(arr_0 [i_2] [i_2])))) >= ((+(((((/* implicit */_Bool) arr_11 [i_2] [1ULL] [3U])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_2])))))))));
            var_14 = ((/* implicit */unsigned long long int) arr_1 [i_2]);
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            arr_15 [8LL] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_10 [i_1] [(signed char)11]))) == (((/* implicit */int) arr_12 [i_1] [i_1]))));
            var_15 = ((/* implicit */unsigned int) ((arr_13 [i_3] [i_3] [i_1]) % (((/* implicit */int) arr_11 [i_1] [i_1] [i_1]))));
            var_16 *= ((/* implicit */short) ((var_9) >> (((arr_0 [2U] [i_3]) - (1028962459)))));
            /* LoopNest 2 */
            for (unsigned char i_4 = 2; i_4 < 12; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    {
                        arr_22 [i_4] [i_3] [i_4] [(_Bool)1] = (-((+(-7894216380538969997LL))));
                        /* LoopSeq 3 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_17 -= ((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_4 - 1] [i_5 + 1]))));
                            var_18 = ((/* implicit */unsigned int) -1026163320);
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            arr_27 [i_1] [i_1] [i_4] [i_5] [i_7] = ((/* implicit */_Bool) arr_12 [i_1] [i_1]);
                            arr_28 [i_1] [i_1] [i_7] [(short)9] [i_4] [i_1] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [6U] [i_1] [i_1]))))) * ((~(-1026163322)))));
                        }
                        for (int i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            arr_31 [i_8] [i_8] [i_8] [i_4] [(unsigned short)6] [3U] = ((/* implicit */signed char) (~(arr_21 [i_4] [i_4 + 2] [i_4] [i_4])));
                            arr_32 [i_4] [i_3] = ((/* implicit */unsigned short) arr_25 [i_5] [i_5 + 1] [i_4] [i_4] [2] [(signed char)6]);
                        }
                        arr_33 [i_5] [i_4] [i_4] [i_4 + 2] [i_4] [3ULL] = arr_14 [i_5] [1U] [i_1];
                        var_19 = arr_7 [i_1] [i_1];
                    }
                } 
            } 
        }
    }
}
