/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82392
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    var_11 = ((/* implicit */unsigned long long int) arr_6 [i_0]);
                    var_12 = ((/* implicit */unsigned char) min((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1876098310)) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) arr_7 [i_0 - 2] [0U] [i_0 + 1] [i_0])))))));
                }
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) >= ((((-(arr_8 [i_1]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0])) - (((/* implicit */int) arr_4 [i_1])))))))));
                    arr_12 [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) max((((((((/* implicit */unsigned int) var_4)) - (var_10))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_7)))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */int) var_5)), (var_9))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_0))))))))));
                    var_14 -= ((/* implicit */signed char) (~(min(((~(((/* implicit */int) (signed char)92)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
                    /* LoopSeq 3 */
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        var_15 = ((/* implicit */int) (((+(18446744073709551602ULL))) - (((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) 1876098323)) - (arr_9 [i_0]))))))));
                        arr_15 [3] [i_1] [i_0] [i_4] = ((/* implicit */unsigned char) min((((-5LL) * (((/* implicit */long long int) -1463043604)))), (((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_0 - 2] [i_4] [i_4])))))));
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) ((unsigned long long int) (unsigned short)61478)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_5 [i_1] [i_3] [i_1])))) : ((~(arr_2 [i_0])))));
                        arr_16 [i_3] [i_0] [i_0] [i_1] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_14 [i_0] [5U] [i_3] [i_4]) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))) - (((unsigned long long int) arr_7 [i_4] [i_4] [i_4] [i_0])))) - (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)22701)), (max((var_2), (((/* implicit */int) arr_3 [i_0])))))))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        var_17 ^= ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) -1876098298))))) == (min((((/* implicit */int) (unsigned char)3)), (1876098321))))))));
                        var_18 -= arr_6 [i_3];
                    }
                    for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        var_19 *= ((/* implicit */short) (((!(((/* implicit */_Bool) 1876098310)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) max((var_5), (arr_4 [(unsigned char)8])))), (var_9)))) : (min((((/* implicit */unsigned long long int) min((var_4), (((/* implicit */int) arr_21 [i_6] [i_3] [i_1] [(unsigned short)6]))))), (((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
                        arr_24 [i_0 + 1] [i_0] [i_1] [i_3] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */int) (unsigned char)250)), (var_9))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_5)) + (2147483647))) >> (((((/* implicit */int) var_5)) + (30)))))) || (((/* implicit */_Bool) var_8)))))));
                    }
                    /* LoopSeq 1 */
                    for (int i_7 = 4; i_7 < 17; i_7 += 3) 
                    {
                        var_20 ^= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_1] [i_3] [i_0 - 2] [i_1])) + (((/* implicit */int) (unsigned short)53548))))) / (((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))) ? (var_6) : (((/* implicit */unsigned long long int) ((((arr_2 [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3]))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_21 [i_0] [i_1] [i_0 + 1] [i_1])), (arr_3 [i_1]))))))));
                        var_21 ^= ((/* implicit */unsigned int) min(((((~(arr_9 [i_0 + 1]))) >= (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)53548), (((/* implicit */unsigned short) (short)-10036)))))))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
                    }
                }
                var_22 = ((/* implicit */int) (-((~(((unsigned long long int) arr_4 [i_0]))))));
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_9), (min((var_4), (var_2)))))) ? (((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_9)), (arr_26 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]))) <= (max((arr_25 [i_0]), (arr_19 [i_1])))))) : ((((!(((/* implicit */_Bool) (signed char)33)))) ? (min((2147483646), (((/* implicit */int) arr_23 [i_0 - 2] [3U] [i_1] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */unsigned int) -1953337802)), (var_0))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_10))))))));
    var_25 ^= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_1)))))))) >= (min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)22701)) ? (var_9) : (((/* implicit */int) var_1))))), (var_7)))));
}
