/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98431
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) (~(((arr_0 [i_0]) / (arr_0 [i_0])))));
        var_13 = ((/* implicit */unsigned int) (-((+(arr_0 [i_0])))));
        var_14 -= ((/* implicit */_Bool) (((+(((((/* implicit */long long int) arr_0 [(unsigned short)0])) / (var_11))))) * (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) / (((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [(_Bool)1] [(_Bool)1] [i_1] |= ((/* implicit */signed char) ((((((/* implicit */int) var_3)) / (((/* implicit */int) var_10)))) << (((arr_3 [i_0] [i_1] [i_1]) - (3751743271U)))));
            arr_6 [i_0] [i_0] = ((/* implicit */_Bool) arr_2 [i_0]);
            arr_7 [(unsigned char)3] [i_0] = ((/* implicit */unsigned short) arr_3 [(short)9] [(short)9] [i_0]);
            var_15 = ((/* implicit */unsigned int) var_7);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_1 [i_0]))))));
            var_16 = ((/* implicit */short) arr_4 [i_0]);
        }
        for (unsigned char i_3 = 1; i_3 < 20; i_3 += 3) 
        {
            var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3 - 1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3 + 2] [i_3 + 3]))) : (arr_4 [i_0]))))));
            arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((((/* implicit */int) arr_13 [i_0] [i_3])) / (((/* implicit */int) var_0)))) > (((/* implicit */int) var_8)))))));
            arr_16 [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_0] [(unsigned char)10]))))) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_10 [i_3 + 1] [i_3 + 2])) : (arr_0 [i_0]))) : (((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_0)))))))));
            arr_17 [i_0] = var_10;
            arr_18 [i_0] [i_0] = ((/* implicit */unsigned char) (~(arr_3 [i_3] [i_3 + 4] [i_3])));
        }
        var_18 = ((/* implicit */signed char) var_8);
    }
    /* LoopNest 3 */
    for (long long int i_4 = 1; i_4 < 22; i_4 += 1) 
    {
        for (unsigned int i_5 = 1; i_5 < 20; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        for (short i_8 = 2; i_8 < 20; i_8 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (-(arr_32 [i_8] [(short)1] [i_8 + 3] [i_8 + 3] [i_8 + 1] [i_8] [i_7]))))));
                                arr_33 [i_4] [i_7] [i_6] [i_5] [i_4] = ((/* implicit */long long int) var_6);
                                arr_34 [i_4] [i_4] [i_8] = ((/* implicit */long long int) (((+(arr_25 [i_4 + 1] [i_5 + 1] [i_6] [i_6]))) + (((/* implicit */int) arr_29 [i_4] [i_5 + 2] [i_6] [i_6] [(unsigned char)18] [i_5]))));
                            }
                        } 
                    } 
                    arr_35 [(_Bool)1] |= ((/* implicit */unsigned short) arr_12 [i_5]);
                    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_6]))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) var_1);
    /* LoopSeq 1 */
    for (unsigned char i_9 = 1; i_9 < 20; i_9 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_10 = 0; i_10 < 23; i_10 += 3) 
        {
            for (unsigned int i_11 = 0; i_11 < 23; i_11 += 4) 
            {
                for (short i_12 = 3; i_12 < 22; i_12 += 2) 
                {
                    {
                        arr_48 [i_9] [i_9] = ((/* implicit */unsigned char) (+((+(((((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_9] [i_10]))) % (arr_27 [i_9] [i_10] [i_10] [0ULL] [i_12 - 1])))))));
                        arr_49 [i_9] [i_9 - 1] [i_10] [8U] [(short)4] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) arr_31 [i_12] [i_9] [i_9] [i_12 - 1] [i_12]))))) ? (((/* implicit */int) arr_31 [i_12] [i_9] [i_12 - 1] [i_12 - 2] [i_12])) : (((/* implicit */int) arr_31 [i_12 - 1] [i_9] [21U] [i_12 - 3] [(short)13]))));
                        arr_50 [i_9] [i_10] [i_10] [i_10] = ((/* implicit */_Bool) ((((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_20 [i_9 + 2])))) ? (((/* implicit */int) arr_31 [i_10] [i_9] [19] [i_9] [i_10])) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_12] [i_9 + 2])))))))));
                        arr_51 [i_9] [i_12] = ((/* implicit */short) (-((+(((/* implicit */int) arr_26 [i_12] [i_10]))))));
                        var_22 += ((/* implicit */unsigned char) (+((~(((/* implicit */int) var_8))))));
                    }
                } 
            } 
        } 
        arr_52 [i_9] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) var_9))))));
    }
}
