/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69358
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
    var_17 = ((/* implicit */signed char) ((((((((/* implicit */int) var_13)) <= (((/* implicit */int) var_9)))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_0)))) > (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4231)) ? (((/* implicit */int) arr_4 [i_0] [(short)8])) : (((/* implicit */int) (_Bool)0))))) ? (((var_8) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_5 [i_0] [i_0])))) : ((~(((/* implicit */int) (unsigned char)222))))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (short i_3 = 1; i_3 < 8; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-60)) : (((/* implicit */int) (unsigned char)36)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)45182))))))))));
                            var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_4] [i_2] [i_2] [i_1]))));
                        }
                        var_21 *= ((/* implicit */unsigned short) ((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1 - 1] [i_1 + 1] [i_3 - 1] [1LL]))) : (((var_12) - (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((var_9) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) var_6)))) : (((var_14) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) (signed char)-26))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 1; i_5 < 9; i_5 += 4) 
                        {
                            arr_20 [i_0] [(short)10] [i_0] [i_3] [i_5] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (-1562466459) : (((/* implicit */int) var_14))));
                            var_23 -= ((/* implicit */unsigned long long int) (-(1048129338U)));
                            arr_21 [1U] [i_1] [i_1 - 1] [i_2] [i_5] [i_5] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) var_0)))) % ((~(((/* implicit */int) (unsigned char)219))))));
                        }
                        for (unsigned char i_6 = 2; i_6 < 10; i_6 += 4) 
                        {
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((var_9) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2] [i_2])))))))))));
                            var_25 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL))));
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_10 [i_0] [i_3 + 1] [i_1 - 1] [i_6 - 1])))))));
                            var_27 -= ((/* implicit */unsigned char) (((((_Bool)0) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)223))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_6] [i_1] [i_6] [i_6] [i_6] [(short)5] [i_3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_16)))))));
                        }
                        arr_24 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_3 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_1 [(signed char)8])))));
                    }
                } 
            } 
            arr_25 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)15)) != (((/* implicit */int) (signed char)106))));
            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [(short)8] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)(-127 - 1)))))) || (((/* implicit */_Bool) ((var_11) & (var_11))))));
            var_29 ^= ((var_12) % (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_1 - 3] [i_1] [i_0] [i_0]))));
        }
        arr_26 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)16984))));
    }
}
