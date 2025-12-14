/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98335
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [(unsigned char)16] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 1812026128U)))) / (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [(unsigned char)21])), (var_7)))) ? (var_13) : (((/* implicit */unsigned long long int) arr_0 [i_0 - 2]))))));
                var_15 = ((/* implicit */long long int) var_9);
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    arr_7 [i_0] = ((/* implicit */long long int) 2482941183U);
                    var_16 = ((/* implicit */_Bool) arr_5 [15U] [i_0] [i_2]);
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_14)), (arr_0 [i_0])))) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_0] [i_0 + 2])) : ((+(arr_3 [i_0] [i_1] [i_2])))))) < (((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-30))) : (2482941170U)))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [5ULL] [(unsigned char)7] [i_0] [i_0] [i_0 - 2] [i_0 - 2] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3931733085U)) ? (var_5) : (arr_1 [i_3] [i_3])))) % (var_0))) == (((/* implicit */unsigned long long int) ((arr_8 [i_0 + 2] [i_0 - 3] [i_0] [i_0 + 2] [i_0 + 1]) | (var_3))))));
                                arr_14 [i_0] [3U] [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) var_12);
                                var_18 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-23857)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned int) arr_3 [i_2] [i_3] [13U])))))) % (((/* implicit */unsigned int) (-((~(((/* implicit */int) var_4)))))))));
                                arr_15 [(unsigned char)9] [i_4] [i_4] [i_0] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1812026151U)) ? (((((/* implicit */_Bool) (-(arr_6 [i_0] [i_0] [i_0])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) == (var_12))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0 - 1] [i_0] [(unsigned char)8] [i_0])))))) > (max((var_0), (((/* implicit */unsigned long long int) arr_6 [i_0] [18] [i_2]))))))))));
                                var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_11))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            {
                                arr_23 [i_0] [i_0] [i_0] [i_7] [(unsigned char)0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2016305136095137818LL)) ? (((/* implicit */int) (unsigned char)122)) : (-1)))) ? (((int) min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (var_7)))) : (((((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_7] [i_6] [i_5] [i_1] [i_1] [i_0]))) <= (var_12))) ? ((+(((/* implicit */int) (unsigned char)225)))) : (arr_11 [i_0] [i_0] [i_0] [i_5] [i_5] [i_6] [i_7])))));
                                var_20 = ((((/* implicit */_Bool) (~(var_0)))) ? (var_13) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_21 [i_0] [19] [i_6] [i_0 + 2] [i_1]))))));
                                arr_24 [i_0] [i_1] [i_1] [i_1] [i_0] [i_7] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)-13)), ((unsigned char)1)));
                                var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (unsigned char)3)))) / ((~(((/* implicit */int) arr_12 [i_0] [i_1] [i_5] [i_5] [i_6] [i_1]))))));
                                arr_25 [i_0] [16U] [(unsigned char)0] [i_1] [i_0] = ((/* implicit */short) var_5);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235))) - (14598474275615038414ULL)))));
                    arr_26 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) -390068798)) ? (((/* implicit */int) (unsigned char)14)) : (-1)));
                }
            }
        } 
    } 
    var_23 = (-(((/* implicit */int) var_10)));
    var_24 = ((/* implicit */_Bool) ((signed char) (((!(((/* implicit */_Bool) var_12)))) ? (min((var_12), (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
}
