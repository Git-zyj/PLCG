/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5960
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
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        var_18 = ((/* implicit */signed char) -9223372036854775805LL);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_4 [i_0] [i_1])) != (-9223372036854775805LL)));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (unsigned char i_3 = 1; i_3 < 21; i_3 += 1) 
                {
                    for (short i_4 = 1; i_4 < 21; i_4 += 2) 
                    {
                        {
                            var_20 = (((~(-9223372036854775805LL))) & (var_15));
                            var_21 &= ((/* implicit */signed char) var_10);
                            var_22 = ((/* implicit */short) (!(arr_10 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1])));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 2; i_5 < 20; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 1) 
                    {
                        var_23 = ((/* implicit */short) var_9);
                        var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) -1077787124)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_1 [i_0 - 1] [i_6]))) + (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))));
                        arr_23 [i_5] = ((/* implicit */short) (~(((int) (-(arr_5 [i_0 - 3] [i_7] [i_6]))))));
                    }
                    for (long long int i_8 = 2; i_8 < 21; i_8 += 3) 
                    {
                        arr_26 [i_5] [6] [i_5] [i_5] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_12 [i_5] [i_6 + 1] [i_8] [i_8 + 1] [i_8 + 1]))))), (max((((/* implicit */long long int) (short)22940)), (9223372036854775781LL)))));
                        /* LoopSeq 3 */
                        for (signed char i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((unsigned short) (~(((/* implicit */int) arr_18 [i_9] [i_8 + 1] [i_6 - 1]))))))));
                            var_26 += ((/* implicit */unsigned long long int) (((~((~(0U))))) << (((((long long int) (-(-9223372036854775805LL)))) - (9223372036854775791LL)))));
                            arr_30 [i_0] [i_5] [i_0] [i_5] [i_9] [20U] = ((/* implicit */short) max(((~(min((1108462195), (((/* implicit */int) var_4)))))), (((int) arr_18 [i_0] [i_5] [i_6 + 2]))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (1108462195))))));
                            arr_35 [i_0] [i_5] [i_5] [(_Bool)1] [i_10] = 0U;
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            arr_38 [i_5] [i_11] [i_8] [i_6 - 1] [(signed char)13] [i_5] [i_5] = ((/* implicit */unsigned short) ((-9223372036854775805LL) / (((((-9223372036854775805LL) + (9223372036854775807LL))) >> (((/* implicit */int) min(((_Bool)0), ((_Bool)1))))))));
                            var_28 += ((/* implicit */int) max(((unsigned short)13505), (((/* implicit */unsigned short) ((var_9) > (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_0] [18ULL] [i_6] [i_8 + 1] [i_11] [(signed char)21]))))))));
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((1108462197) * (((/* implicit */int) arr_36 [i_0 - 1] [i_5] [i_8 - 2] [i_6 + 1] [i_6 + 1] [i_5 + 2]))))) ? (((((/* implicit */_Bool) arr_9 [i_6] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))) : ((~(((/* implicit */int) min(((short)-20930), (((/* implicit */short) (unsigned char)73)))))))));
                        }
                        var_30 ^= ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
                    }
                    for (short i_12 = 3; i_12 < 21; i_12 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned short) ((((_Bool) (+(((/* implicit */int) arr_3 [i_0 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) : ((+(35150012350464ULL)))));
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) -1108462213)) ? (min((((int) arr_37 [i_0 + 2])), (max((((/* implicit */int) var_7)), (-1108462223))))) : (1954320180)));
                    }
                    arr_43 [i_5] [i_5] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_8)))) || (((/* implicit */_Bool) max((arr_24 [i_6] [i_5] [i_5] [i_5] [i_0]), (((/* implicit */long long int) arr_9 [i_5 - 2] [i_5])))))));
                    var_33 = ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0 - 3]))) == (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_12 [11] [i_0] [(signed char)11] [21LL] [21LL])))))) > (((/* implicit */int) ((short) min((((/* implicit */unsigned char) var_4)), (arr_31 [i_0 - 1] [i_0 - 2] [i_0] [i_0] [i_0 - 2] [i_0]))))));
                    arr_44 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_28 [i_5] [i_0 - 2] [i_0] [i_5])), (-4906977374460137090LL)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1108462195)) && (((/* implicit */_Bool) arr_25 [i_6] [i_6] [i_6 - 1]))))), (((arr_1 [i_0] [i_6]) / (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_13 = 0; i_13 < 22; i_13 += 1) 
        {
            for (int i_14 = 0; i_14 < 22; i_14 += 1) 
            {
                {
                    var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_13] [i_14])))))) | (min((arr_13 [i_0]), (3998379379U))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 2; i_15 < 19; i_15 += 1) 
                    {
                        for (int i_16 = 1; i_16 < 19; i_16 += 1) 
                        {
                            {
                                var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) min(((~(arr_5 [i_0] [i_0] [i_16 + 1]))), (((/* implicit */int) arr_3 [i_0])))))));
                                var_36 ^= ((/* implicit */unsigned short) (-(((arr_48 [i_15 + 3]) % (((/* implicit */int) arr_22 [i_0] [i_0 + 1] [i_0] [(signed char)18] [i_15]))))));
                                var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) 1880304601353272853LL)))))) >= ((((-(var_16))) / (((/* implicit */unsigned long long int) -2067770502)))))))));
                                var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) var_16))));
                            }
                        } 
                    } 
                    arr_53 [i_0] [i_13] [i_13] [20ULL] |= ((/* implicit */long long int) arr_13 [i_0 + 1]);
                }
            } 
        } 
    }
    var_39 = ((/* implicit */unsigned long long int) max((var_4), (((/* implicit */signed char) var_14))));
    var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((max((-1778294713), (((/* implicit */int) (signed char)-58)))) ^ ((~(((/* implicit */int) var_6))))))));
    var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) -6791720959618231498LL))));
}
