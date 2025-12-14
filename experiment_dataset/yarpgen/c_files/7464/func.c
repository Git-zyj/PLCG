/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7464
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
    var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) var_4))));
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) var_5))));
    var_12 = ((/* implicit */long long int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) (!(var_6))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 1; i_3 < 17; i_3 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
                        {
                            arr_12 [i_0] [i_1] [i_2] [14ULL] [i_4] [i_0] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_7)) : ((-(((/* implicit */int) var_4)))))));
                            arr_13 [i_0] [i_0] [i_0] [(unsigned char)8] = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) / (((/* implicit */int) max((max((((/* implicit */unsigned short) arr_1 [i_3])), (var_7))), (max(((unsigned short)11), ((unsigned short)65503))))))));
                            var_13 = max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_3 [i_3] [i_1])))) <= (var_3)))), (var_3));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
                        {
                            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_9 [8] [i_0] [i_0] [i_0] [i_0] [i_0]) >= (((/* implicit */unsigned long long int) ((unsigned int) var_6)))))))))));
                            arr_18 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((((+(var_2))) >> (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) arr_4 [i_3] [i_3 - 1] [i_3])))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)14519)) != (((/* implicit */int) (unsigned short)20855))))))));
                        }
                        arr_19 [(signed char)2] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) (-(((((((/* implicit */int) arr_6 [1] [1] [i_2] [i_2])) + (2147483647))) >> (((((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_2] [i_3 + 1])) + (34)))))));
                        var_15 = ((/* implicit */unsigned int) var_5);
                        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (~((+(((/* implicit */int) arr_11 [i_0] [i_1 - 1] [i_1] [i_1] [i_0] [i_0])))))))));
                        arr_20 [i_2] [i_1 - 1] [i_1 - 1] [i_1] [i_2] [i_1] &= ((/* implicit */int) ((_Bool) ((((-950299974) + (2147483647))) >> (((((/* implicit */int) (unsigned short)44674)) - (44648))))));
                    }
                    for (int i_6 = 1; i_6 < 17; i_6 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_7))))), (max((((/* implicit */long long int) (unsigned short)32089)), (arr_2 [i_2] [i_2])))))), (((((unsigned long long int) 0ULL)) << (((((long long int) arr_16 [i_7] [i_7])) - (44150LL)))))));
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_0] [i_1]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6] [i_6] [i_1])))))) ? (min((arr_9 [i_0] [i_1] [i_0] [i_6] [i_0] [i_6]), (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_6 + 1] [i_6 + 1] [i_6]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_1 [i_1]) ? (((/* implicit */unsigned int) arr_15 [i_0] [i_1] [i_1] [i_7] [i_7])) : (var_2))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 1])))))))));
                        }
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((arr_4 [i_0] [i_0] [i_2]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_8 [i_6])))))));
                            var_20 += (!(((/* implicit */_Bool) arr_21 [i_1 - 1])));
                        }
                        arr_28 [i_6] [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((short) 82555431));
                        arr_29 [i_0] [i_1 + 1] [i_0] [i_6] [i_2] [i_6] &= ((/* implicit */unsigned char) min((arr_6 [i_0] [i_1] [i_2] [i_6 - 1]), (((/* implicit */signed char) arr_8 [i_0]))));
                    }
                    for (int i_9 = 1; i_9 < 17; i_9 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_17 [i_9] [i_2] [i_1]))));
                        var_22 = ((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2] [(unsigned short)10] [i_9 - 1]);
                        arr_32 [i_9] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (long long int i_10 = 2; i_10 < 16; i_10 += 2) 
                    {
                        arr_36 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_6)) << (((/* implicit */int) arr_8 [i_1 + 1]))));
                        arr_37 [i_0] [i_0] [i_0] [i_10] = ((/* implicit */int) min((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (2149747814U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247)))))) != (((((/* implicit */_Bool) arr_27 [(unsigned char)8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_10] [i_1] [10ULL] [i_10] [i_1 + 1] [i_2]))) : (var_8))))))));
                    }
                    var_23 = ((var_8) << (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-107))))));
                }
            } 
        } 
    } 
}
