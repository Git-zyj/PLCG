/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88627
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
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                var_10 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_0 + 2])) ? (arr_4 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)213))))), (min((((/* implicit */long long int) (_Bool)1)), (arr_4 [i_0 - 1])))));
                var_11 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min(((unsigned char)51), (((/* implicit */unsigned char) (_Bool)0))))), (min((((/* implicit */unsigned long long int) arr_1 [i_2])), (16273481824737439134ULL)))));
                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0 - 3] [i_0 - 1])) >= (((/* implicit */int) (_Bool)1))));
            }
            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((+(arr_2 [i_0 - 3])))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)2041)))) : (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) < (arr_5 [i_1])))) & (((/* implicit */int) var_1))))));
            arr_8 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned short) (unsigned char)47)), ((unsigned short)0)));
        }
        arr_9 [i_0 + 2] [i_0 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)44305)) ? ((+((~(((/* implicit */int) (short)-2029)))))) : (((/* implicit */int) (unsigned short)0))));
    }
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        arr_14 [i_3] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */int) (unsigned char)181))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3] [i_3]))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)91))) | (var_7))))), (((/* implicit */long long int) min((arr_12 [i_3]), (arr_12 [i_3]))))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 3; i_4 < 18; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 4; i_7 < 18; i_7 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */int) min(((short)-21538), (((/* implicit */short) (_Bool)1))));
                                arr_27 [i_3] [(signed char)4] [(_Bool)1] [i_3] = ((/* implicit */unsigned short) ((_Bool) (-(((arr_0 [(short)21]) ? (((/* implicit */int) (short)2041)) : (((/* implicit */int) (unsigned short)56822)))))));
                                var_16 = ((/* implicit */unsigned short) (-(max((arr_13 [i_3]), (((/* implicit */unsigned int) -722632900))))));
                                arr_28 [i_3] [i_3] [i_5] [i_3] [i_7] = ((((/* implicit */int) arr_10 [i_3])) * (((/* implicit */int) (signed char)-123)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 1; i_8 < 18; i_8 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned char) min((877076316), (max((((((/* implicit */_Bool) arr_24 [i_3] [i_3] [i_3] [i_5] [i_8])) ? (((/* implicit */int) (unsigned char)92)) : (((/* implicit */int) arr_23 [i_4 - 2] [i_4] [i_5] [(unsigned short)9] [(unsigned short)12])))), (((/* implicit */int) (unsigned char)69))))));
                        arr_31 [i_4] [i_3] = ((/* implicit */_Bool) min((((/* implicit */int) min((arr_23 [i_4 - 3] [i_8 + 1] [i_4 - 3] [(signed char)9] [i_8]), (arr_23 [i_4 - 2] [i_8 + 1] [i_5] [i_8] [i_4 - 1])))), ((~(((/* implicit */int) arr_23 [i_4 + 1] [i_8 + 1] [i_5] [i_4] [i_8]))))));
                        arr_32 [i_5] [i_3] [i_3] = ((/* implicit */_Bool) ((min((3137253893U), (3137253892U))) % (((/* implicit */unsigned int) (~(((/* implicit */int) arr_26 [i_3] [i_4] [(unsigned char)7] [i_3] [i_8 + 1])))))));
                        var_18 = (-(((((/* implicit */_Bool) var_7)) ? (arr_11 [16ULL] [16ULL]) : (((/* implicit */int) arr_22 [i_8] [(_Bool)1] [(_Bool)1] [i_3])))));
                    }
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned char) var_5);
}
