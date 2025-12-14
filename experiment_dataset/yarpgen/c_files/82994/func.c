/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82994
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
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) var_0))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */int) max((var_13), ((+(((/* implicit */int) var_1))))));
                    arr_9 [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1257927991))));
                }
            } 
        } 
        var_14 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [i_0] [i_0] [i_0 + 2]) <= (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))))) : ((-(var_8)))));
        arr_10 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))) | ((-(((/* implicit */int) var_1))))));
        arr_11 [i_0] [i_0] = arr_5 [i_0 + 3];
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_5 = 1; i_5 < 10; i_5 += 3) 
                    {
                        arr_19 [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_17 [i_5] [i_5 - 1] [i_5] [i_5 - 1] [i_5 + 1] [i_0]))));
                        arr_20 [i_0] [i_3] [i_3] [i_3] [8] = var_0;
                    }
                    for (unsigned int i_6 = 4; i_6 < 11; i_6 += 3) 
                    {
                        var_15 -= ((((/* implicit */int) arr_8 [10] [i_0 + 2] [10])) / ((-(((/* implicit */int) (_Bool)1)))));
                        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_6] [i_6 - 2] [i_6] [i_6 - 1])) ? (arr_22 [i_6] [i_6 - 2] [i_6 - 4] [i_6 - 1]) : (((/* implicit */unsigned long long int) arr_16 [i_6] [i_6 - 2] [i_6] [i_6 - 1]))));
                        arr_24 [i_0] [i_3] [i_0] [i_4] [(unsigned char)8] [i_3] = ((/* implicit */signed char) var_1);
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_21 [i_0 - 1])) < (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (_Bool)1))))));
                        var_18 ^= ((((/* implicit */int) (unsigned char)25)) & (((/* implicit */int) arr_5 [i_0 - 1])));
                        /* LoopSeq 1 */
                        for (short i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            var_19 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)231))));
                            arr_29 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_0 + 3]);
                            arr_30 [i_7] [i_3] [i_3] [i_0] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_3])) ? (arr_0 [i_0 - 1] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)206)))));
                            arr_31 [i_8] [i_0] [(unsigned char)7] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) (_Bool)1)))))) | (7425545846366194321ULL)));
                        }
                    }
                    arr_32 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_6 [i_0] [i_3] [i_4]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)65535))));
        var_21 -= ((/* implicit */_Bool) ((unsigned long long int) var_8));
    }
    var_22 *= ((/* implicit */short) (((-(((/* implicit */int) min((var_1), (var_0)))))) >= (((/* implicit */int) (((~(var_5))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))))));
    var_23 = ((/* implicit */long long int) (_Bool)1);
}
