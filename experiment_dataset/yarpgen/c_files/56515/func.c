/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56515
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
    var_14 = ((/* implicit */unsigned short) (~(var_0)));
    var_15 = ((/* implicit */int) var_2);
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((((/* implicit */int) var_3)), (var_10)))), ((~(max((var_0), (((/* implicit */unsigned int) var_13))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (+(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_3 [i_1] [22ULL])) : (((/* implicit */int) var_11)))))))));
            arr_5 [i_0] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        }
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
        {
            var_18 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((var_4) || (((/* implicit */_Bool) var_10))))) : (((/* implicit */int) var_11)));
            var_19 |= ((/* implicit */int) ((arr_6 [0] [0]) || (((/* implicit */_Bool) var_8))));
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)7))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_6 [i_0] [i_0]))));
            var_21 -= ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0 - 3] [i_0])) * (((/* implicit */int) var_4))));
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */_Bool) var_3);
            arr_12 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_10 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0 - 2] [i_0]))));
            /* LoopSeq 2 */
            for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
            {
                var_23 *= ((/* implicit */_Bool) ((unsigned char) arr_2 [i_3]));
                var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) arr_2 [i_3]))));
            }
            for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0 - 3] [i_0 - 3])) | (((/* implicit */int) arr_16 [14ULL] [i_3]))));
                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (~(var_9))))));
            }
            var_27 ^= arr_17 [i_0] [i_3] [i_3];
        }
        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) /* same iter space */
        {
            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (((+(arr_13 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0 - 3]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) != (var_8))))))))));
            var_29 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_19 [i_0]))));
        }
        arr_21 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (16103985998059733398ULL) : (((/* implicit */unsigned long long int) ((820359239U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)38))))))))) ? (((/* implicit */unsigned long long int) 4294967276U)) : (18446744073709551615ULL)));
    }
    /* vectorizable */
    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) 
    {
        arr_26 [i_7] = ((/* implicit */unsigned short) var_8);
        var_30 = ((/* implicit */short) arr_16 [(unsigned char)22] [i_7]);
        arr_27 [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_7] [i_7]))));
        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((arr_6 [i_7] [i_7]) || (((/* implicit */_Bool) (signed char)96)))))));
    }
    var_32 ^= ((/* implicit */unsigned short) var_12);
}
