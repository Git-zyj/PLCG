/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83563
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */long long int) (+((~(var_3)))));
                    var_16 = ((/* implicit */unsigned short) ((((var_4) + (9223372036854775807LL))) << ((((+(((var_12) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) - (1470886873U)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        for (short i_4 = 3; i_4 < 14; i_4 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (4466186514554871556LL)));
                arr_16 [i_3] [i_3] = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))), (var_4))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_4) & (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3] [i_3])))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_5 [(signed char)6])) : (((/* implicit */int) var_6)))))))));
                var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967274U)) ? (var_3) : (var_5))))));
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (short)11005))) : (arr_12 [i_3] [i_4 + 1]))) << (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 4091169405U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)89))) : (4294967274U)))) < ((-(var_15)))))))))));
                /* LoopSeq 3 */
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    var_20 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-3491)) < (((/* implicit */int) (short)-1)))))) == (max((var_3), (((/* implicit */unsigned int) arr_3 [i_5]))))))), (max((arr_18 [i_3] [i_4 - 2]), (((/* implicit */long long int) min(((unsigned char)166), (((/* implicit */unsigned char) var_10)))))))));
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_14)))))) <= (((/* implicit */int) ((var_9) < (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4 - 3]))))))));
                }
                for (signed char i_6 = 3; i_6 < 14; i_6 += 2) 
                {
                    arr_22 [i_6] [(signed char)10] [(signed char)10] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (_Bool)1)), (((var_5) << (((/* implicit */int) (!(((/* implicit */_Bool) -1552118755618744770LL)))))))));
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_3] [i_6 - 3] [i_3] [i_3])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_6 [(short)9] [i_6 - 2] [i_6] [i_6 - 3]))))) & (((((/* implicit */long long int) var_5)) ^ (var_15))))))));
                }
                for (long long int i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((unsigned char) (_Bool)1)))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 1; i_8 < 14; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_33 [(_Bool)1] [i_9] [i_9] [(unsigned char)10] [i_9] = ((/* implicit */unsigned int) ((max((arr_18 [i_4] [i_4 - 2]), (((/* implicit */long long int) (-(var_5)))))) < (((((arr_2 [i_4 + 1]) + (9223372036854775807LL))) << (((/* implicit */int) var_13))))));
                                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 4071038811U)), (14061542587236419586ULL)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_17 [i_8 + 1])) : (((/* implicit */int) arr_17 [i_8 - 1])))) : (((arr_17 [i_8 - 1]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-2355))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
