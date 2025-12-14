/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6128
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        var_18 = ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) + (arr_2 [i_0] [i_0])))) ^ (var_1));
        var_19 = ((/* implicit */short) min((var_19), (var_17)));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */short) (+(arr_0 [i_1])));
        var_21 = ((/* implicit */int) arr_1 [i_1]);
    }
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) arr_4 [i_2]);
        arr_8 [i_2] = ((/* implicit */short) min((((((/* implicit */long long int) ((/* implicit */int) (short)17885))) - (-3751619570817659192LL))), (((/* implicit */long long int) arr_6 [i_2] [i_2]))));
        var_23 = ((/* implicit */unsigned long long int) (~((-((+(((/* implicit */int) arr_6 [i_2] [(short)13]))))))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_13)))) ^ (((((/* implicit */int) (short)17885)) ^ (((/* implicit */int) ((arr_10 [i_3] [14]) != (var_10))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 3; i_5 < 12; i_5 += 3) 
                    {
                        var_25 = ((/* implicit */int) ((unsigned int) arr_3 [i_5 - 3]));
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5 - 2]))) : (arr_20 [i_5 + 2] [i_5 + 1] [i_5 + 2] [i_5 - 3])));
                            var_27 &= ((/* implicit */unsigned long long int) arr_21 [i_2] [i_3] [i_5 - 3] [14ULL] [i_6] [(unsigned short)1]);
                            var_28 += var_4;
                            var_29 = ((/* implicit */unsigned int) ((arr_2 [i_5 - 2] [i_3]) < (((/* implicit */long long int) var_9))));
                            var_30 = ((/* implicit */signed char) (~(((/* implicit */int) (short)17885))));
                        }
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [(signed char)5] [i_3] [i_4] [i_5 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2] [i_3] [2] [i_5]))) : (3257237124U)));
                        var_32 = ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_14 [i_2] [i_2]))))) + (arr_7 [i_2])));
                    }
                    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) arr_4 [i_3]);
                        var_34 ^= ((/* implicit */unsigned short) max((3751619570817659191LL), (((/* implicit */long long int) var_8))));
                        var_35 ^= ((/* implicit */short) var_12);
                    }
                    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (int i_9 = 1; i_9 < 12; i_9 += 4) 
                        {
                            arr_29 [5LL] [5LL] [i_4] [i_8] [i_9] = min((min((min((((/* implicit */unsigned long long int) 458816571U)), (arr_19 [i_2] [i_4] [i_8] [i_9 - 1]))), (((/* implicit */unsigned long long int) -3751619570817659192LL)))), (((/* implicit */unsigned long long int) ((short) min((((/* implicit */unsigned int) arr_6 [i_8] [i_9])), (var_9))))));
                            var_36 = ((/* implicit */unsigned short) arr_4 [i_2]);
                            var_37 |= ((/* implicit */unsigned long long int) arr_13 [i_9] [(_Bool)1] [(_Bool)1]);
                            var_38 += max((min((772555382481737998ULL), (((/* implicit */unsigned long long int) arr_26 [i_9 + 1])))), (((/* implicit */unsigned long long int) arr_18 [i_2] [i_3] [i_2] [i_4] [i_8] [i_9])));
                        }
                        for (long long int i_10 = 0; i_10 < 15; i_10 += 2) 
                        {
                            var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) arr_6 [i_2] [i_8])), (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_6 [i_4] [i_8]), (arr_6 [i_4] [i_3]))))) : (((unsigned int) var_5))));
                            arr_33 [i_2] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) << (((arr_32 [i_4]) - (613965464U)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_3] [i_4] [i_8] [1U]))) : (((((/* implicit */_Bool) arr_32 [i_10])) ? (((/* implicit */long long int) 803276621U)) : (var_0))))));
                            var_40 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)0))));
                            var_41 = ((/* implicit */_Bool) ((((/* implicit */int) var_15)) / (((int) 3491690675U))));
                        }
                        var_42 = max((max((min((var_1), (((/* implicit */unsigned long long int) var_16)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_9 [i_8] [i_8])), (var_15)))))), (((/* implicit */unsigned long long int) max((arr_23 [i_2] [i_3] [(unsigned short)10] [i_8] [i_2]), (((/* implicit */unsigned int) var_17))))));
                    }
                    var_43 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) <= (arr_19 [i_3] [i_3] [i_3] [i_3])))) : (((/* implicit */int) var_8)))) == (((/* implicit */int) ((unsigned short) ((unsigned long long int) -3751619570817659187LL))))));
                }
            } 
        } 
    }
    var_44 = ((/* implicit */unsigned char) min((((/* implicit */short) (signed char)95)), (max((((/* implicit */short) (!(((/* implicit */_Bool) 9358453475330047221ULL))))), (var_16)))));
}
