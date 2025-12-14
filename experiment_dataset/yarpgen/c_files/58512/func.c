/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58512
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) > (var_3)));
    var_14 = ((/* implicit */unsigned char) ((var_3) >= (((/* implicit */long long int) (((~(var_4))) | (((/* implicit */int) var_10)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_15 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) ((unsigned short) (short)26698))) : (((/* implicit */int) var_8))));
            var_16 = ((/* implicit */int) ((signed char) ((((/* implicit */int) (signed char)-18)) & ((-(((/* implicit */int) (_Bool)0)))))));
            var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) arr_5 [i_1])))))))));
            var_18 = ((/* implicit */int) arr_5 [i_0]);
        }
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1035805029)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-18)))))));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                {
                    arr_14 [i_3] [i_3] [i_4] &= ((/* implicit */_Bool) (unsigned short)42512);
                    var_20 = ((/* implicit */long long int) arr_11 [i_2]);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_5 = 1; i_5 < 8; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)17))) < (arr_13 [i_2] [i_3] [i_5 + 4])));
                        arr_17 [i_5] = ((/* implicit */unsigned char) ((arr_13 [i_5 + 2] [i_5 + 3] [i_5]) - (arr_13 [i_5 + 1] [i_5 + 1] [i_5])));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned char) var_4);
                        arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [i_6] = ((/* implicit */int) var_11);
                    }
                    for (short i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (short i_8 = 4; i_8 < 9; i_8 += 1) /* same iter space */
                        {
                            arr_26 [i_3] [i_4] [i_7] = ((/* implicit */unsigned short) ((((long long int) var_5)) / (((/* implicit */long long int) (-(((/* implicit */int) arr_22 [i_8] [i_8 - 3] [i_8 + 1] [i_8 - 1] [i_8])))))));
                            var_23 |= ((/* implicit */short) ((unsigned short) ((signed char) min((((/* implicit */unsigned long long int) arr_7 [i_2])), (arr_15 [i_2] [i_4] [i_7] [i_8])))));
                        }
                        for (short i_9 = 4; i_9 < 9; i_9 += 1) /* same iter space */
                        {
                            arr_30 [i_2] [i_9] [i_4] [i_7] [i_9] [i_2] [i_7] = ((/* implicit */unsigned char) ((signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) -9024008905107187158LL)) : (max((2673609571404330152ULL), (((/* implicit */unsigned long long int) 4294967295U)))))));
                            arr_31 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) ((unsigned char) (unsigned char)16))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
                            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) min(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1))))), (((long long int) var_3)))))));
                            var_25 = ((/* implicit */short) var_0);
                        }
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((max((((/* implicit */long long int) ((short) (signed char)-18))), (var_3))) | (((/* implicit */long long int) var_11)))))));
                        arr_32 [i_2] [i_2] [i_3] [i_4] [i_7] = (-((+(((/* implicit */int) var_5)))));
                    }
                }
            } 
        } 
    } 
}
