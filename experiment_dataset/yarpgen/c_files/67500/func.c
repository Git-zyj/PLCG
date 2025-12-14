/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67500
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
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)4)) * (((/* implicit */int) (_Bool)0))))) ? ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1859))) : (3003019336U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)73))))))))));
    var_18 = ((/* implicit */unsigned short) var_5);
    var_19 -= ((/* implicit */unsigned long long int) (+(1)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */short) var_3);
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    arr_7 [i_0] [(short)9] [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0])))), (((_Bool) arr_1 [i_0]))));
                    var_21 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) var_7))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 2530033122U)))))));
                    arr_8 [i_0] [i_2] = arr_2 [i_0] [i_0] [i_2];
                }
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    arr_11 [i_0] [i_0] [i_3] = ((/* implicit */int) 15535491785231891631ULL);
                    var_22 = arr_6 [i_0] [i_0] [i_3];
                    arr_12 [i_0] = ((/* implicit */unsigned short) ((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) min((arr_10 [i_0] [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_0])))))));
                }
                for (short i_4 = 2; i_4 < 9; i_4 += 2) 
                {
                    arr_15 [(short)6] [i_0] [i_0] [(short)6] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_0] [i_0])) | (((int) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_4 - 1] [(unsigned char)10])) & (((/* implicit */int) var_7)))))));
                    arr_16 [i_4 + 1] [i_0] [i_0] = ((/* implicit */short) arr_10 [i_0] [i_0] [(unsigned short)8] [i_4]);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 10; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((unsigned char) (~(((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0])) ? (var_12) : (((/* implicit */int) (unsigned char)94))))))))));
                                var_24 = ((((/* implicit */int) (short)-6816)) - (min((arr_19 [i_0] [i_0] [6] [0ULL] [i_6]), (max((((/* implicit */int) (unsigned short)4)), (arr_21 [i_0] [i_0] [i_0] [i_5] [i_0] [i_6]))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_7 = 1; i_7 < 10; i_7 += 1) 
                {
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_0] [i_1])) | (((/* implicit */int) max((((/* implicit */unsigned short) (short)-1)), (arr_10 [i_7 + 1] [2ULL] [i_7] [i_7 + 1]))))));
                    var_26 = max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_16) | (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))))))))), (arr_20 [i_7] [i_0] [7U] [i_0] [i_0]));
                    var_27 = ((/* implicit */short) arr_23 [i_0] [i_0] [i_0]);
                }
            }
        } 
    } 
    var_28 -= ((/* implicit */unsigned short) (+(((/* implicit */int) var_14))));
}
