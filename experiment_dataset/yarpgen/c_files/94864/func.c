/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94864
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) arr_0 [i_0]))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (~(min((((/* implicit */int) min((arr_0 [i_0]), (var_7)))), ((~(((/* implicit */int) var_4)))))))))));
    }
    /* LoopSeq 2 */
    for (signed char i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        arr_5 [7ULL] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_3 [i_1])), (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1]))))));
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_20 ^= ((/* implicit */signed char) ((long long int) arr_1 [i_2]));
            var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((signed char) (signed char)(-127 - 1)))), (arr_6 [i_1] [i_1])));
            var_22 = ((/* implicit */unsigned short) ((int) min((((((/* implicit */int) (signed char)8)) - (var_6))), (((/* implicit */int) var_10)))));
        }
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            arr_10 [i_3] = ((/* implicit */signed char) ((unsigned long long int) (-9223372036854775807LL - 1LL)));
            var_23 = ((/* implicit */unsigned long long int) var_4);
        }
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_2 [i_1])) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (unsigned short)30504)))) : (((/* implicit */int) ((unsigned short) arr_8 [i_1] [i_4] [i_4]))))))))));
            var_25 = ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned char) var_3))), (((long long int) arr_8 [i_1] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) ((int) var_14))) ? (((/* implicit */int) arr_4 [(signed char)7])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) && (((/* implicit */_Bool) arr_1 [i_4]))))))) : (max((arr_7 [i_4]), (arr_7 [i_1]))));
            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) max((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)16)), ((unsigned short)0)))), (((((/* implicit */int) ((unsigned short) 9007190664806400ULL))) + (((/* implicit */int) var_3)))))))));
        }
        arr_13 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max(((signed char)63), ((signed char)48))))));
    }
    for (signed char i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
    {
        arr_16 [i_5] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_5])) || (((/* implicit */_Bool) arr_2 [i_5]))))), (min((var_17), (arr_2 [i_5])))));
        var_27 = ((/* implicit */unsigned short) (signed char)120);
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) min((((((/* implicit */int) (signed char)63)) | (((/* implicit */int) arr_12 [i_5] [i_5])))), (((/* implicit */int) min((arr_12 [i_5] [i_5]), (arr_12 [i_5] [i_5])))))))));
    }
}
