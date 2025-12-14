/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77116
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_10 &= ((/* implicit */unsigned int) (((-((+(((/* implicit */int) arr_3 [i_0])))))) + (((((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [12LL] [i_0])), (arr_3 [i_0])))) + (((((/* implicit */int) arr_3 [i_0])) - (((/* implicit */int) arr_3 [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) max((min(((~(((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) arr_3 [i_0]))));
    }
    for (long long int i_1 = 1; i_1 < 12; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            var_11 = ((/* implicit */unsigned char) (+((~((-(((/* implicit */int) arr_3 [i_2]))))))));
            arr_9 [i_1] = arr_0 [i_1] [i_1];
            var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (((+(arr_6 [i_1 + 1]))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_2]))))))));
        }
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            /* LoopSeq 3 */
            for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                arr_15 [(signed char)0] [i_1] [i_1] [12U] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((-(arr_6 [i_1]))), (min((arr_6 [i_4]), (((/* implicit */unsigned int) arr_13 [i_3] [i_1] [i_3] [i_3])))))))));
                var_13 = ((/* implicit */_Bool) (~(min((-196513771), (((/* implicit */int) (_Bool)1))))));
                arr_16 [i_1] [i_3] [i_1] = min((arr_0 [i_1] [i_4]), (min((max((arr_2 [i_3]), (arr_12 [i_4] [i_4] [i_4] [i_1]))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [(unsigned char)7] [i_1] [i_4] [i_4])) && (((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1]))))))));
            }
            for (unsigned short i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                var_14 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)137)), (17U)));
                var_15 = ((/* implicit */int) arr_5 [i_5] [i_3]);
                var_16 = ((/* implicit */_Bool) arr_3 [i_3]);
            }
            for (short i_6 = 1; i_6 < 12; i_6 += 4) 
            {
                arr_22 [i_1] [i_1] [i_6] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) min((arr_20 [9U]), (((/* implicit */short) arr_2 [i_6 + 1])))))))));
                arr_23 [i_1] [i_3] [i_1] = ((/* implicit */short) arr_18 [i_1] [i_3] [i_1]);
                var_17 = ((/* implicit */_Bool) arr_12 [i_1] [i_3] [i_3] [i_1]);
            }
            arr_24 [i_1] [i_3] = ((/* implicit */unsigned int) arr_12 [i_1] [i_3] [i_3] [i_1]);
        }
        arr_25 [i_1] = ((/* implicit */unsigned char) (-((+(((((/* implicit */int) arr_2 [i_1 + 1])) / (((/* implicit */int) arr_5 [(_Bool)1] [i_1]))))))));
        var_18 = ((/* implicit */long long int) arr_2 [i_1 - 1]);
        var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1]))));
        arr_26 [i_1] = arr_2 [i_1];
    }
    for (unsigned short i_7 = 4; i_7 < 12; i_7 += 4) 
    {
        arr_29 [(unsigned char)6] [(unsigned char)4] = ((/* implicit */int) arr_6 [i_7]);
        arr_30 [i_7 + 1] = ((/* implicit */signed char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_7] [i_7])))))) == (((arr_14 [i_7] [i_7 - 3] [i_7] [i_7]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(_Bool)1] [i_7])))))))));
        /* LoopSeq 1 */
        for (signed char i_8 = 1; i_8 < 12; i_8 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_9 = 1; i_9 < 11; i_9 += 4) 
            {
                arr_36 [i_7 + 1] [i_8] [i_9] [i_8] = ((/* implicit */unsigned short) ((arr_6 [i_8 - 1]) % (min(((-(arr_27 [i_9] [(signed char)12]))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_17 [i_8 - 1] [i_8])))))))));
                var_20 = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_0 [i_8] [i_8])))) * (((/* implicit */int) arr_18 [i_7] [i_9 - 1] [i_8]))));
                arr_37 [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((4294967250U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6))))))));
                arr_38 [i_9] [i_8] [i_8] [(unsigned char)7] = ((/* implicit */short) (~((+(arr_11 [i_7] [i_8] [i_9])))));
            }
            for (unsigned int i_10 = 3; i_10 < 12; i_10 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned char i_12 = 1; i_12 < 11; i_12 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_3 [i_7]), (arr_5 [i_8] [i_12 + 1])))))))));
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) arr_42 [i_7] [i_11] [i_8] [i_8] [i_7]))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_18 [(_Bool)1] [(unsigned char)6] [i_7])), (arr_11 [i_12] [i_8 + 1] [i_7 - 4]))))))))))));
                            var_24 = ((/* implicit */long long int) arr_0 [i_8] [i_8]);
                        }
                    } 
                } 
                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) max(((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_7] [i_7]))) == (arr_31 [i_7] [i_8 - 1])))))), (min(((-(((/* implicit */int) arr_42 [i_7] [i_8 + 1] [i_8 - 1] [i_8] [i_8 + 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_7] [i_7] [i_8] [i_10 - 2]))))))))))));
            }
            arr_47 [i_8] [i_8 + 1] [i_8] = ((/* implicit */short) min((min(((+(arr_27 [i_7] [i_7 + 1]))), (min((arr_44 [i_8] [i_7 - 4]), (((/* implicit */unsigned int) arr_40 [i_8] [i_8] [i_7] [i_7])))))), (((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_41 [i_7 - 3] [i_7 - 3] [i_7] [(short)5] [i_7 - 1] [i_7 - 1]), (((/* implicit */unsigned char) arr_18 [i_8] [i_7 - 4] [i_8]))))))))));
            var_26 = ((/* implicit */_Bool) arr_27 [i_7] [i_7]);
            arr_48 [i_8] [i_8] = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) arr_2 [i_7])) && (((/* implicit */_Bool) arr_27 [i_7] [i_7 - 4])))) && ((!(((/* implicit */_Bool) arr_42 [i_8] [i_8] [i_8] [i_8] [i_8 + 1])))))), (((((((/* implicit */_Bool) (unsigned short)2)) && (((/* implicit */_Bool) (unsigned char)128)))) || (((/* implicit */_Bool) min((((/* implicit */short) arr_1 [i_7] [i_8])), (arr_32 [i_7 - 4] [i_8] [i_7 - 3]))))))));
        }
        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) min((arr_2 [i_7]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_18 [i_7] [0LL] [i_7]))))))))));
        var_28 &= ((/* implicit */unsigned int) arr_2 [i_7]);
    }
    var_29 = ((/* implicit */unsigned short) (!(var_6)));
    var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-73))));
}
