/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96806
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1U)) ? (8U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-48)))))) ? (min((((/* implicit */long long int) 5U)), (arr_0 [i_0] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */signed char) arr_6 [i_1] [6U] [i_1]);
                            var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_0 [i_2 - 1] [i_2 - 1]) | (arr_0 [i_2 - 1] [i_2 - 1])))) ? (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)14))) & (arr_8 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) (short)-1)) ? (4294967273U) : (((/* implicit */unsigned int) 737694280)))))) : ((-(5U)))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    for (signed char i_5 = 1; i_5 < 16; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 16; i_6 += 2) 
                        {
                            {
                                arr_19 [i_0] [i_4] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (((((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0]))) != (1169483152704430924LL))) ? (arr_4 [i_5 - 1] [i_5 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_5] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_8 [i_0] [i_0] [3U]))))))));
                                var_13 = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) ((long long int) arr_2 [i_0]))), (arr_18 [i_4] [i_4] [i_5 - 1] [i_5 + 1] [i_5 + 1])))));
                                arr_20 [i_0] [i_0] [i_1] [i_1] [i_5] [i_1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((long long int) (short)511)) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((short) var_8))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) var_10))));
    /* LoopSeq 3 */
    for (unsigned char i_7 = 2; i_7 < 17; i_7 += 2) 
    {
        arr_24 [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)7))));
        /* LoopNest 2 */
        for (unsigned char i_8 = 4; i_8 < 17; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 1; i_9 < 17; i_9 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_10 = 1; i_10 < 15; i_10 += 1) 
                    {
                        arr_32 [i_7] [i_7] [i_9] [i_9] [i_7] [i_7] = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) var_9)))));
                        arr_33 [i_7] [i_7] [i_9] [i_10] = ((arr_27 [i_10] [i_8] [i_8 + 1]) | (((/* implicit */int) var_4)));
                        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) arr_29 [i_9] [i_9] [i_9 + 1]))));
                        /* LoopSeq 1 */
                        for (short i_11 = 1; i_11 < 16; i_11 += 3) 
                        {
                            arr_37 [i_11] [i_9] [i_9] [i_7] = ((/* implicit */short) ((((/* implicit */int) arr_23 [i_10 - 1] [i_8 + 1])) <= (((/* implicit */int) var_2))));
                            arr_38 [i_9] [i_8] [i_9] [i_8] [i_9] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))));
                            arr_39 [i_9] [i_9] = ((/* implicit */signed char) ((short) 3338699657U));
                            arr_40 [i_9] [i_7] [i_10] [i_9] [i_9] [i_8] [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_28 [i_9 + 1] [i_7 + 1]))));
                        }
                    }
                    var_16 = ((/* implicit */long long int) arr_35 [i_7] [i_7] [i_9] [i_9] [i_9]);
                    arr_41 [i_7] [i_8] [i_9] [(signed char)5] = max((((/* implicit */int) max((arr_23 [i_8] [i_8 - 3]), (arr_23 [i_9] [i_8 - 3])))), ((-(((/* implicit */int) arr_23 [i_9] [i_8 - 3])))));
                }
            } 
        } 
    }
    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
    {
        arr_46 [i_12] = ((/* implicit */unsigned int) ((int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_12] [(signed char)4] [i_12] [i_12] [i_12] [i_12]))) / (arr_18 [(_Bool)1] [(_Bool)1] [i_12] [(_Bool)1] [(_Bool)1]))), (((/* implicit */unsigned long long int) arr_45 [i_12])))));
        arr_47 [i_12] = ((/* implicit */unsigned int) arr_12 [i_12] [i_12] [i_12]);
        var_17 -= ((/* implicit */unsigned char) ((signed char) ((((((/* implicit */_Bool) arr_23 [i_12] [i_12])) ? (((/* implicit */int) arr_31 [i_12] [(_Bool)1] [(_Bool)1] [6U] [16ULL] [i_12])) : (((/* implicit */int) var_6)))) == (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)142)), (var_9)))))));
    }
    for (signed char i_13 = 2; i_13 < 21; i_13 += 3) 
    {
        arr_51 [i_13] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (short)-14)), (144115188075855871ULL)));
        arr_52 [0ULL] [i_13] |= ((/* implicit */short) (_Bool)1);
    }
}
