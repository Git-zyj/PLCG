/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87208
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
    var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) var_4))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */short) ((unsigned char) ((unsigned short) var_2)));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 24; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_15 [19U] [i_1] [19U] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (short)10467))) == (((/* implicit */int) ((unsigned short) var_4)))));
                                var_11 += max(((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63947))) >= (3040588029U)))))), (((/* implicit */int) (unsigned char)127)));
                                arr_16 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) 1254379267U))) ? (max((var_0), (((/* implicit */long long int) arr_14 [11LL] [i_1] [i_2] [i_1] [8LL] [i_4 + 2])))) : (((/* implicit */long long int) 1254379267U))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 1) 
                    {
                        arr_19 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_0] [i_2] [i_5]);
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 1; i_6 < 21; i_6 += 4) 
                        {
                            var_12 = ((/* implicit */unsigned char) (-(((2706037658U) << (((/* implicit */int) (_Bool)1))))));
                            arr_22 [(short)13] [i_5] [i_6] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) (-(1313396501U)));
                            arr_23 [i_6] [i_1] [(unsigned short)2] [i_1] [i_6] = ((/* implicit */unsigned char) max((1254379265U), (((/* implicit */unsigned int) -137065002))));
                            var_13 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((unsigned int) (~(-2111922952))))) ^ (((long long int) ((((/* implicit */_Bool) 3040588054U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-10669))) : (4294967275U))))));
                            arr_24 [i_0] [i_1] [i_2] [i_1] [i_6] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5] [i_5 + 1] [(unsigned short)23]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_5 - 1] [i_5 + 2] [i_5 + 1] [i_5 + 2] [(_Bool)1] [i_5 + 2])) && (arr_20 [i_5 + 1] [i_5] [i_5 - 1] [(unsigned short)17] [i_5] [i_5]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5 + 1] [i_5 + 2] [i_5 - 1] [i_5] [i_5 - 1] [i_5]))) % (var_9)))));
                        }
                        var_14 += ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)50962)) % (((/* implicit */int) (unsigned short)43260))));
                    }
                    for (unsigned char i_7 = 3; i_7 < 24; i_7 += 4) 
                    {
                        arr_27 [(_Bool)1] [i_7] [i_2] [(unsigned char)3] = ((/* implicit */unsigned short) (short)-7230);
                        var_15 = ((/* implicit */unsigned long long int) (short)-10669);
                        var_16 = ((/* implicit */unsigned long long int) (((-(arr_17 [i_7 - 1] [i_7 - 3]))) == (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)20431)))))));
                    }
                    var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_1 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (short)0)))) : (arr_4 [i_0] [i_1] [i_2])))) ? (((((/* implicit */unsigned long long int) 137065002)) / (8130877392240489053ULL))) : (((/* implicit */unsigned long long int) (-(4294967253U))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_8) : (var_8)));
    var_19 = max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43260)) ? (1688230933121378082LL) : (var_0)))))), (((var_0) <= (((/* implicit */long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_6))))))));
}
