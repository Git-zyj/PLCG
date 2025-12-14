/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/724
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
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    var_17 &= ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0]))))));
                    arr_12 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (~(((/* implicit */int) arr_10 [i_0])))));
                }
                var_18 = ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2]);
                arr_13 [i_0] [i_0] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27968)) ? (899542717) : (-899542718))))));
                arr_14 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_3 [i_2]) % (arr_3 [i_0])))) ? ((-(arr_0 [i_0]))) : ((~(var_1)))));
            }
            /* LoopSeq 4 */
            for (int i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [i_1])) ? (arr_3 [i_0]) : (((/* implicit */long long int) var_2))))) ? (((unsigned long long int) arr_15 [i_0] [i_1] [i_1] [6])) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14)))))));
                var_20 = ((/* implicit */unsigned char) (-((~(arr_1 [i_0])))));
            }
            for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                var_21 = ((/* implicit */unsigned char) arr_7 [i_5] [i_1] [5LL]);
                var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_5])) >= (((/* implicit */int) ((var_2) < (((/* implicit */int) var_5)))))));
                arr_19 [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_16)))) ? (((long long int) arr_16 [i_5] [i_5] [(signed char)1] [i_5])) : (((/* implicit */long long int) -899542718))));
            }
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0]))) : (arr_0 [i_0])))));
                arr_23 [i_0] [i_0] [(short)4] [i_0] = ((/* implicit */unsigned char) 899542723);
                var_23 = ((/* implicit */long long int) (+((-(((/* implicit */int) (short)-4622))))));
            }
            for (unsigned short i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                var_24 = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1])) >= (((/* implicit */int) arr_18 [i_7] [i_1] [i_1] [i_0]))));
                arr_27 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (899542726)))) ? (arr_16 [i_7] [i_7] [i_7] [3]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                /* LoopSeq 1 */
                for (long long int i_8 = 0; i_8 < 13; i_8 += 1) 
                {
                    var_25 += ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_1] [i_1] [i_1])))))));
                    var_26 = ((((/* implicit */_Bool) var_1)) ? ((-(var_13))) : (((((/* implicit */long long int) -899542717)) - (var_13))));
                    var_27 += ((/* implicit */unsigned char) ((-899542710) % (((((/* implicit */_Bool) var_14)) ? (-899542731) : (((/* implicit */int) arr_11 [i_1] [i_1]))))));
                    arr_32 [(unsigned short)1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (~(((/* implicit */int) var_14)))))));
                }
            }
        }
        for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 1) 
        {
            arr_36 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -899542718)), (var_1)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_25 [i_0] [i_0]))))) : (min((arr_6 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_34 [i_0]))))))));
            arr_37 [i_0] [i_0] [5] = ((/* implicit */short) ((unsigned long long int) ((int) 899542717)));
            arr_38 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((short) arr_30 [i_0] [i_0] [i_0] [i_0] [i_9]))), (max((var_4), (((/* implicit */unsigned long long int) arr_26 [i_0] [i_0] [i_0] [i_0]))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_5))))) : (max((max((arr_1 [i_0]), (((/* implicit */long long int) 899542690)))), (((/* implicit */long long int) arr_8 [i_9] [i_9] [i_0]))))));
            var_28 = ((/* implicit */short) arr_15 [i_0] [i_0] [i_9] [i_9]);
        }
        var_29 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_24 [i_0] [8LL] [i_0])) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [(short)0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
    }
    var_30 = ((/* implicit */long long int) var_8);
}
