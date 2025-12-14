/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55767
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
    var_16 = ((/* implicit */int) ((unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_14)))) | ((~(((/* implicit */int) (_Bool)0)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (var_4)))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)255))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_5)) + (var_6)))) ? (((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))))) : (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                var_18 *= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned short)62167)))) ? (((((/* implicit */_Bool) (short)-18898)) ? (arr_7 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [i_0])) > (15ULL)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    var_19 = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
                    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) var_15))));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_8))));
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_22 |= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63070))) : ((-9223372036854775807LL - 1LL))))));
                        arr_15 [i_1] [i_3] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)12754))));
                        var_23 |= ((/* implicit */int) (~(var_4)));
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1549578157)) ? (arr_0 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
                    }
                    for (short i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        arr_19 [i_1] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) arr_18 [i_1] [i_1]))) & (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_5]))));
                        var_25 = ((unsigned short) ((var_13) <= (((/* implicit */unsigned long long int) 128))));
                    }
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                }
                var_27 |= ((/* implicit */short) ((arr_12 [i_0] [i_1] [i_2] [i_1] [i_0]) & (((/* implicit */int) arr_5 [i_0] [i_0]))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 2) 
                {
                    for (short i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_6 + 1] [i_7]);
                            var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_6] [i_6] [i_6])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)127)))))));
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) arr_2 [i_1]))));
                        }
                    } 
                } 
                var_31 = (~(((/* implicit */int) (short)-32)));
            }
            var_32 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)41954)) & (((/* implicit */int) (short)-32750))));
            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0])) ? ((+(((/* implicit */int) arr_3 [i_0])))) : ((~(-118))))))));
            var_34 += ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [(unsigned char)6] [i_1] [i_1] [i_0])))) + (2147483647))) >> (((((/* implicit */int) ((unsigned short) arr_14 [i_1] [i_1] [i_1] [(unsigned char)16] [i_1] [i_1] [i_1]))) - (6259)))));
        }
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (short i_9 = 1; i_9 < 20; i_9 += 1) 
            {
                {
                    var_35 += ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1)))))))), ((~((+(var_8)))))));
                    var_36 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */unsigned long long int) var_8)) - (15ULL))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-28003)) : (((/* implicit */int) var_9))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) - (11630077302217042350ULL)))))));
                }
            } 
        } 
        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_7 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4774)))))) ? (((((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0])) >> (((((128) ^ (((/* implicit */int) (signed char)-124)))) + (274))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (4210459144082432016LL) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_0])))))) ? (((/* implicit */int) arr_23 [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        var_38 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) (short)-1))))) ? ((~(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [(unsigned char)3])))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))));
    }
}
