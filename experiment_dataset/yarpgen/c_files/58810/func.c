/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58810
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            var_11 = ((/* implicit */_Bool) min((var_11), (((((/* implicit */int) arr_6 [(unsigned char)14] [i_1 - 1] [i_0])) > (((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_1]))))));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_3 = 1; i_3 < 18; i_3 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_12 = ((/* implicit */_Bool) (((!(arr_7 [i_4] [i_2] [12U] [i_0]))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) arr_5 [i_1])))));
                        var_13 = ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_5 [i_1]))))));
                    }
                    arr_14 [i_0] [i_1] = ((/* implicit */signed char) arr_13 [19U] [i_1] [i_3]);
                    arr_15 [i_0] [i_1] [i_0] [i_0] [(signed char)20] [(unsigned short)12] = ((/* implicit */unsigned short) ((arr_7 [i_3 + 2] [i_3 + 3] [i_3 + 3] [i_3 + 1]) ? (((/* implicit */int) (unsigned short)5300)) : (((/* implicit */int) arr_7 [i_3 + 2] [i_3 + 3] [i_3 + 3] [(short)4]))));
                }
                for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) < ((-(11375662781384050881ULL)))));
                    var_15 = ((/* implicit */unsigned int) ((int) var_5));
                }
                var_16 = ((/* implicit */unsigned char) var_2);
                var_17 = ((/* implicit */_Bool) ((unsigned short) arr_17 [i_0] [i_1] [i_2] [i_1] [i_1]));
            }
            var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1 - 1] [i_1] [i_1]))) ^ (var_2)));
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) (signed char)-15)))))));
        }
        for (unsigned char i_6 = 2; i_6 < 18; i_6 += 4) 
        {
            var_20 = ((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_6]);
            arr_24 [i_0] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_0] [i_6 - 2] [i_0])) ? (((/* implicit */int) arr_19 [(signed char)11] [i_6 + 3] [i_0])) : (((/* implicit */int) arr_19 [13U] [i_6 + 1] [i_0]))));
            arr_25 [i_0] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(signed char)20] [16U])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-32))))))));
            /* LoopSeq 1 */
            for (unsigned short i_7 = 4; i_7 < 18; i_7 += 3) 
            {
                var_21 = ((/* implicit */_Bool) arr_27 [i_0] [6] [(signed char)1]);
                var_22 = ((signed char) (signed char)-15);
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4306320748214391788LL)) ? (((/* implicit */unsigned long long int) arr_27 [(signed char)17] [i_6] [i_7 - 4])) : (arr_18 [i_7] [i_6] [i_6 + 1] [i_7])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_7 - 1] [i_7 + 2] [(unsigned short)3] [i_7] [i_7 - 4] [i_7]))) : ((+(var_3)))));
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_6 - 1] [(unsigned short)3] [i_7 - 3])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (arr_8 [15ULL]))) : (((/* implicit */unsigned int) (-(var_1))))));
                arr_28 [i_7] [i_6 - 2] [i_6 - 2] = ((/* implicit */_Bool) arr_18 [i_7] [i_6 + 1] [i_6] [i_6 - 1]);
            }
        }
        arr_29 [i_0] = ((/* implicit */signed char) ((unsigned int) (+(((/* implicit */int) (signed char)127)))));
        arr_30 [i_0] [16ULL] &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)15779))) != (4306404333318589426LL)));
    }
    var_25 = ((/* implicit */long long int) (-(((/* implicit */int) var_6))));
    /* LoopNest 3 */
    for (short i_8 = 0; i_8 < 18; i_8 += 3) 
    {
        for (signed char i_9 = 0; i_9 < 18; i_9 += 4) 
        {
            for (short i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                {
                    arr_38 [15ULL] [i_9] [i_10] [i_10] = min((4306404333318589423LL), (((/* implicit */long long int) (signed char)-15)));
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((-7949515164839252198LL), (((/* implicit */long long int) (_Bool)0)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_11 = 2; i_11 < 19; i_11 += 3) 
    {
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                {
                    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_41 [i_11 + 3])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_11 - 2])) ? (((/* implicit */int) arr_42 [i_11] [10LL])) : (((/* implicit */int) arr_42 [i_11] [i_12])))))));
                    arr_48 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_43 [i_11 + 2] [i_13 - 1])) && ((!(((/* implicit */_Bool) var_9))))));
                    arr_49 [i_11] [i_11] [i_13] = ((/* implicit */unsigned int) arr_47 [i_13 - 1] [i_11 + 3]);
                    arr_50 [i_11] [i_11] [(unsigned char)5] = ((/* implicit */unsigned short) ((signed char) var_2));
                }
            } 
        } 
    } 
}
