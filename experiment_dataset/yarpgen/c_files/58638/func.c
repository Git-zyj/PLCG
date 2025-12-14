/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58638
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
    var_20 = ((/* implicit */_Bool) ((int) ((min((((/* implicit */long long int) var_7)), (5774268651920551354LL))) % (((/* implicit */long long int) ((((((/* implicit */int) var_4)) + (2147483647))) >> (((var_2) - (2652708172512202294LL)))))))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) var_19)) - (((/* implicit */int) max((((/* implicit */unsigned char) var_9)), (((unsigned char) (_Bool)1)))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 4] [i_0 + 1]))) / (arr_3 [i_0 + 2] [i_0 + 3] [i_0 + 3])))))));
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((var_0) && (((/* implicit */_Bool) var_19)))))) - (((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_18))))))) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) var_15))))))))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) >> (((((((/* implicit */_Bool) var_4)) ? (arr_6 [i_2 - 1] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) + (526276461572496712LL))))))));
                var_25 &= ((/* implicit */unsigned short) ((long long int) ((short) var_3)));
                arr_8 [i_1] [(unsigned char)15] = ((/* implicit */int) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_17)) : (var_11))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
                arr_9 [i_0] [i_1] [11] [i_2] = ((/* implicit */_Bool) (~((-(arr_3 [i_0 - 1] [i_1 - 2] [i_2])))));
            }
        }
        for (short i_3 = 3; i_3 < 22; i_3 += 3) 
        {
            var_26 ^= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_3] [i_3 - 1]))))) / (((((/* implicit */_Bool) (signed char)-1)) ? (var_2) : (var_12))))));
            var_27 = ((/* implicit */int) var_9);
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_28 &= ((/* implicit */int) (~(arr_7 [i_0 + 1] [i_0 + 3] [i_0 - 1] [i_0 + 3])));
            arr_14 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_18)))) : (arr_13 [i_0 + 2] [(unsigned char)4] [i_0 - 1])));
            var_29 = ((/* implicit */unsigned int) (~(var_2)));
        }
    }
    for (unsigned char i_5 = 2; i_5 < 17; i_5 += 3) 
    {
        var_30 -= ((/* implicit */_Bool) min((min((min((((/* implicit */unsigned int) (_Bool)1)), (var_17))), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_9))))))), (((/* implicit */unsigned int) var_0))));
        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) var_19))));
    }
    /* vectorizable */
    for (unsigned int i_6 = 1; i_6 < 9; i_6 += 3) 
    {
        var_32 = (~(arr_13 [(signed char)13] [i_6] [i_6]));
        arr_21 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6))));
        arr_22 [i_6] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
        var_33 ^= ((/* implicit */unsigned short) (!(var_0)));
        arr_23 [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) var_3))) ? (((/* implicit */long long int) 1595246365)) : (var_14)));
    }
    var_34 ^= ((/* implicit */unsigned short) var_11);
    var_35 ^= ((/* implicit */long long int) ((max((((/* implicit */long long int) var_6)), (var_3))) >= (((/* implicit */long long int) ((/* implicit */int) var_5)))));
}
