/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93601
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
    var_17 = ((/* implicit */short) var_13);
    var_18 = ((/* implicit */short) (+((+(((/* implicit */int) (unsigned char)42))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_2 [i_0] [i_1]))));
            arr_6 [i_0] = ((/* implicit */unsigned char) 4U);
            var_20 = ((/* implicit */unsigned char) ((arr_4 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_13))))));
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32))) : (arr_0 [i_1])));
        }
        arr_8 [i_0] [i_0] = ((unsigned int) max((arr_0 [i_0]), (((/* implicit */long long int) arr_1 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 3; i_2 < 10; i_2 += 4) 
    {
        arr_11 [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_14)) * (arr_4 [i_2])));
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        {
                            arr_23 [i_2] [i_2] [i_4] [i_5] [6LL] [i_2] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_2] [i_3]))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 536862720U)) ? (((/* implicit */unsigned long long int) ((var_14) | (((/* implicit */long long int) 4177920))))) : (arr_4 [i_2])));
                            arr_24 [i_2] = ((/* implicit */int) ((signed char) arr_17 [i_2 + 1] [i_3] [i_2] [i_3]));
                            arr_25 [i_2] [(unsigned short)4] [i_4] [i_5] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_9 [i_2 - 3]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        {
                            arr_33 [(short)5] [i_3] [i_4] [i_4] [i_7] [i_7] [i_2] = ((/* implicit */short) ((unsigned int) 4177928));
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_2 - 1] [i_2 - 3] [i_4] [(unsigned char)7])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_2 + 1] [i_2 + 1] [i_4] [i_2 + 1])))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_22 [i_2] [i_2 - 2])))))));
            }
            for (signed char i_9 = 0; i_9 < 11; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    for (signed char i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)122)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)52084)) ? (((/* implicit */int) (short)31)) : (((/* implicit */int) (_Bool)1))))) : (var_0)));
                            arr_42 [i_2] [i_3] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) (+(((unsigned int) var_4))));
                            arr_43 [i_2] [i_2 - 3] [i_2] [i_9] [i_2 - 3] [i_11] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_15 [(unsigned char)0] [i_2 - 3] [(unsigned char)0] [(unsigned char)0]))));
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((unsigned char) (short)-12262)))));
                        }
                    } 
                } 
                arr_44 [i_2] [i_3] [i_2] &= ((/* implicit */unsigned char) (-((-(((/* implicit */int) (short)12261))))));
                var_26 = ((/* implicit */long long int) ((int) (signed char)-123));
                arr_45 [i_2] [i_2 - 3] [i_2] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_2] [i_9])) ? ((+(((/* implicit */int) arr_32 [i_2 + 1] [i_2 + 1] [i_9])))) : (((/* implicit */int) arr_35 [i_2 - 2] [i_3] [i_9] [i_9]))));
            }
            arr_46 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 72057456598974464ULL)) ? (((/* implicit */int) (signed char)-110)) : (-4177920)));
            arr_47 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_2] [i_2])) ? (((/* implicit */int) arr_12 [i_2] [i_3])) : (((/* implicit */int) (signed char)108))));
        }
        for (unsigned char i_12 = 0; i_12 < 11; i_12 += 2) 
        {
            arr_52 [i_2] [i_12] = (-(arr_41 [i_2] [i_2 + 1] [i_2] [i_2 - 2] [i_2 - 2] [i_12] [i_12]));
            arr_53 [i_2] [i_2] = ((/* implicit */int) ((unsigned int) arr_49 [i_2 + 1] [i_2 + 1] [(unsigned short)3]));
        }
    }
    var_27 = ((/* implicit */short) var_2);
}
