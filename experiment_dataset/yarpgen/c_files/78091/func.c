/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78091
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
    var_16 = ((/* implicit */unsigned int) (!(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) == (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) var_14)) : (var_0)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) arr_5 [i_0] [9LL] [i_0]);
                    arr_7 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (-(((max((var_1), (((/* implicit */unsigned int) (short)-16300)))) * (((/* implicit */unsigned int) var_14))))));
                }
            } 
        } 
        var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (min((((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (arr_1 [i_0])))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) arr_0 [(unsigned char)3] [(unsigned short)9])))))) : (((/* implicit */int) (unsigned char)177))));
    }
    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        arr_10 [i_3] = ((((((/* implicit */_Bool) -1901603592)) && (((/* implicit */_Bool) (short)16305)))) ? (((((/* implicit */_Bool) 5259123996310304545LL)) ? (((/* implicit */int) arr_4 [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_4 [i_3] [i_3] [i_3] [i_3])))) : (((/* implicit */int) min((arr_0 [i_3] [i_3]), (((/* implicit */unsigned char) arr_4 [i_3] [i_3] [i_3] [i_3]))))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_8))) ? (min((((((/* implicit */_Bool) (short)16299)) ? (((/* implicit */long long int) arr_3 [i_3])) : (5259123996310304553LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)8176))))))) : (((((/* implicit */_Bool) var_4)) ? (max((((/* implicit */long long int) 701210542U)), (arr_2 [12U] [i_3]))) : (((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */long long int) 3593756742U)) : (var_2))))))))));
        arr_11 [i_3] = ((/* implicit */unsigned char) arr_9 [i_3]);
    }
}
