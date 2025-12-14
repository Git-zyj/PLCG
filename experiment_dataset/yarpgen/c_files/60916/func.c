/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60916
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) ((((var_2) - (((/* implicit */unsigned long long int) (~(var_11)))))) != (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_0 [i_0])))) << (((((1LL) + (((/* implicit */long long int) arr_1 [i_0] [i_0])))) - (3310559532LL))))))));
        var_16 = ((/* implicit */int) ((long long int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) (_Bool)1)))));
        var_17 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (var_2)))) ? (((/* implicit */unsigned long long int) ((arr_1 [i_0] [3LL]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) : (max((var_6), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))))), (((/* implicit */unsigned long long int) 981828753))));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
        {
            arr_9 [i_1] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_2] [1U])), (-1LL)))))))));
            arr_10 [14LL] [14LL] = ((/* implicit */unsigned int) ((_Bool) min((-1804529773), (258100540))));
            arr_11 [i_1] [i_2] [i_2] = ((/* implicit */_Bool) var_7);
            arr_12 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-((-(((((/* implicit */long long int) arr_7 [i_1] [i_1] [i_2])) % (arr_6 [i_2])))))));
            var_18 = ((/* implicit */unsigned long long int) ((long long int) max((arr_5 [i_1]), (((/* implicit */unsigned long long int) max((-653558650), (((/* implicit */int) arr_0 [(_Bool)1]))))))));
        }
        for (int i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */short) (~(((/* implicit */int) arr_3 [i_1] [i_3]))));
            arr_16 [i_3] = ((/* implicit */unsigned int) var_4);
            var_20 *= ((/* implicit */short) max((((((/* implicit */_Bool) (-(var_14)))) ? (((/* implicit */long long int) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)26742)) - (26715)))))) : (((((/* implicit */_Bool) var_7)) ? (arr_6 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_3]))))))), (((/* implicit */long long int) arr_2 [i_1] [i_1]))));
        }
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 2) 
            {
                {
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((unsigned short) min((((((/* implicit */_Bool) arr_17 [i_1] [i_5])) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_17 [i_4] [i_4])))), ((-(((/* implicit */int) arr_2 [i_1] [i_5 - 1]))))))))));
                    arr_21 [i_5] [3LL] = ((/* implicit */unsigned short) arr_1 [i_1] [i_5]);
                    var_22 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)25724)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_19 [i_5 - 1] [i_5] [(_Bool)1]))))) : (max((((/* implicit */unsigned int) var_1)), (arr_1 [i_5 + 1] [i_5 + 1])))));
                    var_23 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_5] [i_5])) * (((/* implicit */int) arr_4 [i_1] [i_5 - 1]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49459))) * (var_6)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        for (short i_7 = 2; i_7 < 14; i_7 += 3) 
                        {
                            {
                                var_24 += ((/* implicit */unsigned short) var_4);
                                var_25 = ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_1] [i_5] [i_6] [i_7])) | (((/* implicit */int) var_7))))) : (((long long int) (short)-21531)))) >> (((max((((((/* implicit */_Bool) arr_23 [i_4] [i_5] [(_Bool)1] [i_7])) ? (((/* implicit */int) arr_14 [i_6] [i_6])) : (((/* implicit */int) var_8)))), ((~(((/* implicit */int) (unsigned short)26722)))))) - (50375)))));
                                var_26 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (unsigned short)38768))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (-((+(((/* implicit */int) (_Bool)1))))))), (((long long int) (unsigned short)0))));
    /* LoopNest 3 */
    for (short i_8 = 0; i_8 < 24; i_8 += 2) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (int i_10 = 0; i_10 < 24; i_10 += 3) 
            {
                {
                    var_28 = ((/* implicit */unsigned int) arr_26 [i_8]);
                    /* LoopSeq 4 */
                    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 3) 
                    {
                        var_29 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_8] [i_10] [i_10] [i_8])) >> (((((((((/* implicit */int) arr_27 [i_8])) + (2147483647))) << (((arr_26 [(signed char)11]) - (16267286712023014158ULL))))) - (2147483617)))))) ? (((unsigned int) ((unsigned long long int) arr_26 [i_10]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21530)) ? (1134232245) : (((/* implicit */int) (unsigned short)26757))))) && (((/* implicit */_Bool) arr_28 [i_8] [i_8]))))))));
                        var_30 = ((/* implicit */signed char) var_10);
                        arr_37 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) min(((unsigned short)38760), ((unsigned short)63189))))))) ? (var_6) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_28 [i_9] [i_10]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_27 [i_8]))))))))));
                    }
                    for (int i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((1804529773), (((/* implicit */int) arr_40 [i_9] [(unsigned char)23] [i_9] [i_10] [i_12] [i_12]))))) ? (arr_28 [1U] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_9])) || (((/* implicit */_Bool) (unsigned short)28))))))))) || ((((_Bool)1) && (((/* implicit */_Bool) (short)-21531))))));
                        arr_41 [i_12] [i_9] [i_12] [i_12] [i_12] [(short)23] = ((/* implicit */int) (~((-(((((/* implicit */unsigned int) ((/* implicit */int) var_4))) % (arr_36 [i_12] [i_12] [i_8] [i_10])))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned int) max((var_32), (arr_36 [i_8] [i_8] [i_8] [i_8])));
                        arr_46 [i_9] [i_10] [i_10] [i_10] [(short)5] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_10] [i_13])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (short)29073)), (var_12)))) : (((unsigned int) arr_44 [i_8] [i_9]))))) ? (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */int) (unsigned char)29))))))) : (arr_30 [i_9])));
                    }
                    for (long long int i_14 = 0; i_14 < 24; i_14 += 1) 
                    {
                        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_27 [i_8]))))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_35 [i_8] [i_8] [i_10] [i_14])) : (((/* implicit */int) arr_35 [i_8] [i_8] [i_10] [i_14])))) : (min((min((((/* implicit */int) arr_29 [i_8] [i_14])), (1804529773))), (((/* implicit */int) arr_29 [i_8] [i_9])))))))));
                        var_34 ^= ((/* implicit */signed char) arr_43 [i_8]);
                        var_35 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(arr_38 [i_9])))) & (((((/* implicit */_Bool) 2589060186U)) ? (((10913243392935978ULL) / (12482391287177458661ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)26768), (((/* implicit */unsigned short) (_Bool)1))))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 0; i_15 < 24; i_15 += 3) 
                    {
                        for (int i_16 = 0; i_16 < 24; i_16 += 3) 
                        {
                            {
                                arr_57 [i_9] [i_15] [3] [i_15] [(_Bool)1] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_38 [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-3248))) : (arr_38 [i_15]))), (((/* implicit */long long int) min((4294967273U), (((/* implicit */unsigned int) (unsigned short)19112)))))));
                                arr_58 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)63189)) << ((((-(9020776379697332322LL))) + (9020776379697332327LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
