/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97041
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 3; i_3 < 13; i_3 += 4) 
                    {
                        var_10 = ((/* implicit */unsigned long long int) 3484471487U);
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_11 = ((/* implicit */unsigned short) max((var_11), ((unsigned short)65519)));
                            var_12 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_5 [(short)12] [i_3] [i_2] [(short)12])))), (((/* implicit */int) var_3))))) == (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (var_8))) - (((/* implicit */unsigned long long int) 1706307108U))))));
                            var_13 = ((/* implicit */signed char) ((7018479846899995968ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18081)))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
                        {
                            var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_3 [i_0] [i_2 - 3] [i_2 - 3]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65519))))))));
                            var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) || (((((((/* implicit */_Bool) arr_5 [i_5] [i_3] [i_1] [i_5])) || (((/* implicit */_Bool) var_4)))) || (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_5] [i_2] [i_3] [i_0])) && (((/* implicit */_Bool) var_1))))))));
                            var_16 = max((((int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [(signed char)13] [i_1] [i_3 + 2] [i_0]))) - (-7672160719701916979LL)))), (((((_Bool) 4240811085205693602ULL)) ? ((~(arr_2 [i_0]))) : (((((/* implicit */_Bool) 7672160719701916978LL)) ? (((/* implicit */int) arr_9 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
                        {
                            var_17 = ((/* implicit */int) ((((arr_6 [i_3 + 1] [i_6] [i_6] [(unsigned char)0]) & (arr_6 [i_3 + 2] [i_6] [i_3] [i_3 + 2]))) - (max((-2985529918167046531LL), (((/* implicit */long long int) 3739105072U))))));
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)132)), (((((/* implicit */_Bool) arr_9 [i_0] [i_6])) ? (arr_12 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_6])))))))) ? (((/* implicit */long long int) ((int) ((arr_0 [i_6]) < (((/* implicit */long long int) 555862214U)))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_6] [i_6]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_6 [i_0] [i_6] [(_Bool)1] [i_6]))))))));
                            var_19 = ((/* implicit */short) 2147483647);
                        }
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            arr_19 [i_0] [i_0] [i_2] [i_2 + 1] [i_0] [1] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0])) ? (arr_6 [i_3 + 1] [i_0] [i_0] [i_2 + 3]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                            var_20 |= ((/* implicit */unsigned char) ((unsigned int) (unsigned short)65519));
                            var_21 ^= ((/* implicit */int) var_9);
                        }
                        arr_20 [12LL] [i_1] [i_0] = arr_13 [i_0] [i_0] [i_3];
                    }
                    for (int i_8 = 1; i_8 < 13; i_8 += 2) 
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) arr_22 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0]);
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [10LL] [i_0] [i_1] [i_0]))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65519))) & (arr_15 [i_0] [i_1] [i_0] [i_2] [i_8] [i_8 + 3]))) == (((/* implicit */unsigned long long int) 8100418296198378347LL))))) * (((/* implicit */int) var_1))));
                    }
                    var_24 = ((/* implicit */unsigned short) ((((long long int) -534082230)) > (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) max(((_Bool)1), ((_Bool)1)))), (var_3)))))));
                    var_25 = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_23 [(_Bool)1] [i_0] [i_2])), (arr_12 [i_0])));
                }
            } 
        } 
    } 
    var_26 |= ((/* implicit */unsigned short) var_2);
}
