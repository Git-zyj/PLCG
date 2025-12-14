/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96620
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-5527)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23378))) : (16038088947759068452ULL)));
        arr_3 [4ULL] &= ((/* implicit */unsigned char) arr_1 [(_Bool)1] [(_Bool)1]);
    }
    /* LoopNest 3 */
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        for (int i_2 = 4; i_2 < 15; i_2 += 4) 
        {
            for (unsigned short i_3 = 3; i_3 < 16; i_3 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_12 [i_4] [i_3] [i_3] [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_11) : ((+(((/* implicit */int) arr_8 [i_1] [i_1]))))));
                        arr_13 [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) (unsigned short)23378)) || (((/* implicit */_Bool) arr_6 [i_1]))))));
                        arr_14 [i_1] [i_1] [(short)3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_2 - 4] [i_2 - 4])) ^ (((/* implicit */int) arr_8 [i_2 - 3] [i_2 - 3]))));
                        arr_15 [i_3] = (-((+(var_6))));
                        /* LoopSeq 2 */
                        for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            arr_19 [i_1] [i_2 + 1] [i_5] [i_3 - 2] [i_5] [i_5] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (arr_18 [i_1] [i_1] [i_2] [i_1] [0U] [i_1] [i_2 + 1]) : (arr_18 [i_3 - 3] [(unsigned short)8] [i_1] [i_3 - 3] [i_1] [i_2 - 4] [i_2])));
                            var_21 = ((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_3] [i_1])))));
                        }
                        for (unsigned char i_6 = 2; i_6 < 16; i_6 += 3) 
                        {
                            var_22 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_17 [i_1] [i_3 - 2] [i_3] [i_6])) || (((/* implicit */_Bool) var_4)))));
                            arr_22 [i_1] [(unsigned short)12] [i_1] [i_2] [i_6] &= ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)41936))));
                            var_23 = ((/* implicit */unsigned char) ((arr_18 [i_1] [i_1] [i_3] [i_1] [(short)1] [(unsigned char)0] [i_3]) * (((/* implicit */int) (!(((/* implicit */_Bool) 16038088947759068452ULL)))))));
                        }
                    }
                    for (unsigned long long int i_7 = 3; i_7 < 16; i_7 += 4) 
                    {
                        arr_25 [i_7] [i_3] [i_3 - 1] [i_3] [(unsigned char)10] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) ((unsigned char) (unsigned short)41936))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)42157))))))))));
                        arr_26 [i_1] [i_3] [i_3] [(signed char)11] = ((/* implicit */signed char) (-(min(((~(((/* implicit */int) var_13)))), ((+(((/* implicit */int) arr_20 [(_Bool)1] [i_3 - 2] [(unsigned char)10] [i_1]))))))));
                    }
                    arr_27 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */int) arr_17 [i_1] [(short)8] [i_3] [i_3])) : (((/* implicit */int) arr_9 [i_1] [(unsigned short)13] [i_3])))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_8 [i_2] [i_3 + 1])) : (((/* implicit */int) arr_6 [i_2]))))))) ^ ((-((+(16038088947759068452ULL)))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) var_1))));
    var_25 = ((/* implicit */unsigned short) var_6);
}
