/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84809
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) (!((_Bool)1)));
        var_13 = ((/* implicit */unsigned char) var_7);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_14 = ((((/* implicit */_Bool) ((3997607642U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) arr_3 [i_1]))))) : (((/* implicit */int) arr_3 [i_1])));
        var_15 = ((/* implicit */_Bool) (unsigned char)18);
        var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) var_4)))) - (((/* implicit */int) arr_4 [i_1] [i_1]))));
        var_17 = ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1])));
        /* LoopNest 2 */
        for (unsigned short i_2 = 2; i_2 < 18; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                {
                    var_18 = ((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_1])) || (((/* implicit */_Bool) 15847095336165416365ULL)));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 2; i_5 < 16; i_5 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))));
                                var_20 = ((/* implicit */short) (((+(arr_10 [i_1] [i_3]))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_2] [(_Bool)1])) ? (((/* implicit */int) (unsigned char)204)) : (arr_12 [4LL] [i_2] [i_1] [(signed char)4]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        for (signed char i_7 = 2; i_7 < 15; i_7 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_7] [i_7] [i_3] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */int) arr_4 [i_2 + 1] [i_2])) : (((/* implicit */int) arr_4 [i_2 + 1] [i_2]))));
                                var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)12977)) & (((/* implicit */int) (_Bool)1))))) || ((_Bool)1)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 2) 
                        {
                            {
                                var_24 -= ((/* implicit */unsigned long long int) arr_25 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]);
                                var_25 = arr_8 [i_2 - 2] [i_1];
                                var_26 = ((/* implicit */int) ((arr_25 [i_1] [i_8] [i_1] [i_8 - 1] [i_1] [i_8] [i_2 - 2]) != (((/* implicit */int) arr_15 [i_8 - 1] [i_1] [i_2 - 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned short i_10 = 1; i_10 < 21; i_10 += 1) 
    {
        var_27 = ((/* implicit */short) arr_27 [i_10]);
        /* LoopSeq 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((4000135551U), (((/* implicit */unsigned int) (short)-21879)))), (((/* implicit */unsigned int) ((-555395276) % (((/* implicit */int) (short)-3887)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21878)) ? (3951889099U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (arr_29 [i_10]) : (((/* implicit */long long int) (~(arr_28 [i_11])))))))));
            var_29 = ((unsigned long long int) arr_29 [i_11]);
        }
        /* vectorizable */
        for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 1) 
        {
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_26 [i_10 + 1])) + (2147483647))) >> (((((/* implicit */int) arr_30 [i_10])) + (17921)))))) : ((-(arr_29 [i_10])))));
            var_31 = ((/* implicit */long long int) ((var_9) < (0U)));
        }
    }
    var_32 *= ((/* implicit */_Bool) ((((/* implicit */long long int) ((((((/* implicit */int) (signed char)-104)) + (2147483647))) << (((((-9210129464316280013LL) + (9210129464316280019LL))) - (6LL)))))) ^ ((~(-6109585387710041146LL)))));
    var_33 = var_9;
    var_34 -= var_1;
    var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) max((var_0), (((/* implicit */unsigned long long int) var_2)))))));
}
