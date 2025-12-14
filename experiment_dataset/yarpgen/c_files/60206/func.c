/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60206
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
    var_20 = ((/* implicit */long long int) var_11);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_5 [(_Bool)1])) ? (((/* implicit */int) arr_3 [i_1 + 2] [i_0])) : (((/* implicit */int) (unsigned char)37))))));
            arr_6 [1] [(signed char)7] [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_13))))));
        }
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_9))));
    }
    for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */signed char) ((unsigned char) (signed char)77));
        /* LoopNest 3 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (signed char i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_6 = 3; i_6 < 13; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */long long int) (unsigned char)42);
                            var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
                        }
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            arr_23 [i_7] [(signed char)0] [i_3] [i_4] [i_3] [i_3 - 1] [i_2] = ((/* implicit */long long int) min((var_8), ((unsigned short)65037)));
                            arr_24 [i_3] = ((/* implicit */unsigned int) var_18);
                        }
                        for (int i_8 = 2; i_8 < 14; i_8 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) (-((~((+(((/* implicit */int) arr_26 [i_2] [i_3] [i_4] [i_2] [i_3]))))))));
                            var_26 &= ((/* implicit */int) (((((((~(((/* implicit */int) (unsigned short)65015)))) + (2147483647))) << (((((((/* implicit */int) (unsigned char)211)) << (((((/* implicit */int) (unsigned short)63863)) - (63860))))) - (1688))))) >= (max((((((/* implicit */int) var_9)) % (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)211))))))));
                            var_27 = ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) >= (((/* implicit */int) max((arr_13 [(_Bool)1] [i_3 - 1] [i_3] [i_8 - 1]), (arr_13 [i_2] [i_3 - 1] [i_3] [i_8 - 2])))));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            arr_29 [i_3] [i_4] [i_3 - 1] [i_3] = ((/* implicit */unsigned int) ((unsigned char) var_19));
                            arr_30 [i_9] [i_3] [i_4] [i_4] [i_3] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(arr_7 [i_2])))), ((~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7592))) : (arr_15 [i_2] [i_2] [i_9] [i_5])))))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 2) 
                        {
                            arr_34 [i_2] [i_3 - 1] [(unsigned char)10] [i_3] [i_10] = ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) ((arr_31 [i_4] [i_3 - 1] [i_2]) ? (((/* implicit */int) (short)7592)) : (((/* implicit */int) (unsigned short)65001))))))));
                            arr_35 [i_10] [i_10] [i_3] [i_2] [i_10] [i_3 - 1] = ((/* implicit */unsigned char) var_2);
                        }
                        /* LoopSeq 2 */
                        for (long long int i_11 = 0; i_11 < 15; i_11 += 2) 
                        {
                            var_28 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-97))))) * (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((long long int) var_12))))));
                            var_29 = ((/* implicit */long long int) (+(((527352493) - (((/* implicit */int) (unsigned short)31028))))));
                            var_30 = (unsigned char)195;
                            var_31 ^= ((/* implicit */unsigned char) 3276315767U);
                            arr_38 [i_11] [i_2] [i_4] [i_3] [i_11] &= ((/* implicit */int) max((min((((/* implicit */long long int) (short)-187)), (4412991508183646963LL))), (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) var_17))))))));
                        }
                        for (unsigned short i_12 = 2; i_12 < 14; i_12 += 2) 
                        {
                            arr_42 [i_12] [i_5] [i_3] [i_4] [i_3] [i_3 - 1] [i_2] = ((/* implicit */signed char) ((((_Bool) ((((/* implicit */_Bool) (unsigned short)65037)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240)))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)68))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) (unsigned short)520)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9))))))));
                            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3] [i_3 - 1] [i_12] [i_4])) ? (max((((/* implicit */long long int) (unsigned char)72)), (7963894661985910675LL))) : ((~((~(arr_18 [i_2])))))));
                            var_33 *= max((min((max((var_1), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) arr_14 [i_2] [i_3])))), (var_17));
                        }
                        arr_43 [i_3] [i_2] [i_4] [i_4] = ((/* implicit */unsigned int) (((((+(((/* implicit */int) (short)-29830)))) + (2147483647))) << (((((/* implicit */int) ((short) (unsigned char)205))) - (205)))));
                    }
                } 
            } 
        } 
    }
}
