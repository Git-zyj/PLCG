/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87597
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
    var_16 = ((/* implicit */int) var_14);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) min(((~(arr_0 [i_0] [i_1]))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_0] [i_1])))))));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) 3645692239U);
            /* LoopNest 2 */
            for (unsigned short i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        arr_13 [i_1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2 - 1])) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_2])) : (var_5)))), (16605144562194286823ULL)));
                        arr_14 [i_3] [i_2 + 2] [i_1] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (+(3374760962U)))) || (((/* implicit */_Bool) arr_11 [i_3] [i_2]))));
                        arr_15 [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) arr_0 [i_0] [i_3]);
                    }
                } 
            } 
        }
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            arr_19 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [i_0] [i_0] [i_4 + 1])) != (max(((+(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_4])))), (((/* implicit */int) (unsigned short)0))))));
            arr_20 [i_0] [(_Bool)1] = arr_0 [i_0] [i_0];
            arr_21 [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) (+((-(arr_12 [i_4 + 1])))));
        }
        arr_22 [2ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */unsigned int) var_15)), (arr_4 [i_0] [i_0] [(_Bool)1]))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_16 [i_0] [15] [i_0])) : (arr_17 [i_0] [i_0] [i_0])))))))) & ((-(max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned short)60136))))))));
    }
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        arr_25 [i_5] = ((/* implicit */_Bool) (-((+(((/* implicit */int) (_Bool)1))))));
        arr_26 [i_5] |= var_12;
    }
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            {
                arr_31 [i_6] [12] [i_6] |= ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_6] [i_7])) || (((/* implicit */_Bool) arr_9 [(unsigned short)12] [i_7])))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned char)10] [i_7])))))) == (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) % (649275074U)))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_27 [(unsigned char)0])) ? (((/* implicit */int) arr_2 [i_6])) : (((/* implicit */int) arr_11 [i_6] [i_7])))))));
                /* LoopSeq 1 */
                for (unsigned char i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    arr_36 [i_7] [i_6] [i_6] [i_8] = ((/* implicit */unsigned short) arr_29 [i_7] [i_6]);
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_39 [i_6] [i_9] [(unsigned short)10] |= ((/* implicit */unsigned short) arr_35 [i_6] [i_7] [i_8] [(unsigned short)6]);
                        arr_40 [i_6] [i_7] [12ULL] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(min((arr_28 [0U]), (((/* implicit */unsigned long long int) arr_34 [i_9] [i_7] [i_6])))))))));
                        arr_41 [(_Bool)1] [i_7] [(unsigned short)14] [i_7] |= max((max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)105)) || (((/* implicit */_Bool) arr_16 [i_9] [i_7] [i_8]))))), (-556432176))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_7] [(unsigned char)18] [i_9])) ? (arr_1 [i_6] [i_7]) : (((/* implicit */int) arr_5 [i_8] [i_9]))))) ? (((/* implicit */int) arr_8 [i_9] [(_Bool)1] [(_Bool)1] [i_6])) : (((/* implicit */int) arr_10 [i_7] [i_8] [i_7])))));
                    }
                    arr_42 [i_6] [i_7] = (i_6 % 2 == zero) ? (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_32 [i_6] [i_6])) ? (arr_32 [i_6] [i_6]) : (arr_32 [i_6] [i_6]))) >> (((((((/* implicit */_Bool) 352884806)) ? (arr_32 [i_6] [i_7]) : (arr_32 [i_6] [i_8]))) - (12249804309460579979ULL)))))) : (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_32 [i_6] [i_6])) ? (arr_32 [i_6] [i_6]) : (arr_32 [i_6] [i_6]))) >> (((((((((/* implicit */_Bool) 352884806)) ? (arr_32 [i_6] [i_7]) : (arr_32 [i_6] [i_8]))) - (12249804309460579979ULL))) - (9290554528501900338ULL))))));
                    arr_43 [i_6] [i_6] [i_7] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_32 [i_6] [i_7]), (((/* implicit */unsigned long long int) var_14))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))) : (((arr_0 [(unsigned short)6] [(_Bool)1]) & (arr_4 [i_6] [i_7] [i_8])))))) ? ((~(max((((/* implicit */int) arr_34 [i_6] [i_6] [i_6])), (var_5))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_11)))))))));
                }
                arr_44 [i_6] [i_6] = ((arr_18 [i_6] [i_7] [i_6]) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (_Bool)0)));
                /* LoopNest 3 */
                for (unsigned char i_10 = 0; i_10 < 16; i_10 += 3) 
                {
                    for (unsigned short i_11 = 0; i_11 < 16; i_11 += 3) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 16; i_12 += 1) 
                        {
                            {
                                arr_55 [i_6] [i_6] [i_6] [i_6] [i_12] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_12] [i_6] [i_6] [i_7])) / (((/* implicit */int) arr_8 [i_11] [i_6] [i_10] [i_11]))))) ? (((/* implicit */int) arr_8 [i_7] [i_6] [i_11] [i_12])) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_38 [i_11] [i_7])), ((unsigned short)10946)))));
                                arr_56 [i_12] [i_12] [i_10] [i_12] [4ULL] [i_6] = ((/* implicit */unsigned short) max(((((+(((/* implicit */int) (unsigned short)10946)))) != (arr_17 [i_6] [i_10] [i_11]))), (((((/* implicit */_Bool) 201326592U)) || ((_Bool)1)))));
                                arr_57 [i_12] [i_6] [i_10] [i_6] [i_6] = (unsigned short)51142;
                                arr_58 [i_6] [i_6] [i_7] = ((/* implicit */_Bool) max(((unsigned char)16), (((/* implicit */unsigned char) (_Bool)1))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
