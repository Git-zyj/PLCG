/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72840
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
    var_18 = ((/* implicit */long long int) var_16);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)4)) | (((/* implicit */int) arr_3 [i_1]))))) ? (((var_11) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (min((var_11), (((/* implicit */unsigned long long int) var_9)))))));
                var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (-6374921961599895128LL))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))));
                var_21 = ((/* implicit */short) (signed char)120);
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_22 = ((/* implicit */int) 6374921961599895144LL);
                    arr_7 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
                }
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [11U] [i_3])) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) arr_4 [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_3])) ? (var_3) : (2047)))))) ? (min((((/* implicit */unsigned int) ((int) var_14))), (arr_1 [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min((var_4), (((/* implicit */long long int) var_16)))))))));
                    var_24 = ((/* implicit */signed char) min((max((arr_6 [i_0] [i_1] [i_3]), (((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) ((_Bool) arr_1 [i_0])))));
                    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) var_4))));
                }
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    var_26 = ((/* implicit */unsigned char) ((max((var_3), (((/* implicit */int) ((short) var_3))))) ^ (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)38))))) ? (((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) var_12)))) : ((-(((/* implicit */int) (_Bool)1))))))));
                    var_27 *= ((/* implicit */short) arr_9 [i_4] [i_1] [i_0]);
                }
                for (unsigned char i_5 = 2; i_5 < 17; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */long long int) var_0);
                                arr_22 [i_0] [i_1] [i_1] [i_5] [i_7] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_8)) ? (var_13) : (var_13))), (((/* implicit */int) arr_20 [i_5 - 1] [i_5 + 1] [i_5 - 2] [i_5] [i_5 - 2] [i_5 - 2]))))) < (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-14)) >= (((/* implicit */int) arr_15 [i_6] [i_1] [(short)15] [i_0])))))) ^ (((unsigned int) var_6))))));
                                var_29 *= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2059937378)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)248))))))) && ((!(((/* implicit */_Bool) min((arr_5 [i_0] [i_1] [i_5] [i_6]), (var_14))))))));
                                arr_23 [i_0] [i_1] [i_0] [i_0] [i_5] = ((/* implicit */signed char) max((((/* implicit */int) ((short) arr_20 [i_5 - 1] [i_5 - 2] [i_5] [i_5] [i_5 + 1] [i_5]))), (((((/* implicit */_Bool) arr_20 [i_5 - 2] [i_5 - 2] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_20 [i_5 - 2] [i_5 - 2] [0LL] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_20 [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5] [i_5] [i_5]))))));
                            }
                        } 
                    } 
                    var_30 = arr_6 [8] [8] [i_5 + 1];
                }
            }
        } 
    } 
}
