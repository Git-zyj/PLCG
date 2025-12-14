/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61363
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_3))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((var_8) ? (((/* implicit */unsigned long long int) -1339175328)) : (var_1))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)50)))))))) ? ((+(-2784642731230348726LL))) : (-3544088051410132121LL)));
                    var_12 = ((/* implicit */unsigned short) arr_4 [i_0] [i_0]);
                    arr_9 [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */int) (+(7771650694575374526LL)));
                }
            } 
        } 
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)12570))))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        arr_13 [(unsigned short)2] = ((/* implicit */int) max(((~((~(3216607444U))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_3] [i_3])) + (arr_5 [i_3]))))));
        arr_14 [i_3] = ((/* implicit */signed char) max(((~((+(263914156))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-40))) != (3544088051410132116LL))))));
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)166)) + (((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) | (-263914157)))));
        var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((((_Bool)1) ? (arr_10 [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3] [i_3]))))) + (((/* implicit */long long int) ((/* implicit */int) (signed char)126)))))) ? (((/* implicit */unsigned long long int) ((-118506823) / (((/* implicit */int) (short)22870))))) : ((((-(13185103300977464089ULL))) / (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_7 [i_3])))))))));
    }
    for (signed char i_4 = 1; i_4 < 21; i_4 += 1) 
    {
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_5)), (arr_15 [i_4 - 1])))) ? (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))), (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_4])) ? (((((/* implicit */_Bool) 17992136231847109020ULL)) ? (((/* implicit */int) (signed char)24)) : (-1339175328))) : (((/* implicit */int) var_2))))))))));
        arr_17 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_4 - 1])) ? (-263914184) : (((/* implicit */int) (signed char)37))));
    }
    for (unsigned long long int i_5 = 1; i_5 < 7; i_5 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-23892)) ? (((/* implicit */int) (short)-16645)) : (((/* implicit */int) var_2))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            for (signed char i_7 = 4; i_7 < 9; i_7 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (signed char i_8 = 4; i_8 < 8; i_8 += 4) 
                    {
                        arr_31 [i_5] [i_6] [i_7] [i_6] [i_5] [i_8] = ((/* implicit */unsigned int) var_11);
                        arr_32 [i_5] [i_6] [i_7 - 3] [i_5] = ((/* implicit */signed char) var_2);
                    }
                    for (short i_9 = 0; i_9 < 10; i_9 += 3) 
                    {
                        var_18 = ((/* implicit */int) (signed char)102);
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((var_9) < (((/* implicit */unsigned long long int) max((1170248621U), (((/* implicit */unsigned int) (unsigned char)201))))))))));
                    }
                    for (int i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
                    {
                        var_20 ^= ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-54))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [2LL] [i_5 + 2]))) * (var_1)))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_0 [i_10] [i_5])))) - ((+(((/* implicit */int) (short)27589))))))) ? (((/* implicit */int) min((arr_28 [i_5] [i_5] [i_7] [4]), (arr_28 [i_5] [i_6] [i_7 - 4] [i_7 - 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-23895)))))));
                    }
                    for (int i_11 = 0; i_11 < 10; i_11 += 1) /* same iter space */
                    {
                        arr_41 [i_5 + 2] [i_5] [i_5] [i_5] [5LL] [i_5] = arr_4 [i_5] [i_6];
                        var_22 ^= ((/* implicit */int) (short)-23900);
                    }
                    arr_42 [i_5] = ((/* implicit */long long int) (~(min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) -1)) ? (6) : (((/* implicit */int) var_0))))))));
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 9; i_12 += 3) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 10; i_13 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) (short)-6364);
                                var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)4948)) : ((+(((((/* implicit */int) var_8)) ^ (var_11)))))));
                                arr_48 [i_5] [i_5] [i_5] [i_12] [i_5] = ((/* implicit */signed char) ((max((((/* implicit */int) arr_11 [i_5])), (((((/* implicit */int) (unsigned char)45)) / (((/* implicit */int) var_7)))))) * (((/* implicit */int) (((~(var_11))) <= (((((/* implicit */_Bool) arr_24 [i_7] [i_7] [i_5] [i_7])) ? (((/* implicit */int) arr_46 [i_5] [7] [i_5] [i_6] [i_7] [i_12] [i_13])) : (((/* implicit */int) (unsigned char)237)))))))));
                                arr_49 [i_5] [i_6] [i_7] [i_5] [i_7] [0LL] [i_12 - 1] = ((/* implicit */short) max((((/* implicit */int) var_10)), (((((/* implicit */int) var_3)) + (((/* implicit */int) min((var_10), (((/* implicit */unsigned char) arr_35 [i_13] [i_13] [(short)1] [i_13] [i_13] [i_13])))))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */int) (signed char)-38)) : (118506823)))) || (((/* implicit */_Bool) var_10))));
                    arr_50 [i_5] [i_5] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_5] [i_5] [8ULL] [i_5])) << (max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (var_9)))), ((-(((/* implicit */int) arr_0 [i_5] [i_5]))))))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((1860663267U), (((/* implicit */unsigned int) var_7)))))));
    var_27 = var_11;
}
