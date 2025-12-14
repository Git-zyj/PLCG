/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59395
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 2; i_2 < 16; i_2 += 4) 
                {
                    var_16 += ((/* implicit */_Bool) (short)2032);
                    var_17 = ((/* implicit */unsigned long long int) var_12);
                    var_18 = ((/* implicit */unsigned char) var_8);
                    arr_9 [i_0] [i_0] [(unsigned short)9] [i_0] = ((/* implicit */int) var_6);
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 4; i_3 < 15; i_3 += 2) 
                    {
                        arr_12 [i_0] = ((/* implicit */int) (_Bool)1);
                        var_19 = ((/* implicit */unsigned char) arr_11 [(signed char)7] [(signed char)7] [i_3 - 3] [i_0]);
                        var_20 = ((/* implicit */int) arr_7 [i_3] [i_3] [i_3] [i_3]);
                        arr_13 [i_0] [i_0] [i_2] [i_2] [i_3] [i_0] = ((((/* implicit */_Bool) (-(arr_3 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [8] [i_2] [i_0]))) : ((-(arr_6 [i_0]))));
                    }
                    for (int i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) (unsigned short)29205)) : (((/* implicit */int) (short)30134))))));
                        arr_17 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_10 [16U])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_2 - 1] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_0])))) + (2147483647))) >> (((arr_3 [i_0] [i_0]) - (4193287156U)))))) : (((/* implicit */signed char) ((((((((((/* implicit */_Bool) arr_10 [16U])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_2 - 1] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_0])))) - (2147483647))) + (2147483647))) >> (((((arr_3 [i_0] [i_0]) - (4193287156U))) - (2416112550U))))));
                        arr_18 [i_0] [i_0] [i_0] [10ULL] = ((/* implicit */unsigned char) 6237297569183392433LL);
                        arr_19 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) arr_14 [i_0] [i_1])))));
                    }
                    for (int i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_2 [i_0] [i_0]))) ? (arr_6 [i_5]) : (((/* implicit */unsigned long long int) var_15))));
                        var_23 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) & (arr_20 [i_2 + 1] [i_2] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1])));
                    }
                    for (int i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */int) arr_3 [i_0] [i_0]);
                        var_25 = ((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2])) ? (var_12) : (((/* implicit */int) (_Bool)1)));
                        var_26 -= ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-120))));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)-66))))) ? (((/* implicit */int) ((var_12) != (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_0]))))) : (((/* implicit */int) (short)-11072))));
                    }
                }
                for (unsigned short i_7 = 1; i_7 < 16; i_7 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (~(((unsigned int) max((arr_6 [i_8]), (arr_26 [i_0] [i_0] [i_9] [i_8])))))))));
                                var_29 = ((/* implicit */signed char) (+(((((long long int) 3891035465U)) & (((/* implicit */long long int) (+(((/* implicit */int) var_4)))))))));
                            }
                        } 
                    } 
                    arr_32 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_7);
                    var_30 = ((/* implicit */signed char) max((4177185145U), (((/* implicit */unsigned int) (signed char)-73))));
                }
                var_31 -= (+(((/* implicit */int) arr_21 [i_0] [i_1] [i_1] [i_1] [i_1])));
                var_32 = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) (+(343732454)))), (15052503019797748699ULL)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 2) 
                {
                    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 8191U)) * (18446744073709551615ULL)))) ? (((var_1) >> (((((/* implicit */int) var_8)) + (140))))) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_10] [i_10] [i_10] [i_1] [i_0])))));
                    arr_35 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((arr_0 [i_1] [i_0]) | (arr_0 [i_1] [i_10])));
                }
                var_34 += ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_1] [i_1] [i_0])) ? (arr_22 [i_0] [i_0] [(short)15] [(short)15]) : (((((_Bool) var_8)) ? (min((((/* implicit */unsigned long long int) arr_14 [(_Bool)1] [i_1])), (var_7))) : ((+(arr_33 [i_0] [i_1] [i_1] [i_0])))))));
            }
        } 
    } 
    var_35 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_7) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */int) (signed char)-23)) : (-2036712192))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)15937)) & (((/* implicit */int) (signed char)-7))))) : (var_10)));
    var_36 = ((/* implicit */unsigned long long int) var_13);
}
