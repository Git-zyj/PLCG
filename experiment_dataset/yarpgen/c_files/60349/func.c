/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60349
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
    var_11 = ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(1660714188)))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_0]))) : (((/* implicit */int) (signed char)97))))) ? (((/* implicit */int) ((short) var_5))) : (((/* implicit */int) ((((/* implicit */_Bool) 1023ULL)) || (((/* implicit */_Bool) arr_1 [i_0])))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            var_13 ^= ((/* implicit */signed char) (-(((((/* implicit */_Bool) min((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) var_5))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_0 [i_0] [i_1 - 2]))))))));
            var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_0))));
            var_15 = (unsigned char)157;
            var_16 = ((/* implicit */int) (((+(((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_0])))))) == ((-(((/* implicit */int) max(((unsigned char)144), (((/* implicit */unsigned char) (_Bool)1)))))))));
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                var_17 = max((var_1), (((/* implicit */int) ((signed char) var_1))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) max(((+(((/* implicit */int) ((signed char) arr_5 [i_0] [i_1 - 2]))))), (((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned char)112)) > (((/* implicit */int) arr_1 [i_0])))))))))));
                            var_19 += ((/* implicit */int) (_Bool)1);
                            var_20 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_2 [i_1 - 3] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 3] [i_1 - 3] [4ULL]))) : (6263010803767387957ULL)))));
                        }
                    } 
                } 
                var_21 = 1546618041;
            }
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_22 = ((/* implicit */int) arr_6 [i_0] [i_5] [i_5]);
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0] [(unsigned char)0] [i_5])) >= (((/* implicit */int) arr_11 [i_0] [i_5] [i_5]))));
            var_24 = ((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_5])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)80)))) * (((((/* implicit */int) (unsigned char)162)) ^ (((/* implicit */int) var_5)))));
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            for (unsigned char i_7 = 4; i_7 < 15; i_7 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 16; i_8 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned long long int) (+(arr_4 [i_0] [i_6] [i_6] [(signed char)2])));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (signed char)-31))) == (((var_9) << (((((arr_19 [i_0]) + (1216050508))) - (7)))))));
                    }
                    for (int i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (signed char i_10 = 0; i_10 < 16; i_10 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned short) (-(arr_26 [i_7 + 1] [i_7 + 1] [i_7] [(short)9] [i_7 - 4])));
                            var_28 = ((((/* implicit */_Bool) arr_24 [i_0] [i_7 - 4] [i_7 - 4])) ? (((/* implicit */int) arr_0 [i_7 - 1] [i_6])) : (((/* implicit */int) (unsigned char)145)));
                            var_29 = ((/* implicit */unsigned long long int) ((unsigned short) var_4));
                            var_30 ^= (+(((/* implicit */int) arr_18 [i_6] [(unsigned char)14] [i_7 - 2])));
                        }
                        for (signed char i_11 = 1; i_11 < 15; i_11 += 1) 
                        {
                            var_31 |= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_3)))) >> (((/* implicit */int) ((signed char) (-(((/* implicit */int) var_8))))))));
                            var_32 = (-((+(((/* implicit */int) ((arr_27 [(unsigned short)6] [i_0] [i_0] [(unsigned short)6] [i_7] [i_9] [i_11]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)157)))))))));
                            var_33 = ((/* implicit */_Bool) arr_29 [i_7] [i_7]);
                            var_34 = ((int) (-(((/* implicit */int) var_6))));
                        }
                        for (int i_12 = 0; i_12 < 16; i_12 += 3) 
                        {
                            var_35 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_23 [i_0] [i_6] [i_7] [i_9])) ? (((/* implicit */int) arr_23 [i_0] [i_9] [i_0] [(_Bool)1])) : (((/* implicit */int) arr_31 [i_6] [i_6] [(signed char)10] [(signed char)9] [i_7 - 2] [(signed char)9] [(signed char)6]))))));
                            var_36 = ((/* implicit */short) arr_27 [i_12] [i_12] [i_12] [i_12] [i_12] [i_0] [i_0]);
                        }
                        /* vectorizable */
                        for (signed char i_13 = 0; i_13 < 16; i_13 += 3) 
                        {
                            var_37 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))));
                            var_38 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) arr_36 [i_6] [i_6] [i_6] [i_9] [(signed char)13])))))));
                        }
                        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned char)196))))))) ? ((~(((((arr_35 [i_7] [i_6] [i_7]) + (2147483647))) << (((/* implicit */int) (signed char)0)))))) : (((/* implicit */int) (short)-32747))));
                    }
                    /* vectorizable */
                    for (unsigned char i_14 = 1; i_14 < 15; i_14 += 1) /* same iter space */
                    {
                        var_40 = ((/* implicit */unsigned long long int) var_2);
                        var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [9ULL] [i_6])) * (((/* implicit */int) arr_39 [i_0] [13] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)110)) - (((/* implicit */int) (_Bool)1))))) : (4773974591702822500ULL)));
                    }
                    for (unsigned char i_15 = 1; i_15 < 15; i_15 += 1) /* same iter space */
                    {
                        var_42 = ((/* implicit */unsigned long long int) ((int) ((signed char) var_3)));
                        var_43 &= ((((/* implicit */_Bool) (((+(((/* implicit */int) var_3)))) << (((((/* implicit */int) ((signed char) arr_31 [i_0] [(signed char)0] [(signed char)0] [i_6] [i_7 - 3] [i_15] [(unsigned short)1]))) - (104)))))) ? (min((min((16587814158929409671ULL), (arr_22 [i_0] [i_6] [i_6] [(_Bool)1]))), (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */int) arr_34 [i_0] [i_6] [8] [i_6] [i_15 + 1]))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (short)-256)) && (((/* implicit */_Bool) arr_19 [i_0])))))))));
                    }
                    var_44 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (signed char)52)) : (-1390455794)));
                }
            } 
        } 
    }
    var_45 = max(((signed char)127), (((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) var_0)))))));
    var_46 = ((/* implicit */int) (_Bool)1);
}
