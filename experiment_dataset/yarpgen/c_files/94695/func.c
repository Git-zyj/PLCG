/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94695
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
    for (int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_0] [(signed char)4] [i_0] = ((/* implicit */short) (_Bool)1);
                var_17 = ((/* implicit */unsigned long long int) var_0);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) (unsigned short)2677);
                            arr_12 [i_0] [i_1] [10] [i_0] = ((/* implicit */unsigned char) (-(min((((2182886169775421007ULL) - (16263857903934130598ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_0])) + (var_6))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */short) arr_7 [i_0] [i_0]);
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) -8645426063424400381LL)) ? (var_3) : (((/* implicit */int) var_9)))) < (((/* implicit */int) (signed char)-119))))) | (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) -1214154541)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_10);
    var_22 = ((/* implicit */long long int) (+(var_6)));
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned short i_5 = 2; i_5 < 15; i_5 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    for (long long int i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) 1214154536);
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)1326)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (_Bool)1))));
                            arr_21 [i_4] [i_4] [i_5] [i_7] [i_4] [i_4] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (signed char)94)), (((((((/* implicit */_Bool) (unsigned short)2677)) || (((/* implicit */_Bool) arr_19 [(short)11] [i_6] [i_5])))) ? (min((((/* implicit */unsigned long long int) arr_19 [i_6] [i_5] [i_6])), (4741710186080544873ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4] [i_5])))))));
                            var_25 = ((/* implicit */unsigned char) min((arr_14 [i_5 - 1] [i_5 + 1]), (((/* implicit */unsigned long long int) (~(arr_20 [(unsigned char)11] [i_5 - 1]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    for (int i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        {
                            arr_26 [i_8] [i_8] [i_5 - 2] = ((/* implicit */short) (~(max((((/* implicit */long long int) (~(arr_20 [i_5] [i_8])))), (((((/* implicit */_Bool) arr_19 [i_4] [i_8] [15ULL])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)210))) : (var_8)))))));
                            arr_27 [i_8] [i_8] [i_5] [i_8] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_22 [i_5] [i_5] [i_5 - 1]))));
                            var_26 = ((/* implicit */short) (+(((14818492028790990922ULL) >> (((1006254627) - (1006254604)))))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_5)))), (((/* implicit */int) (unsigned short)57302))))) || ((!(((/* implicit */_Bool) min((5768141343188989205ULL), (((/* implicit */unsigned long long int) var_12)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_10 = 2; i_10 < 12; i_10 += 4) 
                {
                    for (unsigned int i_11 = 1; i_11 < 15; i_11 += 2) 
                    {
                        {
                            var_28 = ((((var_2) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [2ULL] [i_4] [i_5] [i_5] [4ULL] [i_11])) ? (((/* implicit */int) arr_23 [i_4] [(unsigned short)12] [i_10 + 2] [i_10])) : (0)))))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_5 - 2] [i_10 + 2])) / (((/* implicit */int) arr_28 [i_5 - 1] [i_10 + 3] [(unsigned short)6] [i_11 + 1]))))));
                            var_29 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4192875024391482804LL)) + (10599533165692308231ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((28ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [(_Bool)1] [(unsigned char)2] [i_5] [i_4]))))))) : ((~(0ULL))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_4] [i_5] [i_10] [i_11])))));
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (~(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_24 [i_4] [i_5] [i_5] [(unsigned short)7]))))))))));
                            var_31 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_5] [i_5 - 2] [i_5] [i_5]))) < (7847210908017243398ULL)));
                        }
                    } 
                } 
                var_32 = ((/* implicit */int) arr_28 [(_Bool)1] [6ULL] [i_5] [10]);
            }
        } 
    } 
}
