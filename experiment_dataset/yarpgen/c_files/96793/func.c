/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96793
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) var_7))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_15 ^= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_12 [i_4 + 2] [i_1] [i_2] [(unsigned short)13] [i_4] [i_0])) : (((/* implicit */int) (short)6555))))) ? ((-(((/* implicit */int) (short)6555)))) : (((((/* implicit */_Bool) arr_3 [i_2] [13ULL])) ? (var_5) : (((/* implicit */int) var_13))))))));
                                arr_13 [i_0] [i_1] [(_Bool)1] [(signed char)7] [i_4] [i_4 + 1] = ((/* implicit */_Bool) (signed char)-29);
                                var_16 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-6555))) ^ (647016199655658085LL)));
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] [i_4 + 1] |= (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) (unsigned short)60641))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_2] = ((/* implicit */int) var_7);
                }
                for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    var_17 += ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 11546153064309178867ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)28))))) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_5])) : (((/* implicit */int) arr_12 [i_5] [i_1] [i_1] [i_0] [i_0] [1LL]))))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 2; i_6 < 15; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            {
                                var_18 -= ((/* implicit */_Bool) (unsigned short)25347);
                                var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 0ULL))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))) : (var_12)));
                                var_20 = ((long long int) min((arr_10 [i_6] [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 - 2]), (((/* implicit */int) var_2))));
                                var_21 = arr_6 [i_0] [i_1];
                            }
                        } 
                    } 
                    arr_24 [i_0] [i_1] [i_5] &= ((/* implicit */int) (short)6555);
                }
                /* vectorizable */
                for (long long int i_8 = 0; i_8 < 16; i_8 += 4) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)0))))) : (((var_3) ^ (((/* implicit */long long int) var_8)))))))));
                    var_23 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((long long int) (short)768))) > (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_0 [i_0] [i_0])))));
                    var_24 = ((/* implicit */_Bool) min((var_24), (((((/* implicit */int) ((-598952098) == (((/* implicit */int) (unsigned short)19456))))) > (((/* implicit */int) (signed char)-46))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 1; i_9 < 13; i_9 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_11))));
                        var_26 ^= arr_12 [i_9 - 1] [i_9 - 1] [(unsigned short)7] [i_9 + 2] [i_9 + 1] [i_9 + 2];
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        var_27 = ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-6555))) : (((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */long long int) ((/* implicit */int) (short)25749))) : (72057594035830784LL))));
                        arr_33 [i_0] [i_1] [i_0] [i_8] [i_8] [i_10] = ((/* implicit */short) ((int) arr_31 [i_8] [i_1]));
                    }
                }
                /* vectorizable */
                for (long long int i_11 = 0; i_11 < 16; i_11 += 4) /* same iter space */
                {
                    var_28 = ((/* implicit */long long int) arr_30 [i_0] [i_1] [i_11] [i_0] [(short)2]);
                    var_29 = (((!(((/* implicit */_Bool) (signed char)28)))) ? (1384554645083647940ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_6 [i_1] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                arr_42 [i_13] [i_11] [i_12] [i_13] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_10) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ^ (11434235185624108191ULL)));
                                var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (+(var_12))))));
                            }
                        } 
                    } 
                }
                arr_43 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (~(((var_9) | (var_9)))))), (((unsigned long long int) ((((/* implicit */_Bool) (short)28564)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (3481651208661343648LL))))));
                var_31 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) ((arr_19 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_30 [(short)8] [(short)8] [10LL] [(_Bool)1] [i_1])))) && (((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-29)), (-5709594231437749034LL))))))));
            }
        } 
    } 
    var_32 &= ((/* implicit */int) ((((/* implicit */_Bool) (~(((var_10) ? (707411300U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -598952098)))) : ((-(((unsigned long long int) var_11))))));
    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((_Bool) (_Bool)1))))) != (var_5)));
    var_34 = ((/* implicit */unsigned long long int) var_2);
    var_35 *= ((/* implicit */_Bool) var_1);
}
