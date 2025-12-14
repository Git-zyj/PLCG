/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82748
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_20 = ((/* implicit */_Bool) arr_3 [i_0]);
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)19648)) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (signed char)33)) : (arr_1 [i_0]))) : (((/* implicit */int) (unsigned short)65535))));
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 3; i_1 < 12; i_1 += 2) 
    {
        for (short i_2 = 1; i_2 < 12; i_2 += 1) 
        {
            {
                arr_8 [13LL] [(unsigned short)4] [13LL] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 + 2] [i_2 + 2])) ? (((/* implicit */long long int) arr_1 [i_2])) : (arr_6 [13])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [4] [4])) ? (arr_6 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-34)))))) : (max((((/* implicit */unsigned long long int) arr_6 [i_1 + 1])), (arr_0 [i_2])))))) ? (max((((/* implicit */unsigned long long int) (~(arr_5 [(unsigned short)8])))), (((((/* implicit */_Bool) (unsigned short)5)) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) arr_5 [i_2])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned short)19])))));
                /* LoopNest 3 */
                for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 3; i_5 < 13; i_5 += 4) 
                        {
                            {
                                arr_15 [i_3] [i_3] [i_3] [i_3] [i_5 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)16), (arr_2 [(unsigned short)20])))) ? (arr_6 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_9 [i_3] [(unsigned short)0] [i_3] [i_3]))))))) ? (((unsigned int) ((((/* implicit */_Bool) arr_10 [7] [i_3] [i_5 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [(short)5]))) : (arr_6 [i_4])))) : (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 201326592U)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned char)33))))))));
                                arr_16 [i_3] [i_3] = ((/* implicit */signed char) ((_Bool) (~((-(5599787530470228453LL))))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 3])) ? (((/* implicit */int) min((arr_4 [i_1] [i_1]), (arr_11 [i_1] [(_Bool)1] [(_Bool)1])))) : (((arr_1 [7U]) | (((/* implicit */int) arr_2 [i_1]))))))) % ((+(-1LL)))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4850245202930647025LL)) ? (((((/* implicit */_Bool) 4093640698U)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_12 [10LL])))) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_10 [i_1 + 2] [(unsigned short)0] [(unsigned short)0])) : (1001875860)))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_13 [i_2 - 1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_10 [0U] [(unsigned char)4] [(unsigned char)6])) : (((/* implicit */int) arr_11 [i_1] [i_1 - 1] [(short)12]))))))) : (max((((((/* implicit */_Bool) arr_7 [i_1 + 2] [i_1 + 2])) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) arr_1 [i_1])))), (((/* implicit */unsigned long long int) (unsigned char)252)))))))));
                arr_17 [(unsigned short)1] [(unsigned short)1] [(unsigned short)1] = ((/* implicit */unsigned long long int) (signed char)109);
                arr_18 [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)11800))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (-(max((var_13), (((/* implicit */unsigned long long int) var_5))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(-714631910)))) ? ((-(((/* implicit */int) (short)-7850)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)45949)) : (((/* implicit */int) var_11))))))) : (var_14)));
    /* LoopSeq 1 */
    for (unsigned int i_6 = 1; i_6 < 20; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                {
                    arr_26 [i_6] [i_6] [i_6] [i_7] = (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_6 - 1])) ? (((/* implicit */unsigned long long int) 403280946379666986LL)) : (arr_3 [i_6 - 1]))))))));
                    var_25 = ((/* implicit */long long int) ((unsigned int) max((arr_23 [i_6 - 1] [i_6 - 1] [i_8]), (((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_6]))))))));
                    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned short)65533), (((/* implicit */unsigned short) (_Bool)1)))))))) ? (((/* implicit */int) (short)(-32767 - 1))) : ((-(min((arr_1 [12U]), (-854991917)))))));
                }
            } 
        } 
        arr_27 [(signed char)8] [i_6 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_24 [i_6] [i_6] [i_6 - 1] [i_6]))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) 0U))))))) : (max(((-(((/* implicit */int) arr_20 [i_6 + 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)49)))))))));
    }
}
