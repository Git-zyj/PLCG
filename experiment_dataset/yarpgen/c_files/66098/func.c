/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66098
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_2 [i_0] = (unsigned char)185;
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)182)))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 11; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)201)) ? (4294967295U) : (4294967295U)));
                    /* LoopSeq 3 */
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) 2U);
                        arr_11 [i_2] [(signed char)11] [i_2] [(signed char)2] [i_4] [i_4] = ((/* implicit */_Bool) ((4294967293U) + (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                    }
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        arr_14 [(short)11] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
                        arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) var_5);
                    }
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        var_15 += ((/* implicit */long long int) ((((((/* implicit */int) var_2)) << (((var_9) - (4044411985U))))) >= (((/* implicit */int) var_2))));
                        arr_18 [i_2] [i_2 - 1] [i_3] [i_6] = ((/* implicit */signed char) ((arr_3 [i_2 - 1]) & (((unsigned long long int) arr_10 [i_6] [i_6] [i_6] [i_6] [i_2]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        for (signed char i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            {
                                arr_26 [i_1] [8ULL] [i_2] [i_3] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [(unsigned short)8] [i_2 + 1] [i_2] [i_2 + 2])) | (((/* implicit */int) var_6))));
                                var_16 = ((/* implicit */signed char) arr_17 [i_2] [i_2]);
                                arr_27 [(short)5] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */signed char) var_0);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967292U)) ? (arr_24 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1]) : (((/* implicit */int) var_2))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        for (unsigned long long int i_10 = 2; i_10 < 11; i_10 += 3) 
                        {
                            {
                                arr_34 [i_1] [i_2] [i_3] [9U] [i_10 + 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (6921046555128492225ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (var_9));
                                var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 2U)) ^ (1439729894374888038ULL)));
                                arr_35 [i_1] [i_2] [i_2] [i_2] [i_9] [i_9] [8ULL] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) % (var_0)));
                                arr_36 [i_1] [i_1] [i_1] [i_2] [(unsigned char)5] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((4294967295U) >> (((-9223372036854775790LL) - (-9223372036854775805LL)))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (4294967293U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_2] [i_3] [i_3])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (long long int i_12 = 1; i_12 < 12; i_12 += 4) 
            {
                {
                    arr_44 [i_1] [i_1] [i_11] [i_1] = ((/* implicit */unsigned char) ((signed char) var_4));
                    arr_45 [i_1] [i_1] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1469008909681038632LL))));
                    arr_46 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-108))) : (arr_12 [i_12 - 1] [i_12 - 1] [i_12 + 1] [i_11] [i_12] [i_12])));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)21103))));
    }
    /* LoopNest 2 */
    for (unsigned int i_13 = 0; i_13 < 21; i_13 += 4) 
    {
        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_15 = 4; i_15 < 18; i_15 += 1) 
                {
                    for (short i_16 = 0; i_16 < 21; i_16 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) min(((signed char)-114), ((signed char)118))))))), (min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))))), (((signed char) 0LL))))));
                            var_21 = ((/* implicit */long long int) 5U);
                        }
                    } 
                } 
                arr_58 [i_13] = ((/* implicit */unsigned int) (!((!(arr_50 [i_14 + 1])))));
                var_22 += ((/* implicit */short) ((((/* implicit */_Bool) max(((short)-31962), ((short)-30716)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) % (max((((/* implicit */unsigned int) (unsigned char)187)), (var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-122)))));
            }
        } 
    } 
}
