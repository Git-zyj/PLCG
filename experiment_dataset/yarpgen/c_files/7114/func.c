/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7114
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
    var_13 = ((/* implicit */signed char) (-(((((/* implicit */int) var_3)) / (((/* implicit */int) var_10))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (short i_4 = 1; i_4 < 11; i_4 += 3) /* same iter space */
                            {
                                arr_15 [(short)8] [(short)8] [i_2] [(short)8] [i_2] |= ((/* implicit */_Bool) ((unsigned short) arr_0 [i_0 + 1]));
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-30048)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_1])) : (((((/* implicit */int) (short)-1)) % (((/* implicit */int) (short)15562))))));
                            }
                            /* vectorizable */
                            for (short i_5 = 1; i_5 < 11; i_5 += 3) /* same iter space */
                            {
                                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_5 + 1] [i_2])) ? (((/* implicit */int) (short)-15562)) : (((/* implicit */int) (short)30048))));
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_9))));
                            }
                            for (short i_6 = 1; i_6 < 11; i_6 += 3) /* same iter space */
                            {
                                arr_21 [i_0] [i_0] [i_1 + 1] [i_0] [i_2] [i_3] [i_6] = ((/* implicit */short) (signed char)101);
                                var_17 += ((/* implicit */short) (signed char)-26);
                                var_18 ^= ((/* implicit */unsigned short) min(((+(((/* implicit */int) (signed char)124)))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)7005)) : (((/* implicit */int) (signed char)-69))))) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_3] [i_3])) : (((/* implicit */int) (signed char)50))))));
                            }
                            /* LoopSeq 2 */
                            for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) 
                            {
                                var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((short)-7006), (arr_16 [i_0] [i_1 - 1] [i_2] [i_3] [(signed char)10]))))))) ? (((((/* implicit */int) max((((/* implicit */unsigned short) (short)30038)), (arr_13 [i_0] [i_1 - 1] [(short)2])))) / (arr_11 [i_7] [i_7] [(unsigned short)0] [(unsigned short)0] [i_1] [i_0]))) : (((/* implicit */int) (signed char)-50))));
                                arr_24 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_22 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_1 + 1]))) || (((/* implicit */_Bool) ((long long int) (_Bool)0)))));
                                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (unsigned short)7913))));
                                var_21 = ((/* implicit */signed char) arr_19 [i_0] [i_1] [(short)8] [i_1] [i_7] [i_1] [i_7]);
                            }
                            /* vectorizable */
                            for (long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                            {
                                arr_28 [i_0] [i_0] [i_2] [i_3] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) (short)32074)) * (((/* implicit */int) arr_12 [i_0 - 3] [i_0] [i_0 - 2] [i_0 - 3] [(signed char)10] [i_1]))));
                                arr_29 [i_0] [i_1] [i_2] [i_3] [i_0] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [(unsigned short)0] [(short)4])) & (((/* implicit */int) arr_22 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_1 + 1] [i_0 - 2]))));
                            }
                            var_22 = ((/* implicit */signed char) max((max((((((/* implicit */int) (signed char)-72)) / (((/* implicit */int) (short)-24636)))), (((/* implicit */int) max((var_7), (((/* implicit */short) var_3))))))), (((((/* implicit */int) min((((/* implicit */unsigned short) arr_22 [i_0] [i_1] [i_3] [i_3] [i_3])), ((unsigned short)0)))) >> (((((/* implicit */int) min(((unsigned short)65236), (var_4)))) - (58735)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    for (signed char i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        {
                            var_23 -= ((/* implicit */unsigned short) (((+(((/* implicit */int) (signed char)-126)))) != (((/* implicit */int) max(((unsigned short)36693), ((unsigned short)18176))))));
                            var_24 &= ((/* implicit */signed char) min((((((/* implicit */_Bool) 2080606529)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (signed char)-27)))), (((/* implicit */int) (short)-1))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) (signed char)-120);
}
