/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62536
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
    var_19 = ((/* implicit */unsigned short) (~(max((var_14), (var_14)))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_20 = ((/* implicit */_Bool) var_9);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_1 [i_0])))))));
        var_21 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_1 [i_0])))) / (var_14)));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */short) ((((unsigned long long int) min((((/* implicit */unsigned int) arr_6 [i_1] [i_2])), (var_0)))) ^ (((/* implicit */unsigned long long int) (+(max((4398046511103LL), (((/* implicit */long long int) 449618787)))))))));
                    var_23 = ((/* implicit */long long int) max((min((arr_7 [i_2] [i_0] [i_0]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)1981))))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_2 + 1])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_3] [i_0] [i_0] [(unsigned char)13] [0] = ((/* implicit */unsigned short) (+(max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_3])))));
                                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_12 [i_4] [7LL] [i_3] [i_2] [i_1] [i_0]) + (((/* implicit */int) arr_2 [i_1] [i_1]))))) ? (((/* implicit */int) arr_2 [i_2 + 1] [i_2 - 1])) : (((/* implicit */int) arr_11 [i_0] [i_2 + 2]))))) || (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) arr_5 [i_1])) << (((((/* implicit */int) (unsigned short)1969)) - (1962)))))))));
                            }
                        } 
                    } 
                    arr_14 [i_2] [(unsigned char)8] [i_2] = ((/* implicit */unsigned long long int) (unsigned short)1981);
                    arr_15 [i_1] [i_1] [i_0] [i_0] |= ((/* implicit */short) ((unsigned char) arr_7 [i_2 - 1] [i_1] [i_0]));
                }
            } 
        } 
    }
    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_31 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned int) 134217728)) < (((unsigned int) (unsigned short)63545))));
                                arr_32 [i_9] = ((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (short)4092))));
                                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((((unsigned int) (signed char)-2)) >> (((arr_26 [13LL] [i_8] [i_7] [i_7]) - (1874666322))))) % (((/* implicit */unsigned int) (+((~(((/* implicit */int) (unsigned short)63555))))))))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_24 [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5]))) <= (arr_24 [i_5] [i_5])))))) : (min((((/* implicit */unsigned long long int) ((var_0) - (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), (min((var_6), (((/* implicit */unsigned long long int) arr_21 [i_5] [i_6] [i_6]))))))));
                }
            } 
        } 
        arr_33 [i_5] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65533)) + (((/* implicit */int) arr_17 [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_24 [i_5] [i_5]))));
        var_27 = ((/* implicit */unsigned long long int) (!(((arr_21 [i_5] [i_5] [i_5]) >= (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_5] [i_5] [i_5])))))));
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 21; i_10 += 4) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                {
                    arr_39 [i_5] [i_5] [i_10] [i_11] = ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) arr_23 [i_11] [i_10] [i_10] [i_5])))));
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 0; i_12 < 21; i_12 += 3) 
                    {
                        arr_43 [i_12] [15] [i_10] [i_5] = ((/* implicit */short) ((long long int) ((short) (+(((/* implicit */int) arr_22 [(unsigned char)8]))))));
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) arr_26 [i_5] [i_10] [i_11] [(unsigned char)8]))));
                        arr_44 [i_11] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_40 [(unsigned short)19] [i_10] [i_10] [i_10]))));
                        arr_45 [i_5] [i_11] [(signed char)9] [i_5] [i_5] |= ((/* implicit */unsigned int) var_6);
                        arr_46 [i_5] [10] [i_5] [(short)15] = ((/* implicit */unsigned long long int) var_3);
                    }
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (long long int i_14 = 1; i_14 < 20; i_14 += 4) 
                        {
                            {
                                arr_52 [i_5] [i_5] [i_11] [i_14] [17U] [i_10] [i_14] = ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (arr_24 [i_5] [i_10]) : (arr_24 [i_5] [i_5])));
                                arr_53 [i_5] [i_5] [i_5] [i_14] [i_5] [15] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_49 [i_5] [i_10] [i_11] [i_13] [i_14] [i_5]), (arr_49 [i_5] [i_10] [i_11] [i_13] [i_14 - 1] [i_14 + 1])))) - ((~(((/* implicit */int) (short)-32761))))));
                                arr_54 [i_10] [i_14] [i_14] [i_5] = ((/* implicit */long long int) ((unsigned short) ((long long int) ((arr_40 [i_5] [(signed char)17] [i_11] [17]) ? (((/* implicit */int) (short)32760)) : (((/* implicit */int) var_4))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
