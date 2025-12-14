/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74418
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
    for (short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1])) ? (((/* implicit */int) (signed char)28)) : (2014669854)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0 - 3])) / (((/* implicit */int) arr_2 [i_0] [i_0 - 3]))))) : (((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0 + 1])))))));
                var_15 = ((/* implicit */int) var_7);
            }
        } 
    } 
    var_16 = ((((/* implicit */int) var_3)) / (((/* implicit */int) min((((/* implicit */unsigned char) ((_Bool) var_0))), (min((((/* implicit */unsigned char) var_5)), (var_4)))))));
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        for (signed char i_3 = 3; i_3 < 21; i_3 += 2) 
        {
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((min((var_6), (arr_6 [i_2]))) ? (min((((/* implicit */long long int) var_6)), (var_7))) : (((((/* implicit */_Bool) (unsigned short)3)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)32424)))) - (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11982))) : (var_1))))) : (((/* implicit */unsigned long long int) arr_5 [i_3 + 1] [i_3 - 2]))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    for (int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (_Bool)1))));
                            arr_13 [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) -7281256540875141400LL)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_6 = 1; i_6 < 21; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                            {
                                arr_22 [i_6] [i_3 - 2] [i_6] [i_6] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_6 + 1] [i_6 + 1] [i_3 - 2])) ? (((((/* implicit */_Bool) arr_12 [i_8] [i_6 + 1] [i_3 - 2])) ? (((/* implicit */int) arr_12 [i_6] [i_6 + 1] [i_3 - 2])) : (((/* implicit */int) (signed char)28)))) : (((/* implicit */int) ((((/* implicit */int) arr_12 [7U] [i_6 + 1] [i_3 - 2])) != (((/* implicit */int) arr_12 [i_6 + 1] [i_6 + 1] [i_3 - 2])))))));
                                arr_23 [i_2] [(unsigned short)11] [i_2] [i_2] [i_6] = ((/* implicit */short) min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) ((short) (~(((/* implicit */int) (unsigned short)65529))))))));
                            }
                            /* LoopSeq 2 */
                            for (unsigned short i_9 = 0; i_9 < 22; i_9 += 1) 
                            {
                                var_19 = ((/* implicit */_Bool) min((arr_11 [i_3 - 3] [i_3 + 1] [i_3 - 3] [(signed char)15]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])) || (((/* implicit */_Bool) arr_11 [i_3 + 1] [i_3 - 3] [i_3 - 1] [i_3])))))));
                                arr_27 [i_2] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)24797)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0))));
                            }
                            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                            {
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_30 [(_Bool)1] [i_3 + 1] [i_3] [i_3] [(unsigned short)19])))))));
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (arr_19 [i_2] [(unsigned char)7] [i_2] [i_3] [i_3 + 1])))) ? ((+(var_11))) : (((/* implicit */long long int) ((arr_19 [i_3] [i_3] [i_3] [i_3] [i_3 + 1]) - (arr_19 [i_3] [i_3] [i_3] [0ULL] [i_3 + 1]))))));
                                var_22 = (unsigned short)65535;
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_13))))), (min(((unsigned short)24), ((unsigned short)45967)))));
}
