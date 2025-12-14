/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91853
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_4 [i_0 + 1] [i_0 - 2] [22LL]), (((/* implicit */unsigned char) arr_8 [i_2 - 1] [i_0 - 2] [i_0 - 1] [i_0 - 2]))))) >= (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)121)), (arr_4 [i_0 + 1] [i_0 + 2] [i_0]))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) var_10))) ? (((((((/* implicit */_Bool) arr_1 [i_0])) ? (-3259388834035294724LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32747))))) + (((/* implicit */long long int) ((/* implicit */int) (signed char)111))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)75))))))));
                                arr_16 [i_3] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_4 [i_2 - 1] [i_2] [i_2 - 1])) : (((/* implicit */int) (unsigned short)64512))))) ? (((/* implicit */int) arr_4 [i_2 + 1] [(unsigned short)5] [(unsigned short)5])) : (((/* implicit */int) max((((/* implicit */short) arr_4 [i_2 + 1] [12ULL] [i_2])), ((short)27632))))));
                                arr_17 [i_0] [i_0] [i_0] [(unsigned char)14] [i_4] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-121)) || (((/* implicit */_Bool) (unsigned short)7460)))))) == (min((((/* implicit */long long int) 4043802391U)), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (9LL)))))));
                                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_2 [i_1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 4; i_5 < 22; i_5 += 1) 
                    {
                        for (int i_6 = 3; i_6 < 21; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */int) ((unsigned char) min((((/* implicit */short) arr_21 [i_0] [(signed char)9] [i_2 + 1] [i_6] [i_6 - 1])), (var_7))));
                                arr_23 [i_0] = ((/* implicit */short) min((min((((/* implicit */int) arr_20 [i_6] [i_5] [i_2] [i_1] [i_1] [i_0 - 1])), ((+(((/* implicit */int) (unsigned short)0)))))), (((((((/* implicit */int) (signed char)-2)) + (2147483647))) << (((((/* implicit */int) (unsigned char)56)) - (56)))))));
                                var_18 *= ((((/* implicit */long long int) ((/* implicit */int) ((arr_14 [i_2] [i_2 - 1] [i_2] [i_2 - 1] [(short)8] [i_2 - 1] [i_2 - 1]) != (arr_14 [i_2] [i_2 + 1] [19LL] [19LL] [i_2] [i_2] [i_2 - 1]))))) & (((((/* implicit */_Bool) arr_14 [i_2] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] [(unsigned short)11] [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_14 [i_2] [i_2 - 1] [i_2] [i_2] [i_2] [i_2] [i_2 + 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) (!(((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)65535)) : (-1349884149))) != (((/* implicit */int) var_10))))));
    var_20 = ((/* implicit */long long int) ((var_4) >= (((/* implicit */long long int) ((/* implicit */int) var_7)))));
}
