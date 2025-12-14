/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56067
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */int) ((((((/* implicit */int) arr_3 [i_2])) * (((/* implicit */int) arr_3 [i_2])))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))));
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) 1516733957))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 9; i_4 += 1) 
                {
                    for (unsigned char i_5 = 2; i_5 < 8; i_5 += 2) 
                    {
                        {
                            arr_16 [i_4] [i_4] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) == (((arr_12 [(signed char)1] [(signed char)1] [(short)9] [i_5]) | (((/* implicit */unsigned long long int) arr_5 [(unsigned char)8])))))))) | (((((/* implicit */_Bool) (short)-5596)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)192), (((/* implicit */unsigned char) var_3)))))) : (arr_10 [9] [i_1] [i_4])))));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_5] [i_0] [i_0]))))) != (((var_1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (-1031570340) : (((/* implicit */int) var_11))))) : ((~(-2785313840717504160LL)))))));
                            arr_17 [i_4] [i_4] [i_4 + 1] [i_4] = ((/* implicit */unsigned short) max((var_9), (((/* implicit */long long int) (~((-(((/* implicit */int) var_14)))))))));
                            arr_18 [(_Bool)1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) >= (arr_12 [i_4] [i_4] [6] [i_4 + 1])))) < (((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */int) ((var_7) == (((/* implicit */int) (unsigned char)135))))) : ((+(((/* implicit */int) var_14))))))));
                        }
                    } 
                } 
                var_19 -= ((/* implicit */unsigned char) var_9);
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */int) var_0))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((var_7), (((/* implicit */int) (short)(-32767 - 1)))))), (((((/* implicit */long long int) ((/* implicit */int) var_11))) + (2785313840717504160LL)))))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) -75679331107648531LL))))) <= (((/* implicit */int) (_Bool)0))))) : ((+(((/* implicit */int) var_1))))));
    /* LoopNest 3 */
    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
    {
        for (signed char i_7 = 2; i_7 < 15; i_7 += 4) 
        {
            for (int i_8 = 0; i_8 < 16; i_8 += 2) 
            {
                {
                    var_22 = ((/* implicit */signed char) min((arr_23 [i_7 - 2] [i_7 - 1] [i_7 + 1]), (((arr_23 [i_7 - 2] [i_7 - 2] [i_7 - 2]) >> (((/* implicit */int) (_Bool)1))))));
                    arr_29 [i_7] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_6)))) ^ (((/* implicit */int) (unsigned char)116))))) ? (min((arr_25 [i_7 - 2] [i_7 - 1] [i_7 + 1]), (((/* implicit */long long int) (unsigned short)1024)))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 16; i_9 += 4) 
                    {
                        for (unsigned long long int i_10 = 1; i_10 < 15; i_10 += 1) 
                        {
                            {
                                arr_36 [i_6] [(_Bool)1] [i_6] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_33 [13] [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7] [i_7])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_6] [i_6])) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) var_4)))))))) : (((((/* implicit */int) arr_32 [0ULL] [i_7] [(signed char)6] [(short)9] [i_7] [i_7])) + (((/* implicit */int) var_1))))));
                                var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */unsigned char) (signed char)-21)), (arr_30 [i_7] [i_10])))), (min((var_9), (((/* implicit */long long int) var_12)))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned int) (unsigned short)35622);
                }
            } 
        } 
    } 
}
