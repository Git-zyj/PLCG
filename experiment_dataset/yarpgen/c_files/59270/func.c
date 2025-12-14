/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59270
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (min((((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */unsigned long long int) var_1)))), ((-(var_4)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) (+(arr_8 [i_1 - 1] [i_1 - 1] [i_1 + 1])));
                    var_21 += ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 131071ULL)))))));
                    var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_1 + 1]))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [(_Bool)1])))));
        arr_9 [i_0] [(_Bool)1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 8381709066651707834ULL))));
        var_24 = ((/* implicit */short) ((unsigned int) var_9));
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            var_25 = ((/* implicit */short) (+(((/* implicit */int) arr_1 [i_0]))));
            var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */int) arr_2 [i_0] [i_3] [i_3])) : (((/* implicit */int) (!(var_9))))));
            var_27 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_16))));
            /* LoopNest 2 */
            for (long long int i_4 = 2; i_4 < 10; i_4 += 4) 
            {
                for (long long int i_5 = 1; i_5 < 9; i_5 += 4) 
                {
                    {
                        var_28 = ((/* implicit */unsigned short) ((arr_16 [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5 - 1]) + (((/* implicit */unsigned long long int) var_1))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            var_29 += ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) << (((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [9ULL]) + (2014594443)))));
                            arr_24 [i_0] [i_3] [i_4 - 2] [i_4 - 2] [i_6] = ((/* implicit */unsigned long long int) ((short) ((unsigned char) var_14)));
                        }
                        arr_25 [6LL] [i_4] [6LL] [(short)4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((arr_13 [(_Bool)1] [i_4] [i_4]) ? (((/* implicit */int) arr_5 [i_0] [i_3])) : (arr_23 [i_3] [i_3] [i_3] [i_5] [(short)9] [i_0])))) : (((((/* implicit */_Bool) 8381709066651707814ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_0)))));
                    }
                } 
            } 
        }
        for (signed char i_7 = 2; i_7 < 9; i_7 += 4) 
        {
            arr_28 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_3);
            arr_29 [i_0] [i_7 - 2] = ((/* implicit */long long int) (!(arr_27 [i_0] [2LL] [i_7])));
            var_30 = ((/* implicit */long long int) (+(((/* implicit */int) arr_21 [i_7 - 2] [i_7 - 1]))));
        }
    }
}
