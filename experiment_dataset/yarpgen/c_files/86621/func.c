/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86621
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (+(var_0))))));
                            arr_15 [i_3] = ((/* implicit */unsigned long long int) ((signed char) arr_3 [i_0]));
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_4] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)38))) : ((+(var_11))))))));
                        }
                        arr_16 [i_3] [i_3] [i_2] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_4 [i_0] [i_3]))) && (((/* implicit */_Bool) arr_14 [(short)12] [i_1] [i_1] [i_1] [11U] [i_1]))));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) var_11)))))));
                        /* LoopSeq 4 */
                        for (signed char i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
                        {
                            arr_23 [0ULL] [i_1] [i_2] [i_2] [i_5] [i_5] [i_1] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned long long int) 8091695)) + (var_13))));
                            arr_24 [i_5] [i_1] [i_5] [1U] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -471637256731471457LL)) ? (((/* implicit */int) (short)-12406)) : (((/* implicit */int) (unsigned short)3))));
                            arr_25 [i_1] [i_5] [i_1] [i_5] [i_1] [i_1] [(unsigned char)13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) (unsigned short)55990))));
                        }
                        for (signed char i_7 = 0; i_7 < 17; i_7 += 4) /* same iter space */
                        {
                            arr_29 [i_5] = ((/* implicit */signed char) var_11);
                            arr_30 [(signed char)14] [i_1] [i_5] [(unsigned short)9] [i_5] [i_7] = ((/* implicit */short) (unsigned short)0);
                        }
                        for (short i_8 = 0; i_8 < 17; i_8 += 4) 
                        {
                            var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_5] [i_1] [i_2] [i_2] [i_8])) != (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) < (var_14))))));
                            var_21 += ((/* implicit */long long int) ((((/* implicit */int) var_5)) >= (8091695)));
                        }
                        for (unsigned int i_9 = 0; i_9 < 17; i_9 += 4) 
                        {
                            arr_37 [i_9] [i_1] [i_2] [i_0] [i_9] [i_5] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_9] [i_5] [i_2] [(unsigned char)3] [i_0]))));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65523)) ? (((/* implicit */int) (short)-1042)) : (((/* implicit */int) (unsigned short)28324)))))));
                            var_23 = ((/* implicit */short) 6375787745240496877ULL);
                            arr_38 [i_5] [i_5] [i_2] [i_5] = ((/* implicit */int) var_5);
                        }
                        var_24 = ((/* implicit */unsigned int) -1446829066);
                    }
                    for (unsigned int i_10 = 0; i_10 < 17; i_10 += 1) /* same iter space */
                    {
                        arr_41 [i_0] = ((/* implicit */signed char) min((max((((((/* implicit */_Bool) (signed char)82)) ? (arr_9 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65519))))), (((/* implicit */unsigned long long int) min(((unsigned short)28324), (((/* implicit */unsigned short) var_12))))))), (((arr_9 [i_1] [i_1]) * (arr_9 [i_0] [i_2])))));
                        var_25 ^= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_19 [i_0] [(signed char)10] [i_1] [(signed char)10] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (var_13)))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 17; i_11 += 1) /* same iter space */
                    {
                        arr_44 [i_0] [i_1] [i_1] [i_2] [i_11] = ((/* implicit */short) min((((/* implicit */int) arr_8 [i_0] [i_1] [(signed char)10] [i_1] [i_1])), (min((((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_0] [i_0])), (min((((/* implicit */int) (unsigned short)37212)), (arr_39 [i_11] [i_0] [i_2] [i_0] [i_0] [i_0])))))));
                        arr_45 [i_0] [i_0] [i_2] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) var_13);
                    }
                    arr_46 [i_1] [i_2] [(unsigned short)16] = ((/* implicit */short) ((unsigned int) max((max((arr_27 [i_0] [i_1] [i_2] [i_2] [i_2] [i_0] [i_1]), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)28327))))))));
                    /* LoopSeq 2 */
                    for (signed char i_12 = 0; i_12 < 17; i_12 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_13 = 0; i_13 < 17; i_13 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_14 [i_0] [2] [2] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)-10220)) : (((/* implicit */int) (unsigned short)51579)))))))) ? (((((/* implicit */_Bool) ((unsigned long long int) arr_27 [i_0] [i_0] [i_1] [14ULL] [i_2] [i_12] [i_13]))) ? (((/* implicit */unsigned long long int) -1LL)) : (3645927762171277378ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)28324))))))))));
                            arr_52 [i_0] [i_0] [i_1] [i_0] [i_12] [i_13] = ((/* implicit */short) min((arr_28 [i_0] [i_13]), (((/* implicit */unsigned long long int) (short)8264))));
                        }
                        /* vectorizable */
                        for (unsigned char i_14 = 0; i_14 < 17; i_14 += 3) 
                        {
                            var_27 += ((short) -1867308251);
                            var_28 = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)37231))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_14) == (((/* implicit */int) (unsigned short)65535)))))) : (((((/* implicit */_Bool) 3960243739U)) ? (arr_56 [i_0] [(signed char)13] [i_0] [i_12] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32754))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_15 = 0; i_15 < 17; i_15 += 4) 
                        {
                            arr_59 [i_0] [i_2] [i_0] [i_2] [i_0] [i_1] = 1501887043;
                            arr_60 [i_0] = ((/* implicit */unsigned char) 8091695);
                            var_29 &= ((/* implicit */unsigned int) var_8);
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_16 = 0; i_16 < 17; i_16 += 4) 
                        {
                            arr_63 [i_0] [i_1] [(short)3] = ((/* implicit */int) ((unsigned int) (-(((/* implicit */int) arr_1 [i_1] [i_2])))));
                            arr_64 [i_0] = ((/* implicit */short) (+(arr_57 [i_2] [i_1] [i_2])));
                        }
                    }
                    for (unsigned short i_17 = 0; i_17 < 17; i_17 += 4) 
                    {
                        arr_67 [i_0] [i_0] [i_0] [i_17] [i_2] = ((/* implicit */unsigned int) arr_19 [i_0] [i_0] [1U] [i_2] [i_17]);
                        var_30 = ((/* implicit */short) max((var_30), (max(((short)-5716), (((/* implicit */short) min(((signed char)-82), ((signed char)100))))))));
                    }
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -790171161)))))) & (((((/* implicit */_Bool) 0)) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) var_11))))))));
    var_32 = ((/* implicit */unsigned long long int) var_1);
}
