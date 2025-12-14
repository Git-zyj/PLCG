/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84142
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
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_7))) ? (((((/* implicit */int) (unsigned short)1437)) | (568213945))) : (((/* implicit */int) var_8))))), (((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 9342689028404524708ULL)))))) : (var_4))))))));
    var_12 = ((/* implicit */unsigned int) 568213945);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned char) var_10))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (signed char)91)) : (((/* implicit */int) arr_0 [i_0] [5ULL]))))));
        arr_4 [i_0] = ((/* implicit */int) (+((-(var_4)))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (signed char i_3 = 2; i_3 < 23; i_3 += 3) 
                {
                    {
                        arr_13 [i_0] [i_0] [i_1 - 2] [(signed char)19] [i_3] [i_3] = arr_1 [i_1 - 3] [i_1 - 2];
                        var_13 = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_5)) % (((/* implicit */int) arr_0 [i_0] [i_0])))) + (((/* implicit */int) (unsigned short)54370)))) % (((/* implicit */int) arr_7 [(unsigned short)19] [i_0] [i_2]))));
                        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -887445567)) ? (-568213929) : (((/* implicit */int) (unsigned short)6)))))));
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (unsigned short)65519))) ? (((((/* implicit */_Bool) (-(34902897112121344ULL)))) ? (((/* implicit */int) arr_0 [i_0] [(unsigned short)11])) : (((/* implicit */int) (unsigned char)126)))) : (((574820456) - (((/* implicit */int) arr_7 [i_0] [i_0] [20]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 4) 
        {
            for (short i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                {
                    arr_24 [11] [0] [i_5 + 3] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3609559430U)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_23 [i_5 - 2] [i_5 + 1] [i_5 + 3])), ((unsigned short)17))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4269299588598741594ULL)) || (((/* implicit */_Bool) (signed char)53))))), (max((1279915646U), (((/* implicit */unsigned int) -1804545651))))))));
                    arr_25 [11] [i_5] [11ULL] = ((/* implicit */int) ((((/* implicit */_Bool) (~((~(arr_17 [i_4] [i_5])))))) ? (((/* implicit */unsigned long long int) arr_1 [i_4] [i_5])) : (((((/* implicit */_Bool) arr_16 [i_5 - 1])) ? (arr_16 [i_5 + 3]) : (arr_16 [i_5 - 1])))));
                }
            } 
        } 
        arr_26 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65530)) ? (568213945) : (((/* implicit */int) (short)128))))) ? (arr_17 [9LL] [9LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_4] [i_4]))))))));
        var_16 = arr_22 [i_4] [(unsigned short)10] [i_4];
        var_17 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */int) (unsigned short)35086)) : (((/* implicit */int) (short)-512))))) || (((/* implicit */_Bool) arr_0 [i_4] [i_4]))));
        /* LoopNest 2 */
        for (signed char i_7 = 1; i_7 < 13; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 2; i_8 < 13; i_8 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 2) /* same iter space */
                    {
                        arr_35 [i_4] [(short)10] [i_7] [i_4] [i_4] [i_4] = (+(max(((+(arr_12 [(signed char)3] [(signed char)3] [i_7] [i_4] [i_4]))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15))) : (arr_17 [(signed char)8] [0]))))));
                        var_18 = ((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) arr_11 [i_7 - 1] [i_9])) ? (((/* implicit */int) var_0)) : (arr_1 [i_4] [7]))))) & (((((/* implicit */int) arr_15 [(unsigned char)13] [i_7 - 1])) | (((/* implicit */int) arr_10 [i_7 - 1] [i_8 - 2]))))));
                        var_19 = ((/* implicit */signed char) (-(((1585303107856076323ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65519)))))));
                        var_20 = ((/* implicit */unsigned int) (~((~(((((/* implicit */_Bool) var_4)) ? (arr_2 [22ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)70)))))))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12418)) ? (((/* implicit */int) (signed char)57)) : (((/* implicit */int) (short)518))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_8] [i_7 - 1])) ? (arr_37 [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_8] [i_8 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-57)))))) : (max((max((17303373306602921653ULL), (((/* implicit */unsigned long long int) arr_6 [i_8])))), (((/* implicit */unsigned long long int) arr_0 [i_10] [i_8 - 1]))))));
                        var_22 = ((/* implicit */unsigned long long int) max((min((((/* implicit */int) arr_28 [i_7 + 1])), (arr_1 [i_7 + 1] [i_8 + 1]))), (((-48467259) + (((/* implicit */int) arr_29 [i_7 + 1]))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        var_23 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (unsigned short)17)), (max((((((/* implicit */_Bool) arr_14 [8ULL])) ? (arr_9 [i_4] [i_7] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_4]))))), (((/* implicit */unsigned long long int) arr_27 [i_7 + 1]))))));
                        var_24 = ((/* implicit */unsigned int) arr_14 [i_4]);
                        arr_40 [i_7] [i_7] [i_7] [i_11] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) (unsigned short)65499)) ? (((/* implicit */unsigned long long int) 1203060233)) : (575897802350002176ULL))));
                    }
                }
            } 
        } 
    }
    var_25 = var_6;
    /* LoopNest 3 */
    for (signed char i_12 = 2; i_12 < 21; i_12 += 4) 
    {
        for (unsigned short i_13 = 0; i_13 < 24; i_13 += 2) 
        {
            for (long long int i_14 = 2; i_14 < 21; i_14 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_15 = 0; i_15 < 24; i_15 += 3) 
                    {
                        arr_52 [i_12] [i_13] [17] [i_15] = ((/* implicit */short) (((((~(var_6))) | (((((/* implicit */int) arr_8 [i_14 - 1])) ^ (((/* implicit */int) (unsigned short)65518)))))) < (((((/* implicit */_Bool) arr_46 [i_15] [(short)13] [i_13] [i_12 + 2])) ? ((+(arr_48 [i_12] [i_13] [i_14] [i_15]))) : (max((((/* implicit */int) arr_49 [16ULL] [i_14 + 1] [i_15])), (-1907439657)))))));
                        var_26 = ((/* implicit */unsigned long long int) arr_44 [i_12]);
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((int) ((long long int) ((((/* implicit */_Bool) arr_7 [i_12] [i_14] [4])) ? (var_6) : (arr_50 [i_12 - 2] [i_12 + 1] [i_13] [i_13] [20LL]))))))));
                    }
                    for (unsigned char i_16 = 2; i_16 < 22; i_16 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 575897802350002178ULL)) ? (-267688317) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) var_2))));
                        arr_55 [11] [11] [i_13] [i_12] = ((/* implicit */unsigned long long int) (+(max((-267688317), (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-64)), ((unsigned short)17))))))));
                    }
                    for (int i_17 = 0; i_17 < 24; i_17 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_18 = 1; i_18 < 22; i_18 += 2) 
                        {
                            var_29 = ((/* implicit */int) max((var_29), (((((((/* implicit */_Bool) arr_54 [i_12] [i_12 + 2] [i_14 - 1] [i_18 + 2] [i_14 - 1] [i_18])) && (((/* implicit */_Bool) arr_48 [i_12] [i_12 - 2] [i_14 - 2] [i_18 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((arr_56 [i_18] [(signed char)21] [i_14] [i_12]), (arr_60 [i_12] [i_13] [i_14])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_12] [i_13] [i_14 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))))))) : (4096)))));
                            var_30 |= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27577)) ? (((/* implicit */long long int) 4085)) : (-4041842156023569938LL))))));
                        }
                        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_45 [i_12 - 1])) && (((/* implicit */_Bool) arr_7 [i_12 - 1] [i_14] [i_14]))))))));
                        var_32 = ((/* implicit */signed char) arr_59 [i_17] [i_14 + 2] [i_13] [(short)21] [i_12 + 3]);
                        arr_62 [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [16ULL] [i_13] [i_12] [i_13] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_46 [i_12] [(unsigned short)22] [(unsigned short)22] [i_12])) || (((/* implicit */_Bool) arr_57 [i_12])))))) : (var_9)))) ? (((((/* implicit */_Bool) (signed char)118)) ? (((long long int) arr_54 [i_12] [i_13] [20LL] [i_17] [i_13] [i_14])) : (((/* implicit */long long int) ((int) arr_9 [11] [i_13] [i_12]))))) : ((((!(((/* implicit */_Bool) var_2)))) ? (max((((/* implicit */long long int) arr_46 [i_12 + 3] [5] [i_14] [(unsigned short)22])), (var_9))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_12] [i_13] [(short)9]))))))))));
                    }
                    var_33 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)23083))));
                    var_34 = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_10 [i_12 - 2] [i_13]))))))));
                    var_35 = ((/* implicit */long long int) max(((~(var_6))), (((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (arr_12 [i_14 - 1] [i_13] [i_13] [i_12] [i_12 - 2]) : (5645080788857142745ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)65532), ((unsigned short)9))))))))));
                }
            } 
        } 
    } 
}
