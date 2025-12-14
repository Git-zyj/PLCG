/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88083
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
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [i_2] [i_0] [i_1] [i_0 + 2] = ((/* implicit */int) arr_2 [(unsigned char)8]);
                    var_18 ^= ((/* implicit */unsigned short) (~((+(((/* implicit */int) max((arr_2 [i_1]), (((/* implicit */unsigned short) var_16)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) ((unsigned char) ((unsigned char) arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1])));
                                var_20 = ((/* implicit */unsigned int) 2448429625878260202LL);
                                var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) arr_3 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (var_7)));
                                arr_15 [i_4] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) max(((-(var_3))), (((/* implicit */long long int) var_11))));
                                var_22 = (unsigned char)40;
                            }
                        } 
                    } 
                    var_23 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((arr_13 [i_0 - 3] [i_0 - 3]), (arr_13 [i_0 - 3] [i_0 - 3])))) ? (((((((/* implicit */int) var_6)) != (((/* implicit */int) arr_7 [i_2] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_0])))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)215))) ^ (var_0))))) : (((((/* implicit */_Bool) (-(arr_13 [i_0] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (arr_8 [i_0] [i_0]) : (((/* implicit */int) (unsigned char)69))))) : (((((/* implicit */_Bool) var_12)) ? (arr_6 [i_2]) : (((/* implicit */long long int) arr_8 [(unsigned char)15] [i_1]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 15; i_6 += 3) 
                        {
                            {
                                arr_20 [i_0] = ((/* implicit */unsigned char) max((9142300465430842296LL), (((/* implicit */long long int) (unsigned char)25))));
                                arr_21 [i_0] [i_1] [i_1] [(signed char)6] [i_6] = ((/* implicit */unsigned int) max(((-(arr_8 [i_0 - 2] [i_0]))), ((+(arr_8 [i_0 - 2] [i_0])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 20; i_7 += 3) 
    {
        for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            {
                var_24 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_26 [i_7] [i_7] [i_8])))) ? (((((/* implicit */_Bool) arr_26 [i_7] [i_8] [i_8])) ? (((/* implicit */int) arr_26 [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_26 [i_8] [i_7] [i_7])))) : (((/* implicit */int) max((arr_26 [i_7] [(signed char)18] [i_7]), (arr_26 [i_7] [i_8] [i_7]))))));
                /* LoopNest 2 */
                for (short i_9 = 1; i_9 < 17; i_9 += 3) 
                {
                    for (signed char i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_11 = 0; i_11 < 20; i_11 += 3) 
                            {
                                arr_33 [i_9] [i_9] = ((/* implicit */long long int) arr_26 [i_9] [(short)12] [i_7]);
                                var_25 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)33389))));
                                var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)138)), (0LL)));
                            }
                            for (unsigned int i_12 = 0; i_12 < 20; i_12 += 2) 
                            {
                                arr_37 [i_9] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_24 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_7] [18U] [i_7] [i_7] [i_7] [i_7] [18U]))) : (var_13))), (((/* implicit */unsigned int) 1253002468))))) ? (((/* implicit */long long int) arr_36 [i_7] [i_8] [i_9 + 3] [i_10])) : (var_3)));
                                arr_38 [i_12] [i_10] [i_9] [i_9] [i_7] [i_7] = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (signed char)(-127 - 1)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (arr_32 [i_9] [i_8] [(unsigned short)4] [(signed char)14] [11] [i_8] [11]) : (var_12))))))), (((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */int) (short)8344)) : (((/* implicit */int) (unsigned char)12))))));
                                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_36 [i_12] [i_8] [i_9 + 1] [i_10]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_7] [i_8] [i_9] [i_12])))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_25 [i_7] [i_7] [i_7])), (arr_36 [i_8] [i_9] [0] [i_12])))) : ((~(18446744073709551597ULL)))))) ? (arr_35 [i_7] [i_7] [i_8] [i_10] [i_8] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_13))))));
                                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_9] [i_7] [(short)3] [i_7] [i_9] [i_7] [i_7])) ? (((/* implicit */int) max((arr_27 [i_9 - 1] [i_9 + 3] [i_9 + 2] [i_9 + 2]), (((/* implicit */signed char) ((((/* implicit */int) var_6)) < (((/* implicit */int) arr_24 [i_12])))))))) : (((((/* implicit */_Bool) ((signed char) var_15))) ? (var_15) : (((/* implicit */int) arr_26 [12LL] [7U] [i_9]))))));
                            }
                            var_29 = ((/* implicit */unsigned short) arr_31 [i_7] [i_8] [17ULL] [i_9] [i_10]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(var_15)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8121)) ? (((/* implicit */int) (short)23845)) : (((/* implicit */int) (signed char)-63))))))))) : (min((max((31ULL), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) 1020U))))));
}
