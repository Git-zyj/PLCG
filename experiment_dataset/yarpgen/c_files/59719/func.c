/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59719
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
    var_20 = ((/* implicit */int) ((signed char) var_13));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                var_21 |= var_9;
                arr_9 [i_0] [i_0] &= ((/* implicit */short) (+(((/* implicit */int) var_19))));
                var_22 *= ((/* implicit */unsigned int) ((unsigned short) (unsigned char)7));
                var_23 += ((/* implicit */signed char) max((((/* implicit */int) ((short) arr_8 [i_0 - 1] [i_0 - 2] [i_0 + 1]))), ((+(((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 1] [i_0 + 1]))))));
            }
            /* vectorizable */
            for (short i_3 = 4; i_3 < 21; i_3 += 2) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_4 = 4; i_4 < 22; i_4 += 2) 
                {
                    arr_16 [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_11 [i_4 + 1] [i_3] [i_3 + 2])) : (((/* implicit */int) arr_11 [i_4 - 1] [i_4] [i_3 - 1]))));
                    arr_17 [i_0] = ((/* implicit */long long int) (+(var_18)));
                    arr_18 [i_0] [i_1] [i_3] = ((/* implicit */unsigned short) arr_2 [i_0]);
                }
                for (long long int i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_0] [i_0 + 1] [17] [i_3 - 2] [i_3 - 4] [17])) == (274978851)));
                    var_25 = arr_10 [i_0] [i_1] [i_1] [i_5];
                }
                for (long long int i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
                {
                    arr_24 [i_0] [(signed char)3] [i_3] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_5))) >= (((((/* implicit */int) arr_12 [i_0] [i_1] [i_3] [i_6])) << (((arr_14 [i_0 - 2] [i_1] [i_3] [i_6]) - (6239171000244865127LL)))))));
                    var_26 |= ((/* implicit */unsigned short) var_8);
                    var_27 = ((/* implicit */long long int) arr_22 [i_0] [i_1] [i_0]);
                }
                for (long long int i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) 6741303470743487103ULL))));
                    var_29 = ((/* implicit */short) arr_7 [i_0] [i_3]);
                }
                var_30 |= ((/* implicit */unsigned long long int) -1530471291);
            }
            var_31 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((arr_12 [i_0] [i_1] [i_0] [i_0]) && (((/* implicit */_Bool) var_13))))), (arr_19 [i_0] [i_1] [i_1] [i_1])));
            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((+(arr_6 [i_1] [i_1])))))) ? ((-(min((((/* implicit */long long int) var_6)), (var_14))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_11 [i_0 - 2] [i_0] [i_0 - 2]), (arr_11 [i_0 - 1] [i_0] [i_0 + 1])))))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 23; i_8 += 3) 
            {
                for (short i_9 = 2; i_9 < 20; i_9 += 3) 
                {
                    {
                        var_33 = ((/* implicit */short) arr_5 [i_9] [i_1] [i_0]);
                        arr_34 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) 1139924867U);
                    }
                } 
            } 
            arr_35 [i_0] [i_1] = ((/* implicit */int) 1139924866U);
        }
        for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_11 = 0; i_11 < 23; i_11 += 3) 
            {
                for (unsigned char i_12 = 4; i_12 < 20; i_12 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_13 = 3; i_13 < 19; i_13 += 3) 
                        {
                            arr_46 [(signed char)13] [i_10] [i_10] [i_11] [i_12] [i_13] = ((/* implicit */signed char) var_17);
                            var_34 &= ((/* implicit */unsigned int) var_7);
                        }
                        var_35 *= ((/* implicit */signed char) ((max((((/* implicit */int) arr_45 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12 - 4] [i_12])), (arr_43 [i_12] [i_12] [i_12 + 2] [i_12 - 2] [i_12] [i_12 - 4]))) == (((((/* implicit */_Bool) arr_45 [i_12] [4ULL] [i_12] [4ULL] [i_12] [i_12 - 4] [i_12])) ? (((/* implicit */int) arr_45 [i_12 + 1] [10U] [i_12] [i_12] [i_12 + 2] [i_12 - 4] [i_12])) : (arr_43 [15U] [i_12] [i_12] [i_12] [i_12] [i_12 - 4])))));
                    }
                } 
            } 
            var_36 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(arr_43 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0] [i_0 - 1])))) | (min((((long long int) 4293987548U)), (((/* implicit */long long int) max((var_19), (((/* implicit */short) (_Bool)1)))))))));
        }
        var_37 = ((/* implicit */unsigned int) min((((var_9) >> (((arr_43 [i_0 + 1] [i_0 - 2] [i_0] [i_0 - 1] [15] [i_0]) - (647112344))))), (((((/* implicit */unsigned long long int) (-(4294967292U)))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (arr_1 [i_0])))))));
    }
    var_38 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_7)) ? (-473965655) : (var_8))) : (((/* implicit */int) var_19)))), (((/* implicit */int) var_7))));
}
