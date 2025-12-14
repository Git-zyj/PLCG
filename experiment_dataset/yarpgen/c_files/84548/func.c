/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84548
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_20 = (-(((/* implicit */int) min((arr_3 [i_0]), (((/* implicit */unsigned short) var_9))))));
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_9))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_2 = 2; i_2 < 19; i_2 += 2) 
        {
            arr_7 [i_0] [i_0] [(signed char)8] = ((/* implicit */unsigned long long int) (-(2147483637)));
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_3))));
            arr_8 [i_0] [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) max((arr_2 [i_0] [i_0]), (min((((/* implicit */unsigned int) arr_6 [i_0] [(signed char)5] [i_2 + 1])), (arr_0 [(signed char)8] [i_2]))))));
        }
    }
    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) /* same iter space */
    {
        arr_13 [i_3] = ((/* implicit */unsigned int) var_16);
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 3; i_4 < 19; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                {
                    var_23 += ((/* implicit */unsigned int) (-(((/* implicit */int) max((arr_17 [i_4 - 2]), (arr_17 [i_4 + 1]))))));
                    var_24 *= ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) 1354347399)))));
                    arr_21 [i_5] [i_5] |= ((/* implicit */unsigned int) ((unsigned short) (~(((((/* implicit */int) (unsigned short)34945)) | (((/* implicit */int) (signed char)127)))))));
                }
            } 
        } 
        arr_22 [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_14 [(unsigned short)5]))) && (((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_3] [i_3]))))))));
        var_25 = ((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (max((4294967295U), (((/* implicit */unsigned int) arr_9 [i_3])))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) (signed char)-127)))))));
    }
    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) 
    {
        var_26 = ((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) != (3729006168U))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(short)8]))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */unsigned int) var_17))))) / (arr_24 [i_6]))));
        /* LoopSeq 1 */
        for (int i_7 = 4; i_7 < 8; i_7 += 3) 
        {
            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) 4124613679U))));
            arr_28 [i_6] = ((/* implicit */unsigned short) var_11);
            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_0 [i_7] [i_7 - 2])))) ? (((/* implicit */unsigned long long int) var_8)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_7 + 2] [i_7 - 3] [i_7]))) + (var_16))))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_8 = 1; i_8 < 6; i_8 += 4) 
        {
            for (short i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                {
                    var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((unsigned int) var_1)) - (min((max((((/* implicit */unsigned int) arr_17 [i_6])), (arr_32 [2ULL]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [2U] [i_8] [i_9])) ? (-543153467) : (((/* implicit */int) var_14))))))))))));
                    arr_37 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned int) var_18))), (((((((/* implicit */unsigned long long int) var_19)) | (5892231952536339467ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
                    var_30 += var_1;
                    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((unsigned long long int) var_9))))) ? (((/* implicit */unsigned long long int) 225461323U)) : (((unsigned long long int) ((unsigned short) 4124613679U)))));
                }
            } 
        } 
    }
    /* LoopSeq 4 */
    for (unsigned int i_10 = 1; i_10 < 23; i_10 += 1) 
    {
        arr_40 [i_10 + 1] [i_10 + 1] = ((/* implicit */signed char) var_4);
        var_32 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1783772489609152672ULL)) || (((/* implicit */_Bool) 15086496772722579405ULL))))), (var_4));
        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (+((-(((/* implicit */int) var_18)))))))));
        arr_41 [i_10 - 1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) << (((arr_38 [i_10 - 1] [(signed char)19]) - (2501183972U)))))), (max((var_2), (((/* implicit */unsigned long long int) var_1))))));
    }
    for (signed char i_11 = 1; i_11 < 10; i_11 += 1) /* same iter space */
    {
        arr_46 [i_11] = ((/* implicit */unsigned long long int) arr_16 [i_11 + 1]);
        arr_47 [i_11] [i_11] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_20 [i_11] [i_11] [1]))));
    }
    for (signed char i_12 = 1; i_12 < 10; i_12 += 1) /* same iter space */
    {
        arr_50 [i_12] = max((((unsigned int) (short)-9504)), (((/* implicit */unsigned int) arr_20 [i_12 + 1] [i_12 + 1] [11ULL])));
        /* LoopNest 2 */
        for (signed char i_13 = 0; i_13 < 12; i_13 += 1) 
        {
            for (unsigned int i_14 = 0; i_14 < 12; i_14 += 3) 
            {
                {
                    var_34 = 1883788139U;
                    arr_56 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_15)), (arr_10 [i_12 - 1])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-104))) & (2735917720612946256ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_18)), (var_12)))))));
                }
            } 
        } 
    }
    for (unsigned int i_15 = 1; i_15 < 10; i_15 += 3) 
    {
        arr_59 [i_15 + 3] [i_15] = ((/* implicit */int) ((unsigned long long int) (-(max((((/* implicit */unsigned int) arr_17 [i_15])), (var_8))))));
        var_35 = var_11;
        var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) ((int) ((4124613679U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_15 - 1])))))))));
        arr_60 [(short)5] [i_15] = ((/* implicit */unsigned long long int) var_7);
    }
    var_37 = ((/* implicit */short) var_8);
}
