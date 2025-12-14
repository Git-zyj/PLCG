/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65636
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
    var_13 &= ((((/* implicit */int) var_10)) != (((/* implicit */int) var_1)));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) arr_1 [i_0]))));
        var_15 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_0 [(unsigned char)0])))) || (((((/* implicit */_Bool) (unsigned char)72)) || (((/* implicit */_Bool) (unsigned char)183))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) >= (((((/* implicit */int) max(((unsigned char)70), ((unsigned char)191)))) & (((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_0])), (arr_0 [(signed char)14]))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned char)192)) - (162)))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 2; i_2 < 20; i_2 += 3) 
        {
            for (int i_3 = 2; i_3 < 20; i_3 += 3) 
            {
                for (unsigned int i_4 = 2; i_4 < 17; i_4 += 3) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_1])) == (((/* implicit */int) var_10)))))));
                        var_18 = var_5;
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                {
                    var_19 ^= ((/* implicit */unsigned long long int) arr_3 [i_5]);
                    var_20 = ((/* implicit */_Bool) ((long long int) arr_24 [i_7]));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (short i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            arr_29 [i_8] = ((/* implicit */short) arr_5 [i_5]);
            var_21 = ((/* implicit */short) arr_21 [i_5] [i_5]);
            var_22 ^= ((((/* implicit */int) (unsigned char)183)) & (((/* implicit */int) (signed char)(-127 - 1))));
            arr_30 [i_5] [9ULL] = ((/* implicit */short) ((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5] [i_8])))));
            var_23 ^= ((/* implicit */unsigned char) arr_25 [(short)4] [i_5]);
        }
        for (short i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            arr_33 [i_9] = ((/* implicit */unsigned char) arr_27 [8U] [7] [i_5]);
            var_24 = ((/* implicit */unsigned long long int) ((arr_8 [i_5]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_9])))));
        }
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            var_25 += ((/* implicit */signed char) (+(((((/* implicit */int) (short)-9552)) & (1887308237)))));
            var_26 *= ((/* implicit */short) ((arr_9 [i_10 - 1]) - (arr_9 [i_10 - 1])));
            arr_38 [i_5] [i_10] [i_5] = arr_19 [i_10 - 1] [i_10];
            arr_39 [(unsigned char)1] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_10 - 1] [i_10 - 1] [(unsigned char)11] [i_10 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_28 [i_5] [i_10] [(unsigned short)4])) | (((/* implicit */int) var_3))))) : (((unsigned long long int) (unsigned char)63))));
            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (-(((/* implicit */int) arr_25 [i_5] [i_5])))))));
        }
        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) & (arr_27 [i_5] [i_5] [i_5]))))));
    }
}
