/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88334
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
    var_10 = ((/* implicit */unsigned int) var_4);
    var_11 -= ((/* implicit */unsigned short) var_1);
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        var_12 |= ((/* implicit */unsigned int) min(((signed char)61), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)16854)) != (((/* implicit */int) var_4)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 2) /* same iter space */
        {
            var_13 += ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 3] [i_1 + 2])) ? (arr_3 [i_0] [i_0 - 2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2])))))) + ((-(5615376074431610418ULL))));
            var_14 += ((/* implicit */short) ((max((((/* implicit */unsigned long long int) arr_3 [i_0 - 2] [i_0] [(signed char)2])), (arr_2 [i_0 - 3] [i_1 - 3]))) / ((-(min((((/* implicit */unsigned long long int) arr_3 [i_0] [17ULL] [i_1 - 1])), (arr_0 [i_0])))))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 2; i_2 < 16; i_2 += 1) /* same iter space */
            {
                arr_6 [13U] [i_1 - 1] [i_2] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) min((15194422274403318571ULL), (((/* implicit */unsigned long long int) ((((-1) + (2147483647))) << (((((/* implicit */int) (unsigned char)255)) - (255)))))))))));
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((4294967278U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1]))))))));
                arr_7 [i_1] [(unsigned char)0] [i_2] [i_2 + 2] = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)61))) + (arr_0 [i_1 + 2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_4 [i_0] [i_1] [i_2]), (((/* implicit */unsigned char) (signed char)0))))) ? (((((/* implicit */_Bool) (short)31763)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (9223372036854775807LL))) : ((-9223372036854775807LL - 1LL)))))));
                var_16 = ((/* implicit */unsigned char) ((arr_0 [i_2 + 2]) / (((/* implicit */unsigned long long int) arr_3 [i_0] [4LL] [i_2 + 1]))));
            }
            for (unsigned char i_3 = 2; i_3 < 16; i_3 += 1) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_4)) % (((/* implicit */int) var_0))))) & (((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_4)))) && (((/* implicit */_Bool) arr_1 [i_0 + 1])))))) : (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) ((-9223372036854775785LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_3 - 2]))))))))));
                arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == ((~(12831367999277941201ULL)))));
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (min((((12831367999277941222ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4032))))), (((5615376074431610418ULL) >> (((((/* implicit */int) (signed char)-73)) + (117))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14838849438527878294ULL)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))) : (arr_3 [i_1 + 1] [i_0 - 3] [i_0 - 3])))))))));
                var_19 = arr_5 [i_0 + 3] [i_1 - 3] [i_3 + 1];
                var_20 += ((/* implicit */short) ((((/* implicit */_Bool) 3607894635181673322ULL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)61)))));
            }
        }
        for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 2) /* same iter space */
        {
            arr_15 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 - 3] [i_0 - 4] [i_0 - 2])) ? (((/* implicit */int) arr_11 [i_0] [i_0 + 1] [i_0 + 2])) : (((/* implicit */int) arr_4 [i_0] [i_0 + 2] [i_4 - 2])))))));
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((arr_12 [i_0] [i_4]) + (9223372036854775807LL))) >> ((((~(14838849438527878294ULL))) - (3607894635181673305ULL))))))));
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0 - 3] [i_0 - 3] [i_4]))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [(unsigned char)3])), (-9223372036854775765LL))))))) >> (((min((arr_13 [i_0 + 2] [i_0 + 2] [i_4 + 3]), (arr_13 [i_4] [i_4] [i_4 - 3]))) + (5665872652097659959LL))))))));
            var_23 = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((12831367999277941197ULL), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_4] [i_4]))))) ? (min((((/* implicit */long long int) (signed char)46)), (var_2))) : (min((((/* implicit */long long int) var_1)), (1099511627775LL))))), (-19LL)));
            var_24 = ((/* implicit */short) (((!(((arr_3 [i_0 - 2] [i_0 + 1] [i_0 - 2]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_4 + 1] [i_4 + 3]))))))) ? (max((arr_5 [i_0 + 2] [i_4 - 3] [i_4 + 2]), (arr_5 [i_0 + 2] [i_4 - 3] [i_4 + 2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)24440)) ? (((/* implicit */int) arr_11 [i_0 - 1] [i_4 - 3] [i_4 + 3])) : (((/* implicit */int) arr_11 [i_0 + 1] [i_4 - 1] [i_4 - 2])))))));
        }
    }
}
