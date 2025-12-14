/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90764
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
    var_11 &= ((/* implicit */unsigned char) var_0);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_12 += ((/* implicit */unsigned int) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] [i_3 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19930)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) && (((/* implicit */_Bool) arr_9 [(_Bool)1] [(_Bool)1] [i_2 + 1] [(_Bool)1] [i_4]))))) : (((((/* implicit */int) arr_3 [(short)12] [i_2 + 1])) / (((/* implicit */int) arr_7 [i_3] [i_2] [i_1]))))))) ? (max((((/* implicit */long long int) arr_10 [i_3] [i_3 + 1] [i_3 + 1] [(short)6] [i_4])), (arr_4 [i_2] [i_3 + 1] [i_4] [i_4]))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (short)-14968)) > (((/* implicit */int) var_6))))), (arr_11 [2] [i_1] [i_2] [i_2 + 1] [i_4] [i_1] [i_2]))))));
                                var_13 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-19930))))), (max((arr_8 [i_0] [i_1] [i_2 + 1] [i_3 - 1] [i_4]), (arr_8 [i_4] [i_1] [i_2 - 1] [i_3 - 1] [i_4])))));
                                var_14 = ((/* implicit */unsigned short) max(((-(arr_4 [i_0] [i_2 + 1] [i_2 + 1] [i_3]))), (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_4 [i_4] [i_3 - 1] [(unsigned char)8] [(unsigned char)0])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_2 + 1] [i_3] [i_4])) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_2 + 1])))))))));
                                var_15 = ((/* implicit */unsigned short) max((((/* implicit */int) (short)-19930)), (1048064)));
                                arr_13 [i_4] [i_3] [i_1] = ((/* implicit */unsigned char) ((_Bool) min((((((/* implicit */_Bool) (unsigned char)137)) ? (3352014452079267448LL) : (((/* implicit */long long int) -1153857258)))), (((/* implicit */long long int) (~(((/* implicit */int) var_9))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) - (arr_8 [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_11 [i_0] [i_0] [i_2 - 1] [i_0] [i_2 - 1] [i_2 + 1] [i_2]) : (arr_11 [(unsigned short)8] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]))))));
                }
            } 
        } 
        var_17 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))) ? ((~(((/* implicit */int) var_3)))) : (((int) arr_2 [i_0] [i_0] [i_0])));
        var_18 = ((/* implicit */int) ((_Bool) ((unsigned char) (-(((/* implicit */int) arr_1 [i_0]))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_5]))))), (max((((/* implicit */unsigned int) var_9)), (2612177087U))))), (((/* implicit */unsigned int) (unsigned char)109))));
        arr_16 [i_5] |= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_2 [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_2 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_2 [i_5] [(short)18] [i_5])))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_6 = 1; i_6 < 22; i_6 += 4) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_6 + 1])) ? (((arr_17 [i_6]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_17 [i_6 + 1]))));
        arr_19 [i_6] [i_6] = ((/* implicit */unsigned int) ((unsigned long long int) arr_18 [i_6 + 1]));
        arr_20 [i_6] = ((/* implicit */unsigned int) ((arr_17 [i_6 - 1]) ? ((-(var_2))) : (arr_18 [i_6 - 1])));
        /* LoopSeq 1 */
        for (long long int i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            var_21 ^= ((/* implicit */short) ((arr_21 [i_6 + 1] [i_6 + 1] [i_6 - 1]) ? (((/* implicit */int) arr_21 [i_6 + 1] [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) arr_21 [i_6 - 1] [i_6 + 1] [i_6 + 1]))));
            var_22 += ((/* implicit */unsigned char) arr_18 [(_Bool)1]);
            /* LoopNest 2 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                for (short i_9 = 1; i_9 < 21; i_9 += 1) 
                {
                    {
                        var_23 = ((var_4) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-19930)))))));
                        var_24 = ((/* implicit */int) (+(var_1)));
                    }
                } 
            } 
            arr_29 [6LL] = ((/* implicit */unsigned char) ((short) arr_28 [i_7] [i_7] [i_6 - 1] [i_6 + 1]));
        }
    }
    var_25 = ((/* implicit */short) var_5);
}
