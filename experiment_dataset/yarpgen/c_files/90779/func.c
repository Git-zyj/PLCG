/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90779
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)30220))))) : (((min(((_Bool)0), ((_Bool)1))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)23766)) > (-1116999611)))) : (706193627)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            arr_9 [i_1] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) -4882146895744127071LL)) ? (-4882146895744127071LL) : (((/* implicit */long long int) 3968)))));
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                arr_12 [i_2] [4U] [i_2] [i_2] |= ((/* implicit */short) 706193638);
                arr_13 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) arr_1 [i_1 - 1]);
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_11 [i_1 - 1] [i_1 + 1] [i_1]))));
            }
            for (int i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 4; i_4 < 23; i_4 += 1) 
                {
                    for (unsigned short i_5 = 1; i_5 < 23; i_5 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [2U] [2U] [16LL] [i_3] [i_4])) ? (arr_18 [i_5 + 2] [i_5] [i_5] [i_5 + 1] [4U] [i_5 - 1]) : (arr_18 [i_4] [i_4] [i_4 - 2] [i_4] [(unsigned short)22] [i_5 + 2]))))));
                            var_18 = ((/* implicit */signed char) (+(arr_14 [i_1] [i_4 + 1] [i_3] [i_1])));
                            var_19 ^= ((/* implicit */int) ((((/* implicit */_Bool) 1180893378U)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)255)))) : (2787697379021621406LL)));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_6 = 2; i_6 < 21; i_6 += 1) 
                {
                    var_20 -= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_19 [16LL] [16LL] [i_1] [4] [(short)20]))) * (((/* implicit */int) arr_11 [i_0] [6U] [(unsigned char)16]))));
                    var_21 &= ((((/* implicit */int) arr_1 [i_1 + 1])) == ((~(((/* implicit */int) (_Bool)1)))));
                    var_22 = ((/* implicit */unsigned short) 2999323694U);
                }
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    arr_26 [i_3] [i_1] [8] [24U] = ((/* implicit */unsigned int) (~(arr_18 [i_1 + 1] [i_1] [(unsigned short)21] [i_1 + 1] [i_1] [i_1 + 1])));
                    arr_27 [i_7] [i_1] [i_3] [i_7] [i_0] [i_3] = (+(((/* implicit */int) arr_21 [i_1] [i_1 + 1] [(unsigned char)9] [i_1])));
                    var_23 = ((/* implicit */int) ((17293827135667918699ULL) / (((/* implicit */unsigned long long int) -1039247791))));
                }
                arr_28 [16] [i_1] [i_1] = ((/* implicit */int) ((long long int) ((arr_5 [24ULL] [(signed char)24] [i_3]) <= (arr_24 [i_1] [i_3]))));
                arr_29 [i_1] = ((/* implicit */long long int) -1469064566);
            }
            for (unsigned int i_8 = 3; i_8 < 23; i_8 += 1) 
            {
                var_24 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_21 [(signed char)0] [i_1 + 1] [i_8] [16LL]))) ? (((/* implicit */unsigned long long int) arr_0 [i_1 - 1])) : (((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_1 - 1] [i_1 - 1] [(unsigned char)6] [i_8])) ? (arr_22 [16U] [16U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117)))))));
                /* LoopSeq 2 */
                for (long long int i_9 = 1; i_9 < 21; i_9 += 1) 
                {
                    arr_34 [i_1] [i_8] [3ULL] [i_1] = ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (((((/* implicit */int) arr_33 [(unsigned short)15] [(unsigned short)15] [i_1] [i_0])) % (((/* implicit */int) arr_10 [i_0] [i_0] [i_0])))) : (((((/* implicit */int) (unsigned char)7)) & (((/* implicit */int) arr_23 [16ULL] [i_1 - 1])))));
                    var_25 = ((/* implicit */signed char) 1263292903);
                }
                for (unsigned long long int i_10 = 2; i_10 < 22; i_10 += 2) 
                {
                    arr_38 [i_0] [i_0] [(unsigned char)18] [i_8] [i_10] [i_10] &= ((/* implicit */signed char) ((unsigned short) ((signed char) arr_1 [i_8])));
                    arr_39 [i_1] [i_10] [i_8] [(unsigned char)3] [(unsigned char)3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_10])) ? (((/* implicit */int) arr_20 [i_0] [i_1] [(unsigned short)1] [i_1] [14] [i_1 - 1])) : (((/* implicit */int) arr_2 [i_10]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1] [i_1] [i_10 - 2] [i_8 - 1]))) : (((-1931265715689228986LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16676)))))));
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) 119720638U)) ? (-2787697379021621413LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)140))))))));
                }
            }
        }
    }
    var_27 = ((/* implicit */long long int) var_8);
    /* LoopNest 2 */
    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
    {
        for (short i_12 = 3; i_12 < 17; i_12 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_13 = 2; i_13 < 20; i_13 += 2) 
                {
                    for (short i_14 = 0; i_14 < 21; i_14 += 4) 
                    {
                        for (signed char i_15 = 3; i_15 < 20; i_15 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) min((((/* implicit */int) (short)-15034)), (((int) arr_20 [4ULL] [4ULL] [20U] [i_14] [(_Bool)1] [i_15]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2080218567)) ? (((/* implicit */int) (unsigned short)36590)) : (((/* implicit */int) (signed char)45))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 7223797393814152952LL)) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) (unsigned char)0))))) : (min((2999323694U), (((/* implicit */unsigned int) (signed char)-10)))))))))));
                                var_29 = ((/* implicit */unsigned short) arr_1 [i_11]);
                                var_30 |= ((/* implicit */short) ((_Bool) ((((/* implicit */int) (unsigned short)4560)) >> (((((/* implicit */int) (signed char)-3)) + (14))))));
                            }
                        } 
                    } 
                } 
                var_31 |= (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) -1762233737)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-90)))))));
                arr_51 [i_11] [i_12] = ((/* implicit */int) ((unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (unsigned char)4)))));
            }
        } 
    } 
    var_32 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (var_14)))) ? (-1762233736) : (((/* implicit */int) ((((/* implicit */_Bool) 16ULL)) && (((/* implicit */_Bool) (unsigned char)104))))))));
    var_33 += 55117947913142596ULL;
}
