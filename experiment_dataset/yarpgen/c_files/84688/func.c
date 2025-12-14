/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84688
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_6 [i_0 + 1] [i_1] [i_1] [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) != ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                    arr_7 [i_0] = ((/* implicit */signed char) max((((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) > (773276231U))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)184))))), (((/* implicit */unsigned long long int) var_1))));
                    var_10 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 3521691064U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_11 -= ((/* implicit */short) ((((/* implicit */int) arr_9 [i_1] [i_1] [i_2] [i_3])) >= (((((/* implicit */int) var_4)) / (((/* implicit */int) arr_10 [i_0] [i_0] [i_0 + 1] [i_0] [i_4 + 1]))))));
                                var_12 = ((/* implicit */signed char) var_8);
                                arr_13 [i_0] [i_3] [i_4] = ((/* implicit */signed char) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        arr_17 [i_5] [i_5] = arr_14 [i_5];
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) var_0))));
        /* LoopSeq 3 */
        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        {
                            arr_32 [i_5] [i_6] [i_5] [i_5] [i_9] &= ((/* implicit */unsigned char) arr_27 [i_9] [i_9] [i_9]);
                            var_14 = ((/* implicit */short) ((unsigned char) ((arr_18 [i_5] [i_6]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))))));
                        }
                    } 
                } 
            } 
            arr_33 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((arr_26 [i_5] [i_6] [i_5] [i_6]) / (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5] [i_6] [i_6])))));
        }
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            var_15 = ((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_5] [i_10])) | (((/* implicit */int) var_7))));
            var_16 |= ((/* implicit */unsigned short) (unsigned char)79);
            var_17 = ((/* implicit */unsigned long long int) (+(arr_34 [i_5] [i_5])));
        }
        for (long long int i_11 = 0; i_11 < 22; i_11 += 1) 
        {
            /* LoopSeq 3 */
            for (short i_12 = 0; i_12 < 22; i_12 += 4) 
            {
                var_18 |= ((/* implicit */signed char) ((((/* implicit */int) min((arr_20 [i_5] [i_11] [i_12]), (((/* implicit */signed char) ((var_8) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))) >> (((/* implicit */int) ((((/* implicit */int) arr_41 [i_5] [i_11] [i_11] [i_12])) == (((/* implicit */int) (unsigned short)49152)))))));
                /* LoopNest 2 */
                for (signed char i_13 = 1; i_13 < 21; i_13 += 1) 
                {
                    for (unsigned char i_14 = 0; i_14 < 22; i_14 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) (((-(arr_16 [i_13 + 1]))) ^ (((((/* implicit */_Bool) arr_28 [i_5] [i_11] [i_12])) ? (arr_16 [i_5]) : (arr_16 [i_5])))));
                            arr_51 [i_13] [i_14] [i_12] [i_13] [i_14] [i_13] = ((/* implicit */signed char) min((((/* implicit */int) arr_40 [i_5] [i_12])), (((((/* implicit */_Bool) arr_30 [i_13 - 1] [i_13 - 1] [i_13 - 1])) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) arr_30 [i_13 - 1] [i_13 - 1] [i_13 - 1]))))));
                            var_20 = ((/* implicit */unsigned short) (signed char)-83);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 22; i_15 += 3) 
                {
                    for (unsigned char i_16 = 0; i_16 < 22; i_16 += 3) 
                    {
                        {
                            arr_56 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)98)) : (((/* implicit */int) (signed char)-25))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)121))) : (363429746U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))))));
                            var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)193)) != (((/* implicit */int) arr_42 [i_15] [i_12] [i_5])))))))), (max((min((((/* implicit */unsigned long long int) (unsigned char)79)), (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)156))) % (3553356836U))))))));
                        }
                    } 
                } 
                arr_57 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) max(((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))) + (var_8))))), (((/* implicit */unsigned long long int) arr_40 [i_5] [i_11]))));
            }
            for (int i_17 = 0; i_17 < 22; i_17 += 4) 
            {
                var_22 = (+(((((/* implicit */_Bool) arr_54 [i_5] [i_5] [i_11] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_8)))) : (max((2432441940U), (((/* implicit */unsigned int) (unsigned char)252)))))));
                arr_61 [6U] [i_5] [i_5] [i_5] |= ((/* implicit */signed char) (unsigned char)60);
            }
            for (unsigned char i_18 = 0; i_18 < 22; i_18 += 1) 
            {
                arr_66 [i_18] = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
                var_23 += ((/* implicit */unsigned char) ((((((((((/* implicit */int) (signed char)-5)) + (2147483647))) << (((((/* implicit */int) var_7)) - (24))))) >> ((((+(((/* implicit */int) var_5)))) - (47))))) % (((/* implicit */int) (signed char)-25))));
                var_24 *= ((/* implicit */signed char) (short)32767);
            }
            arr_67 [i_5] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */int) ((signed char) arr_40 [i_5] [i_5]))), (((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) arr_21 [i_5] [i_5]))))));
        }
        arr_68 [i_5] = arr_45 [i_5];
        var_25 *= ((/* implicit */unsigned short) var_1);
    }
}
