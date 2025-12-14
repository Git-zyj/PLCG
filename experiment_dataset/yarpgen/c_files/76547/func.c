/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76547
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
    var_19 -= ((/* implicit */short) var_11);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((-5720670527087211958LL) - (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)(-127 - 1))))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_2))) : (((unsigned int) 125805744U)))))))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((11ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))) ? (min((((/* implicit */int) arr_2 [i_0])), (((var_3) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_0)))))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_5 [i_0] [i_0] &= ((/* implicit */short) (signed char)62);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) ((9223372036854775807LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-126)))));
        var_21 ^= ((unsigned int) ((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21503))) : (var_6)));
        arr_9 [i_1] = ((/* implicit */short) var_18);
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            var_22 -= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)-111))));
            arr_14 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)84))));
            arr_15 [i_2] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_13 [i_2]))));
        }
        for (unsigned short i_3 = 3; i_3 < 9; i_3 += 2) 
        {
            var_23 = ((/* implicit */unsigned short) arr_6 [i_1]);
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_3 - 3] [i_3 - 3])))))));
            var_25 &= ((/* implicit */unsigned int) (unsigned short)4223);
            arr_18 [i_1] [i_3] [i_3 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)65505))));
        }
    }
    for (signed char i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_4])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)118)))));
            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (+(((((/* implicit */int) var_1)) + (((/* implicit */int) var_18)))))))));
            arr_25 [i_5] [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_13))));
        }
        arr_26 [i_4] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_4] [i_4])) ? (1676966668U) : (min((var_17), (((/* implicit */unsigned int) var_8))))))) >= (((long long int) ((((/* implicit */_Bool) 216172782113783808LL)) ? (((/* implicit */int) arr_0 [i_4] [i_4])) : (((/* implicit */int) arr_3 [i_4])))))));
        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_7)))) / ((+(max((((/* implicit */unsigned int) (signed char)-119)), (16777215U))))))))));
        var_29 *= ((/* implicit */short) min((((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4]))) : (var_17))), (((/* implicit */unsigned int) arr_20 [i_4]))));
        var_30 = ((/* implicit */long long int) (unsigned short)21517);
    }
}
