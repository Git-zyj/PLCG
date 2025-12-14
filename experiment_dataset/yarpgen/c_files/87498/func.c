/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87498
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
    var_20 = ((/* implicit */long long int) ((((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (var_0)))) / (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)153)))))) >> (((((((/* implicit */int) var_0)) | (((/* implicit */int) var_7)))) - (143)))));
    var_21 = ((((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) (unsigned char)0)))) + (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (var_9))) : (((/* implicit */int) var_13)))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_22 = ((/* implicit */signed char) min((((/* implicit */int) min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))), (((((/* implicit */_Bool) 546996419)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)0))))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 13848406348402380153ULL)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
    }
    for (unsigned short i_1 = 2; i_1 < 11; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 11; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                {
                    var_24 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (min((((/* implicit */int) arr_3 [i_1 - 1] [i_2])), (((((/* implicit */_Bool) arr_5 [(unsigned short)0] [i_2 - 1])) ? (((/* implicit */int) arr_6 [i_3])) : (((/* implicit */int) var_17)))))) : (((/* implicit */int) max((max((arr_0 [i_1] [i_2 - 2]), (((/* implicit */unsigned short) var_19)))), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) >= (arr_7 [i_1])))))))));
                    arr_9 [i_3] [4ULL] [i_2 - 2] [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_2 - 1])) ? (arr_5 [i_2] [(unsigned short)4]) : (((/* implicit */unsigned long long int) var_9))))));
                }
            } 
        } 
        var_25 += ((/* implicit */short) var_17);
        var_26 &= ((/* implicit */long long int) (+((~(((/* implicit */int) (signed char)124))))));
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_1] [i_1])) << (((((/* implicit */int) max((var_0), (arr_4 [i_1] [i_1 + 1])))) - (169)))));
    }
    for (unsigned short i_4 = 1; i_4 < 18; i_4 += 4) 
    {
        arr_12 [i_4] = ((/* implicit */unsigned char) min((-4759598792951326652LL), (((/* implicit */long long int) 3854496931U))));
        arr_13 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17622110109810945546ULL)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) arr_10 [i_4 - 1]))))) ? (((/* implicit */int) ((1436335445U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4 - 1])))))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_10 [i_4 - 1])), ((unsigned char)224))))));
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_4 + 1])) * ((+(((/* implicit */int) arr_11 [i_4]))))));
        arr_14 [i_4] [i_4] = ((/* implicit */unsigned int) arr_10 [i_4 + 1]);
        arr_15 [i_4] = ((/* implicit */long long int) 358111355);
    }
}
