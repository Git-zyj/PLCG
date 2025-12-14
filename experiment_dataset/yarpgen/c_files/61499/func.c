/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61499
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_1] [16LL] = ((/* implicit */int) (unsigned short)8050);
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) max((((4445686996601887775ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))))), ((((_Bool)0) ? (var_4) : (((/* implicit */unsigned long long int) -5755683944862267057LL))))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    arr_10 [i_1] [10] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (short)-5758))))) != (((/* implicit */int) (unsigned short)9))))), (max((arr_2 [i_1 - 1] [i_1]), (((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_2])) != (var_5))))))));
                    arr_11 [i_1] [(signed char)2] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_1])) % (((/* implicit */int) var_14))))) != (((unsigned long long int) (short)21684))))) & (((/* implicit */int) ((arr_3 [i_1 - 1] [(unsigned char)15] [1LL]) != (arr_3 [i_1 - 1] [i_1] [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_18 [i_1] [i_1] [i_2] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */signed char) var_5);
                                arr_19 [i_0] [i_0] [i_0] [i_2] [i_3] [i_1] = min((arr_3 [i_3] [i_3] [i_2]), (((/* implicit */int) max((arr_15 [i_3] [i_3] [i_3] [i_3 + 1] [i_3 + 1] [(short)5] [i_3 + 1]), (((/* implicit */unsigned short) (unsigned char)0))))));
                                var_16 = ((/* implicit */unsigned char) var_2);
                            }
                        } 
                    } 
                }
                for (signed char i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
                {
                    var_17 -= ((/* implicit */unsigned long long int) arr_9 [i_0] [i_5] [i_5]);
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        var_18 -= ((((/* implicit */_Bool) ((long long int) arr_12 [i_1 + 1] [i_1 - 1]))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_21 [(_Bool)1] [i_5] [i_5])), (var_1)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (164070666))) : (((/* implicit */int) var_8)));
                        arr_26 [i_0] [i_0] [i_0] [i_1] [i_0] = (i_1 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [(unsigned char)15] [i_1] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_6))) <= (((/* implicit */long long int) (-(var_12)))))))) & ((-(((var_7) << (((((/* implicit */int) arr_2 [3LL] [i_1])) - (5504)))))))))) : (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [(unsigned char)15] [i_1] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_6))) <= (((/* implicit */long long int) (-(var_12)))))))) & ((-(((var_7) << (((((((/* implicit */int) arr_2 [3LL] [i_1])) - (5504))) - (53619))))))))));
                    }
                }
                for (signed char i_7 = 0; i_7 < 17; i_7 += 4) /* same iter space */
                {
                    var_19 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) 557351048)), (-4931586458391002874LL))) * (((/* implicit */long long int) arr_20 [i_1] [i_1 - 1] [i_1 - 1] [i_1]))))) ? ((+(((/* implicit */int) (signed char)102)))) : (((/* implicit */int) (_Bool)0))));
                    arr_29 [i_0] [i_1] [12] [(short)2] = ((/* implicit */unsigned long long int) ((arr_20 [i_0] [(_Bool)1] [(unsigned short)10] [i_7]) != (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (_Bool)1))))))));
                }
                arr_30 [i_1] = ((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) -164070666)) : (var_15))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) ((unsigned char) (_Bool)1))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) max((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) var_0))));
}
