/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95057
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)29822), (((/* implicit */unsigned short) (_Bool)1)))))) != (18310110511355615578ULL)));
    var_15 = ((/* implicit */_Bool) var_13);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_16 = ((/* implicit */_Bool) ((unsigned short) max((((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) (!(arr_0 [i_0] [i_0])))))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) & (((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [0U] [i_0])))))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : ((-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) != (((/* implicit */int) arr_0 [i_0] [9])))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned int) (-(arr_2 [i_1])));
            /* LoopNest 3 */
            for (long long int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                for (unsigned int i_3 = 1; i_3 < 12; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_3] [(unsigned char)2] [i_3 + 1] [i_4] = ((/* implicit */signed char) (~(arr_12 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1] [i_3] [i_2 + 1] [i_2 + 1])));
                            arr_15 [i_4] [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (arr_9 [i_1] [i_0] [i_1 - 2]) : (arr_9 [i_0] [i_0] [i_0])));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_3 [i_0])))) == (((((/* implicit */int) arr_4 [i_0])) + (((/* implicit */int) arr_11 [i_0] [12ULL]))))));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_1 + 2] [i_1] [i_1 + 2] [i_2 - 1] [i_0])) <= ((~(((/* implicit */int) arr_8 [i_4]))))));
                        }
                    } 
                } 
            } 
            arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_7 [i_0] [i_1 - 1] [i_1 - 2]) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_2 [10ULL]))) : (2305216565850862790ULL)));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            arr_21 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
            var_19 = ((/* implicit */signed char) (-2147483647 - 1));
        }
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                {
                    var_20 = ((/* implicit */long long int) arr_7 [i_0] [i_6] [i_6]);
                    var_21 = max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_2))) != (((/* implicit */int) var_13))))), (var_10));
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            {
                                arr_32 [i_0] [i_6] [i_7] [i_8] [i_0] [i_8] [i_9] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
                                arr_33 [i_0] [i_0] [i_0] [i_0] [5U] = ((/* implicit */unsigned char) max((arr_27 [i_0] [i_0]), (((/* implicit */unsigned int) ((signed char) var_0)))));
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_0])) ? (((/* implicit */int) arr_18 [i_0])) : (((((/* implicit */int) arr_18 [i_0])) | (((/* implicit */int) arr_18 [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_34 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_6)) / (var_3))))))) != (((/* implicit */int) arr_0 [i_0] [8U]))));
    }
}
