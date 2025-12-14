/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90829
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
    var_18 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : ((-(((/* implicit */int) (short)-21444))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
        var_19 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) 2371893563U)), (arr_0 [i_0] [i_0]))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_0 [i_0] [i_0])))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
        arr_4 [i_0] = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned short) min((((/* implicit */short) min(((_Bool)1), ((_Bool)1)))), (((short) var_4)))))));
    }
    for (signed char i_1 = 1; i_1 < 12; i_1 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */short) ((((_Bool) arr_2 [i_1] [i_2])) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (short)30266))))));
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))));
        }
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
        {
            arr_14 [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_9 [i_1] [i_1] [i_3])) >= (((/* implicit */int) arr_9 [i_1 + 2] [i_1 + 4] [i_1 - 1])))) ? (((/* implicit */int) ((unsigned short) arr_7 [i_3]))) : (arr_1 [i_1])));
            arr_15 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3])) ? (var_7) : (((/* implicit */int) ((short) 4070779381U)))));
            var_23 = ((/* implicit */_Bool) max((var_3), (min((var_3), (((/* implicit */unsigned int) var_10))))));
        }
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
        {
            var_24 -= ((/* implicit */_Bool) ((short) arr_12 [i_1 + 3] [2LL]));
            var_25 = arr_17 [i_1] [i_1];
        }
        /* LoopNest 2 */
        for (unsigned char i_5 = 4; i_5 < 14; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                {
                    var_26 = ((/* implicit */unsigned char) ((_Bool) ((((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1] [i_5]))) : (1122619347U))) & (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)48797)) >> (((/* implicit */int) var_9))))))));
                    arr_24 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 6765974526081700392ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((arr_23 [i_1 - 1]) * (arr_23 [i_1 + 1])))));
                    var_27 = ((/* implicit */unsigned short) ((int) var_9));
                    arr_25 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_1] [i_1])))), (max((var_4), (((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_22 [i_6] [1ULL] [1ULL]))))) : (min((((/* implicit */unsigned long long int) var_8)), (arr_0 [i_1 + 4] [i_5 - 3])))));
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned char) arr_17 [i_1] [i_1]);
    }
    var_29 = ((/* implicit */int) ((signed char) max((((/* implicit */unsigned int) var_9)), (((((/* implicit */unsigned int) -2065082466)) * (var_8))))));
}
