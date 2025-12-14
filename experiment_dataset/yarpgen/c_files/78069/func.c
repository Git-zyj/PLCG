/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78069
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [(short)6] [i_1 - 2] [i_2] [i_1 - 2] = ((5326037051857086949ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21391))));
                        var_15 = ((/* implicit */short) ((unsigned int) arr_2 [i_1 - 3] [i_1 - 4]));
                    }
                    arr_12 [i_2] [i_1] [i_0] = ((/* implicit */int) (-(arr_4 [i_2] [i_1 - 4])));
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (~(((-1489162895) | (((/* implicit */int) var_7)))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */int) (+(var_8)));
                        arr_16 [(short)12] [i_1] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) (~(((-1489162903) | (((/* implicit */int) (short)255))))));
                        var_18 -= ((/* implicit */short) ((((/* implicit */int) var_12)) > (((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
                    {
                        arr_19 [(short)1] [(short)1] [i_1] [i_5] [(short)1] = ((/* implicit */short) var_8);
                        arr_20 [i_5] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) - (arr_7 [i_1 - 4] [i_1 - 2] [(unsigned char)7] [i_5])));
                    }
                }
                /* LoopSeq 2 */
                for (unsigned short i_6 = 4; i_6 < 11; i_6 += 3) 
                {
                    var_19 = ((/* implicit */signed char) ((unsigned short) var_11));
                    var_20 -= max((((/* implicit */int) ((unsigned char) (((_Bool)1) ? (arr_8 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [5]))))))), (((((((/* implicit */_Bool) 134217728U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))) >> (((((4160749575U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) - (134189596U))))));
                }
                for (long long int i_7 = 3; i_7 < 9; i_7 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        arr_29 [i_8] [i_8] [i_8] [i_0] = ((/* implicit */unsigned short) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -1338871252715153159LL)) && (((/* implicit */_Bool) (unsigned char)0)))))));
                        /* LoopSeq 1 */
                        for (signed char i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            arr_32 [i_8] [i_1] [i_7] [i_7] [i_8] = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) - (var_4)))));
                            var_22 = ((/* implicit */long long int) (((-(((/* implicit */int) (unsigned short)16470)))) >= ((~(((/* implicit */int) var_13))))));
                            arr_33 [i_0] [i_0] [(unsigned short)3] [i_8] [2LL] [i_7] = ((/* implicit */unsigned char) ((((9223372036846387200LL) >> (((((/* implicit */int) (unsigned short)16470)) - (16433))))) & (((/* implicit */long long int) ((((/* implicit */int) var_12)) % (((/* implicit */int) arr_30 [i_0] [i_8 - 1] [i_8] [i_1 - 1] [i_0])))))));
                        }
                    }
                    var_23 = ((/* implicit */unsigned long long int) (_Bool)0);
                }
                arr_34 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_9)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 1716856991U)))))))) ? (((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_24 [i_0] [i_0] [i_1]))))) > (3569044722988986322LL)))) : (((((-1489162895) | (((/* implicit */int) var_10)))) % (((/* implicit */int) var_14))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) var_10);
}
