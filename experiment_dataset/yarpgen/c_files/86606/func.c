/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86606
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) 4294967295U))));
        arr_2 [(unsigned short)13] [(unsigned short)13] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))), (((/* implicit */int) min((arr_0 [3ULL]), (arr_0 [i_0]))))))) ? ((-2147483647 - 1)) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) >= (-2051188313))))));
    }
    for (short i_1 = 2; i_1 < 18; i_1 += 4) 
    {
        var_17 = ((/* implicit */short) ((_Bool) 21U));
        var_18 ^= ((/* implicit */int) ((unsigned long long int) (!(arr_1 [7] [i_1 + 1]))));
    }
    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((unsigned short) var_15)), (((/* implicit */unsigned short) var_14)))))));
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_6))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(min((var_2), (var_15)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))))) : (((/* implicit */int) var_13))));
    /* LoopSeq 2 */
    for (short i_2 = 1; i_2 < 20; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 1; i_3 < 20; i_3 += 1) 
        {
            for (unsigned short i_4 = 2; i_4 < 19; i_4 += 4) 
            {
                {
                    arr_12 [i_2] [i_2] = ((/* implicit */int) ((unsigned short) (signed char)(-127 - 1)));
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (+(((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) * (20U)))))))));
                }
            } 
        } 
        var_23 = max((((/* implicit */unsigned long long int) arr_7 [i_2] [i_2] [i_2 + 1])), (arr_11 [i_2] [(short)16] [i_2]));
        var_24 = ((/* implicit */unsigned short) max((((/* implicit */int) ((short) var_1))), (((((/* implicit */_Bool) arr_7 [i_2] [i_2 + 1] [i_2])) ? (((/* implicit */int) (short)(-32767 - 1))) : (arr_6 [i_2 + 1])))));
    }
    for (signed char i_5 = 3; i_5 < 22; i_5 += 4) 
    {
        arr_17 [(unsigned char)11] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_16 [i_5 - 2])))) ? (max(((-(((/* implicit */int) arr_15 [i_5])))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5 + 3]))) != (4294967295U)))))) : (((((_Bool) arr_15 [i_5])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : ((-2147483647 - 1)))) : (((/* implicit */int) (signed char)-116))))));
        arr_18 [8ULL] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [3ULL])) ? (4294967295U) : (((/* implicit */unsigned int) 0))))) ? (((unsigned long long int) arr_13 [i_5])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5 - 2]))))));
    }
}
