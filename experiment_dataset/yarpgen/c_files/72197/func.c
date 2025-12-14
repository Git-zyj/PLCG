/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72197
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
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25856))) + (36028797010575360ULL)))))) * (((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0] [i_1] [i_2]))))) : (arr_4 [i_1] [i_1] [i_0])))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_2] [i_0] [i_3] [i_4] = ((/* implicit */int) ((long long int) arr_4 [i_0] [i_0] [i_0]));
                                var_15 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((966226629U) * (((/* implicit */unsigned int) 1109026199))))) : (min((((/* implicit */unsigned long long int) var_12)), (arr_3 [i_0] [i_0] [i_0])))));
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((36028797010575343ULL), (((/* implicit */unsigned long long int) arr_7 [i_2] [i_1] [i_1] [i_1]))))) ? (((((/* implicit */int) arr_2 [i_0] [11] [(short)4])) << (((986751431) - (986751416))))) : (((/* implicit */int) (signed char)34))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_1] [i_1])) && (((arr_3 [i_2] [i_1] [i_0]) >= (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_2] [i_2]))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 13; i_6 += 1) 
                        {
                            {
                                arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (0ULL) : (((/* implicit */unsigned long long int) 3285049361U)))), (((/* implicit */unsigned long long int) (unsigned short)55352))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [(unsigned short)9] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))) * (((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2])) ? (var_2) : (((/* implicit */unsigned int) var_12))))))) : (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-17))))), (min((((/* implicit */unsigned long long int) var_8)), (arr_4 [i_0] [i_0] [i_0])))))));
                                var_17 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) max((((/* implicit */int) var_0)), (arr_15 [i_2] [i_1])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48))) - (arr_4 [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) (-(arr_1 [i_6 - 3]))))));
                                var_18 = ((/* implicit */signed char) ((short) ((unsigned long long int) arr_18 [i_6 - 3] [i_6 - 1] [i_6 - 3] [i_6] [i_2] [i_2])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_9))));
    var_20 = ((/* implicit */long long int) var_8);
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 12; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            {
                var_21 += ((/* implicit */unsigned long long int) (-(((int) 3011655627U))));
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (short i_10 = 1; i_10 < 12; i_10 += 1) 
                    {
                        {
                            arr_31 [(unsigned char)14] [i_7] [i_9] &= arr_28 [(_Bool)0] [i_8] [i_9] [i_10 + 1] [i_9];
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)12303)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (short)-17)), (2060581806)))) ? (18410715276698976250ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19458))))))));
                        }
                    } 
                } 
                arr_32 [i_7] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((-1118503012) == ((~(((/* implicit */int) arr_29 [i_7])))))))) > ((~(arr_27 [(unsigned char)9] [i_7 + 2] [i_8] [(unsigned char)9])))));
            }
        } 
    } 
}
