/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69536
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
    var_13 |= ((/* implicit */long long int) var_8);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
        {
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) ((signed char) var_4));
            arr_7 [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (2893909605U)));
            var_14 += ((/* implicit */long long int) ((2893909605U) / (1401057688U)));
        }
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                var_15 *= 18446744073709551615ULL;
                var_16 = ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((((/* implicit */unsigned long long int) var_0)) * (16326552313166884698ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1401057688U)) ? (((/* implicit */unsigned int) var_0)) : (4294967295U)))));
            }
            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) 3013271722U)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)17)))) : (((/* implicit */int) ((signed char) var_1))))))));
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (2893909605U) : (((((/* implicit */_Bool) 2147483648U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (1401057688U)))))) ? (((unsigned long long int) ((unsigned long long int) var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
            var_19 ^= ((/* implicit */int) ((((/* implicit */int) (unsigned short)22144)) == (2147483647)));
            var_20 ^= ((/* implicit */signed char) 2147483648U);
        }
        for (unsigned int i_4 = 1; i_4 < 21; i_4 += 1) 
        {
            var_21 += ((/* implicit */short) max((1401057690U), (((/* implicit */unsigned int) (signed char)-53))));
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2147483665U)) - (((unsigned long long int) var_9))))) ? (((/* implicit */long long int) 0U)) : (((long long int) ((unsigned int) 0ULL)))));
        }
        arr_17 [i_0] &= ((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)10));
        var_23 ^= ((/* implicit */short) ((((((/* implicit */unsigned long long int) 2147483647U)) / (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (4850410555710308213ULL))))) - (((/* implicit */unsigned long long int) ((int) 17739442355618486282ULL)))));
    }
}
