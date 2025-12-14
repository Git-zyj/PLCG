/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65902
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)22624)) ? (((/* implicit */int) var_12)) : (((var_4) & ((-(((/* implicit */int) (unsigned short)1))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    arr_9 [i_0] [(unsigned short)4] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)3)), ((unsigned char)16)))) ? (((((/* implicit */_Bool) 2391503893U)) ? (3762894635U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0]) : (((/* implicit */int) arr_5 [i_0])))))));
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (unsigned char)16))));
                }
                for (short i_3 = 1; i_3 < 20; i_3 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_4 = 4; i_4 < 18; i_4 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) <= (13886830093335798094ULL))) ? (arr_14 [i_0]) : (((((/* implicit */_Bool) arr_7 [i_0] [(signed char)12] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */unsigned int) arr_4 [i_0] [i_1])) : (arr_8 [i_3 - 1] [i_3] [14ULL] [i_3])))));
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_4 - 4]))));
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_3] [i_4 - 2] [i_4 + 1] [i_4])) ? (arr_8 [i_1] [i_3] [i_4 - 2] [(unsigned short)15]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))));
                        arr_15 [14U] [i_3] [6ULL] [i_3] [i_0] |= ((/* implicit */unsigned int) ((int) arr_3 [i_3]));
                    }
                    /* LoopNest 2 */
                    for (signed char i_5 = 4; i_5 < 19; i_5 += 2) 
                    {
                        for (int i_6 = 1; i_6 < 19; i_6 += 1) 
                        {
                            {
                                arr_20 [(unsigned char)11] [i_0] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */signed char) var_7);
                                arr_21 [i_0] [i_0] [(signed char)15] [0ULL] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) max((1903463402U), (arr_7 [4ULL] [i_6 + 1] [i_6] [i_1]))));
                                var_18 ^= ((/* implicit */unsigned long long int) 1903463402U);
                                var_19 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((unsigned int) var_9)) : ((~(1903463387U))))));
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14813220849158216431ULL)) ? (3246785062U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))));
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_8))));
                }
                arr_23 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)108))) : (4294967295U)))), (max((((((/* implicit */_Bool) arr_14 [i_0])) ? (2199023251456ULL) : (((/* implicit */unsigned long long int) 2391503894U)))), (((/* implicit */unsigned long long int) max((4294967295U), (2391503894U))))))));
            }
        } 
    } 
}
