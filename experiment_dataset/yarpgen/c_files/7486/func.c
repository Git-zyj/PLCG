/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7486
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                var_13 = ((/* implicit */_Bool) 18446744073709551592ULL);
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)69))) ^ (2659542916U))) / (((/* implicit */unsigned int) (-(((/* implicit */int) var_3)))))))) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) ? ((+((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))))))));
            }
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                arr_11 [i_0] [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 41ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))) : (((/* implicit */int) var_10))));
                arr_12 [i_1] [(unsigned char)17] = ((/* implicit */_Bool) (~((+((+(5ULL)))))));
            }
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6274))) >= (26ULL)));
        }
        for (unsigned char i_4 = 1; i_4 < 21; i_4 += 2) /* same iter space */
        {
            var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)13213), (((/* implicit */unsigned short) (unsigned char)255)))))));
            var_16 -= ((/* implicit */int) ((signed char) 39ULL));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    {
                        arr_21 [i_4] [i_4] [i_0] [i_6] = ((/* implicit */_Bool) var_9);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_5 [18U] [i_4])))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)63))))) : (((((/* implicit */_Bool) 0ULL)) ? (9223372036854775802LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28988)))))));
                            var_18 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
                        }
                        arr_26 [22ULL] |= ((/* implicit */long long int) (+(((((/* implicit */_Bool) 18446744073709551615ULL)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_25 [i_0] [i_0] [i_4 + 1] [17LL] [i_6] [i_6]))))));
                        var_19 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) 1294146157))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_27 [i_8] [i_4] [i_0] [i_0]))));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((1ULL) ^ (((/* implicit */unsigned long long int) 2147483640))))) ? (((((/* implicit */int) var_3)) | (((/* implicit */int) var_0)))) : ((~(((/* implicit */int) (unsigned char)128))))));
            }
        }
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) 18U))));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4158654086U)) && (((/* implicit */_Bool) 0ULL))));
        arr_29 [i_0] [i_0] = arr_24 [i_0] [i_0] [i_0] [i_0];
    }
    /* vectorizable */
    for (unsigned char i_9 = 1; i_9 < 10; i_9 += 2) 
    {
        var_24 = ((/* implicit */long long int) (+(var_7)));
        arr_33 [6LL] = var_11;
    }
    for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
    {
        arr_36 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) (unsigned short)17083)))));
        var_25 *= ((/* implicit */_Bool) ((unsigned int) -1LL));
    }
    var_26 = min((7032684036142170727ULL), (((/* implicit */unsigned long long int) (unsigned short)386)));
}
