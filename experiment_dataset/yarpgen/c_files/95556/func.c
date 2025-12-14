/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95556
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
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_14 ^= ((/* implicit */unsigned int) (-(15264604594208205586ULL)));
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned short) min((((max((var_9), (((/* implicit */unsigned long long int) (_Bool)1)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (max((10214139299795513839ULL), (((/* implicit */unsigned long long int) var_8))))));
                        arr_11 [(_Bool)1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((2878572230U) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [(unsigned char)14])) && (((/* implicit */_Bool) -170108136))))))))) - (((/* implicit */int) (unsigned char)255))));
                        arr_12 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) (unsigned char)0);
                        arr_13 [(unsigned char)1] [i_0] [i_2] = ((/* implicit */unsigned int) max(((_Bool)1), (((_Bool) (!(((/* implicit */_Bool) (signed char)36)))))));
                    }
                    for (unsigned char i_4 = 2; i_4 < 15; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */signed char) var_13);
                        arr_16 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((var_12) <= (((/* implicit */int) var_13)))))))) ? ((+(870955158U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 25ULL))))));
                        /* LoopSeq 1 */
                        for (int i_5 = 1; i_5 < 15; i_5 += 2) 
                        {
                            arr_20 [i_0] [i_0] = ((/* implicit */signed char) (_Bool)1);
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_8 [i_0 + 2] [i_2] [i_0 - 1]))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        arr_25 [i_0] = ((/* implicit */unsigned short) (~(max((((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_0])), (1825677370)))));
                        /* LoopSeq 1 */
                        for (long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) min((max((((-629580782) / (((/* implicit */int) (unsigned char)250)))), (((/* implicit */int) var_8)))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0)))))))))))));
                            var_19 = min((((((/* implicit */int) var_11)) - (((/* implicit */int) arr_22 [i_0] [i_0] [i_0 - 1] [i_1])))), (max(((-(((/* implicit */int) (signed char)24)))), (((/* implicit */int) (unsigned char)248)))));
                        }
                        arr_29 [i_0] [i_1] [9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [(short)8] [i_2] [i_0])) ? (var_1) : (var_4)))) && ((!(((/* implicit */_Bool) var_11))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)239)) || (((/* implicit */_Bool) var_6)))) && ((_Bool)1))))));
                        arr_30 [i_0 - 1] [i_0] [i_2] [(_Bool)1] = ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) (+(var_0)))))));
                    }
                    /* vectorizable */
                    for (short i_8 = 1; i_8 < 15; i_8 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_9 = 0; i_9 < 16; i_9 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_10))));
                            arr_35 [i_0] [i_0 + 1] [(unsigned short)13] [i_0] [(unsigned short)13] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : ((((_Bool)1) ? (((/* implicit */int) arr_18 [6] [i_1] [i_0] [i_9] [i_0] [(_Bool)0])) : (((/* implicit */int) (signed char)36))))));
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) -133139335)) : (arr_27 [i_0] [i_2] [i_0] [i_0 + 2] [8ULL] [i_0]))))));
                            arr_36 [i_8] [i_0] [i_8 - 1] [i_8] [i_8 - 1] [(unsigned short)2] [i_8 - 1] = ((arr_15 [i_9] [i_8] [i_8 - 1] [i_2] [i_0 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_9] [i_8] [i_8 - 1] [i_2] [i_0 + 2]))) : (var_3));
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (unsigned char)65))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_40 [i_0] [i_0 + 2] [i_0] [i_0] [i_0] = arr_19 [i_0 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1];
                            arr_41 [(signed char)11] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_0 - 1] [i_0] [i_0 + 2] [i_0] [i_0 + 1] [i_8 - 1])) ? (((/* implicit */int) ((unsigned char) (short)14594))) : (((/* implicit */int) arr_39 [i_0] [i_0]))));
                            arr_42 [i_0] [i_10] = ((/* implicit */unsigned int) (_Bool)1);
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) var_10)))))));
                        }
                        for (short i_11 = 3; i_11 < 15; i_11 += 2) 
                        {
                            arr_46 [i_0] [(signed char)7] [i_8 + 1] [i_0] = ((/* implicit */unsigned char) ((arr_7 [i_8 - 1] [i_8 + 1] [i_0]) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_7 [i_8 - 1] [i_8 - 1] [i_0]))));
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) var_1))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            arr_49 [10] [10] [i_0] [i_8 - 1] [i_12] = ((/* implicit */unsigned long long int) var_2);
                            arr_50 [i_0] [0U] [i_2] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_8 + 1] [i_8] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1]))) <= (var_3)));
                            var_25 = ((/* implicit */int) 133693440U);
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0 + 2])) >= (((/* implicit */int) var_8)))))));
                            arr_51 [i_0 - 1] [i_1] [(unsigned char)14] [i_0] = ((/* implicit */unsigned char) (!(var_5)));
                        }
                        var_27 = ((/* implicit */_Bool) 3424012135U);
                        arr_52 [i_0] [i_2] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (-(var_10)));
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((unsigned int) ((((var_12) + (2147483647))) >> (((((/* implicit */int) (signed char)111)) - (99))))))));
                    }
                    arr_53 [6] [i_0] [i_0 + 2] = ((((/* implicit */_Bool) (+(((var_13) ? (108094434) : (var_12)))))) ? (((/* implicit */int) ((_Bool) arr_23 [i_0 + 1] [(_Bool)1] [i_0 - 1] [i_0 + 2]))) : (((((/* implicit */int) var_2)) << (((/* implicit */int) (unsigned char)0)))));
                }
            } 
        } 
        arr_54 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((((/* implicit */int) var_6)) / (1477964515))), (((var_7) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) var_2))))))) * (((8796093022207ULL) + (((/* implicit */unsigned long long int) var_4))))));
    }
    var_29 = ((/* implicit */unsigned char) ((var_2) ? (((/* implicit */int) (unsigned short)32767)) : (((((int) var_13)) / (((/* implicit */int) var_8))))));
    var_30 = ((/* implicit */unsigned int) -1743210229);
}
