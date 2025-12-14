/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70638
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) 263137800)) ? (8195588938234250971LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (signed char)(-127 - 1))) / (-263137800))), ((+(((/* implicit */int) (short)-27615))))));
                }
                /* LoopSeq 4 */
                for (unsigned short i_3 = 3; i_3 < 17; i_3 += 3) 
                {
                    arr_10 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */short) var_6);
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_0)) : (var_3))) : (((/* implicit */unsigned long long int) (~(263137817))))))) ? ((~(((/* implicit */int) (short)27625)))) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)3))))));
                }
                for (signed char i_4 = 2; i_4 < 15; i_4 += 1) 
                {
                    var_14 &= ((/* implicit */signed char) (((-(5465165991512419934LL))) - (((/* implicit */long long int) ((((/* implicit */_Bool) -5401595327612265492LL)) ? (((/* implicit */int) (short)-10674)) : (((/* implicit */int) arr_1 [i_4 + 4])))))));
                    var_15 &= ((/* implicit */_Bool) (-((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 263137800)) : (var_3)))))));
                    var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_8 [i_1] [i_4 - 1] [i_4] [(signed char)0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 422738326115492836ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_4 + 2] [i_4] [(unsigned char)8])))))));
                }
                for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    var_17 += ((/* implicit */long long int) -263137781);
                    var_18 = ((/* implicit */signed char) 1742084583);
                }
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    var_19 ^= ((/* implicit */unsigned int) (~(263137755)));
                    var_20 += ((/* implicit */long long int) (signed char)-102);
                    arr_19 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)52518)))))))) != ((-(((/* implicit */int) (unsigned char)255))))));
                    var_21 = ((/* implicit */int) (~(((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1LL)))));
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (short)10689)))) ? (((long long int) -263137770)) : ((~(arr_15 [i_6 + 1] [i_1]))))))));
                }
                arr_20 [i_1] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) var_7);
    var_24 = ((/* implicit */short) var_9);
    var_25 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (long long int i_7 = 1; i_7 < 10; i_7 += 1) 
    {
        for (unsigned char i_8 = 2; i_8 < 11; i_8 += 3) 
        {
            {
                arr_26 [i_7] = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_7]))));
                var_26 = ((/* implicit */short) (-((+(((/* implicit */int) (signed char)-125))))));
                /* LoopSeq 1 */
                for (signed char i_9 = 1; i_9 < 10; i_9 += 2) 
                {
                    arr_29 [i_9 - 1] [i_7] [i_9 + 2] = ((/* implicit */unsigned char) (unsigned short)9261);
                    var_27 = ((/* implicit */long long int) var_10);
                    /* LoopSeq 1 */
                    for (short i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        var_28 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)65524))));
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((((/* implicit */_Bool) arr_2 [i_7 + 2] [7])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))))));
                    }
                }
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    for (unsigned int i_12 = 2; i_12 < 11; i_12 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (long long int i_13 = 3; i_13 < 8; i_13 += 1) 
                            {
                                arr_38 [i_7] [i_7] [i_11] [i_8] [i_7] = ((/* implicit */unsigned char) ((((1482505192) == (((/* implicit */int) (unsigned short)65535)))) ? (((/* implicit */unsigned int) (~(arr_30 [i_13 - 1] [i_7] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 + 1])))) : ((+(4105803929U)))));
                                var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) -425583886)) ? (var_8) : (((/* implicit */int) var_4)))))) ? (max((var_9), (((/* implicit */long long int) (unsigned short)12)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_7 + 1] [i_12] [i_13 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)14))))))))));
                                var_31 ^= ((/* implicit */unsigned short) (+((~(((/* implicit */int) (short)-14202))))));
                            }
                            /* vectorizable */
                            for (unsigned short i_14 = 4; i_14 < 11; i_14 += 2) 
                            {
                                var_32 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 16777215LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))));
                                var_33 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)31910)) ? (((/* implicit */int) (short)1609)) : (((/* implicit */int) var_5))));
                                var_34 = ((/* implicit */unsigned int) var_7);
                            }
                            arr_41 [i_7] [i_8] [i_7] [i_12] = ((/* implicit */int) ((((/* implicit */int) (short)14)) == (((/* implicit */int) (short)10689))));
                        }
                    } 
                } 
                var_35 ^= (~(((/* implicit */int) (short)14204)));
            }
        } 
    } 
}
