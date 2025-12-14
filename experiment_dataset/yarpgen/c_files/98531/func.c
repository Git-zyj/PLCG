/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98531
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
    var_10 = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_3)))) ^ ((~(-594524673)))));
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) < (((((/* implicit */int) min((var_7), (var_0)))) | (((((/* implicit */int) var_3)) & (-1308219191)))))));
    var_12 = ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */signed char) (unsigned short)6244);
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        arr_12 [i_0 - 1] [i_0] [i_0] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)(-32767 - 1)))))) ? ((+((((_Bool)0) ? (arr_8 [i_0] [(unsigned char)9] [i_1] [i_1] [i_2] [i_3]) : (((/* implicit */unsigned int) var_1)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_8)), (var_7)))) ? (min((var_6), (((/* implicit */int) arr_9 [i_0 - 1] [i_0] [i_0] [i_0])))) : ((~(((/* implicit */int) (unsigned short)1023)))))))));
                        arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (-2147483647 - 1));
                        var_13 -= ((/* implicit */long long int) (unsigned short)65535);
                    }
                    /* LoopSeq 2 */
                    for (long long int i_4 = 1; i_4 < 11; i_4 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_4 [i_2]))));
                        var_15 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_2 [i_0 - 1])))) ? (((((var_8) ? (arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) >> (((((/* implicit */int) arr_1 [i_2])) + (18242))))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_6 [i_1])))))))));
                        arr_18 [i_0 - 1] [i_0 - 1] [i_0 - 1] &= ((/* implicit */int) ((unsigned short) (+(arr_10 [i_0 - 1] [i_0] [i_0 - 1]))));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        var_16 ^= ((/* implicit */signed char) (+(((/* implicit */int) var_3))));
                        arr_23 [i_0] [i_0 - 1] [i_1] [i_2] [(short)0] [(unsigned short)11] = (+(((-2147483628) & (-142321093))));
                        arr_24 [i_0 - 1] [(short)11] [i_2] [(unsigned char)1] = ((/* implicit */long long int) (short)-4092);
                        arr_25 [i_2] [i_1] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) var_5)) == (((/* implicit */int) (unsigned char)0)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 3; i_7 < 9; i_7 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (~(((/* implicit */int) max(((signed char)-1), (arr_2 [i_0 - 1])))))))));
                                arr_30 [i_6] [i_6] = ((int) (unsigned short)12);
                                var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)31)) ? (arr_15 [8ULL] [(short)11] [i_2] [8ULL] [i_7 + 2] [i_7]) : (((/* implicit */long long int) ((((/* implicit */_Bool) -145434396)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)32256)))))));
                                var_19 = ((/* implicit */signed char) (~(min((arr_10 [i_1] [i_6] [(short)4]), (arr_10 [i_1] [i_2] [i_2])))));
                                arr_31 [i_0] [i_6] [i_2] [i_2] [i_6] [i_7 - 1] [(short)8] = ((/* implicit */unsigned short) arr_19 [i_0] [i_1] [i_2] [i_6]);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) min(((unsigned short)32256), ((unsigned short)1)))), (((long long int) arr_8 [i_0 - 1] [i_1] [i_1] [i_2] [i_2] [i_2]))))) ? (arr_0 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                }
            } 
        } 
    } 
    var_21 = (!(((/* implicit */_Bool) ((max((15161574742037808867ULL), (((/* implicit */unsigned long long int) (short)-4092)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_8), ((_Bool)1)))))))));
}
