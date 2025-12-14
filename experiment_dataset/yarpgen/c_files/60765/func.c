/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60765
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (min((arr_3 [i_0] [i_0] [i_0]), (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((((/* implicit */_Bool) (short)-13917)) && (((/* implicit */_Bool) var_7))))))))));
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) var_9)))))) - (min((((/* implicit */unsigned long long int) -2097152)), (12554055292187077586ULL)))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_14 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_5))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)111))))) : (((/* implicit */int) arr_13 [i_0] [i_1 - 1] [i_0] [i_0]))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551610ULL)) && (((/* implicit */_Bool) arr_10 [i_1 - 2] [i_2]))))))));
                            var_12 += ((/* implicit */long long int) ((((/* implicit */int) ((short) 18446744073709551610ULL))) * (((/* implicit */int) var_7))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) 2778037407U))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_4 = 3; i_4 < 8; i_4 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_6 = 1; i_6 < 8; i_6 += 3) 
            {
                arr_23 [i_4] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((int) (unsigned short)25703));
                var_14 = ((/* implicit */unsigned int) ((short) var_3));
            }
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_1) == (((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) (unsigned short)47374)) : (((/* implicit */int) (_Bool)0))))))) != (((/* implicit */int) min((arr_16 [i_4]), (((/* implicit */short) max((var_11), ((signed char)31)))))))));
            var_16 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47381)) ? (((/* implicit */unsigned int) -1488458787)) : (var_5)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-14))) : (var_0)))) : (((((/* implicit */_Bool) var_0)) ? (arr_21 [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */long long int) 2778037412U))))))));
            arr_24 [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) arr_15 [i_4])))));
        }
        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            var_17 = ((/* implicit */unsigned char) (signed char)111);
            var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) arr_18 [i_4])))));
        }
        arr_27 [i_4] [(unsigned char)2] = ((((((/* implicit */_Bool) ((3ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-121)))))) || (((/* implicit */_Bool) (unsigned short)53633)))) ? (((((((/* implicit */_Bool) arr_16 [i_4])) ? (arr_17 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)95))))) << (((/* implicit */int) ((1516929867U) < (2778037428U)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114))));
    }
}
