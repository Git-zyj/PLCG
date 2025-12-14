/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64951
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
    var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
    var_13 = ((/* implicit */short) var_3);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_6 [2LL] [i_1] [i_0] [8] = ((/* implicit */_Bool) (~(((/* implicit */int) min(((_Bool)1), (arr_5 [i_0 - 1] [i_1] [i_2]))))));
                    var_14 ^= ((/* implicit */int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned short)0)))), ((+(((/* implicit */int) arr_2 [i_2]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 2] [i_0 + 1])) != (((/* implicit */int) (signed char)17)))))) : (((unsigned int) arr_3 [i_0] [(signed char)7] [i_0]))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 7; i_3 += 1) 
                    {
                        arr_9 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)41)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))));
                        arr_10 [i_3 - 1] [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0 + 1]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            arr_14 [i_0 - 1] [i_1] [i_0 - 1] [i_0] [i_4] = ((/* implicit */signed char) var_8);
                            arr_15 [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)19130))));
                        }
                    }
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_6 = 1; i_6 < 6; i_6 += 1) 
                        {
                            arr_21 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 799809498U)) ? (arr_7 [i_0] [i_1] [i_2] [i_5]) : (((/* implicit */unsigned long long int) min((arr_3 [i_0] [i_6 + 1] [i_6]), (((/* implicit */long long int) (signed char)-17)))))));
                            arr_22 [i_0] [i_0] [i_2] [i_5] [i_2] [i_1] [i_5] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_8 [i_0] [i_6 + 4] [i_2] [i_0 - 1]))));
                            var_15 = ((/* implicit */short) 499002092U);
                            var_16 = ((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) arr_8 [i_0 + 1] [(_Bool)1] [i_2] [i_6 + 2])))));
                        }
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            arr_25 [i_0] [0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) (~(arr_18 [i_0 - 1] [i_0] [i_0 + 2] [i_0] [(signed char)3])));
                            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (-(arr_16 [4U] [(unsigned short)5] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]))))));
                            arr_26 [i_1] [i_2] [i_5] [i_0] = ((unsigned int) arr_16 [i_0] [6] [i_2] [i_5] [i_0 + 2] [(signed char)5]);
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_31 [6ULL] [i_5] [i_8] |= ((/* implicit */unsigned int) (((((_Bool)0) ? (((((/* implicit */_Bool) 947426866776274532ULL)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-43))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) & (min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)240))) / (arr_17 [i_0] [i_1] [i_2] [i_5]))), (((/* implicit */long long int) 2149861227U))))));
                            arr_32 [i_0] [i_1] [i_2] [i_5] [i_0] [i_5] [i_8] = ((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_2] [i_5])) <= (((/* implicit */int) arr_5 [i_0] [(unsigned char)5] [1ULL]))));
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (+(8570769995616710516ULL))))));
                        }
                        arr_33 [i_0] [i_1] [i_2] [8ULL] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) (_Bool)1)))));
                        arr_34 [i_0] = ((/* implicit */short) max(((-((~(((/* implicit */int) arr_2 [i_0])))))), (((/* implicit */int) ((signed char) arr_13 [i_0] [i_0] [i_0 + 2] [i_0] [i_0] [i_0 - 1] [i_0])))));
                    }
                    for (signed char i_9 = 4; i_9 < 8; i_9 += 2) 
                    {
                        arr_39 [i_0] = ((/* implicit */unsigned char) arr_12 [i_0 - 1] [5] [2] [5] [5U]);
                        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((unsigned char) max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65520))))), (((unsigned int) (signed char)16))))))));
                        arr_40 [i_0] [i_9 - 1] = ((/* implicit */unsigned short) arr_29 [i_0 + 2] [i_0 + 2] [i_2] [i_2] [i_9]);
                    }
                    arr_41 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) (((~(((arr_35 [i_2] [i_1] [i_1] [0ULL] [i_0] [0ULL]) >> (((arr_16 [i_0] [i_0] [i_0] [i_0] [(signed char)8] [(_Bool)1]) - (31140897U))))))) <= (min((((/* implicit */unsigned int) min((arr_2 [i_0]), ((signed char)0)))), (((((/* implicit */_Bool) (unsigned short)62303)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1])))))))));
                }
            } 
        } 
    } 
}
