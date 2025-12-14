/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69910
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (unsigned short)15451)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)25)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (min((((/* implicit */unsigned int) var_7)), (0U))))) : (min((3030635830U), (((/* implicit */unsigned int) (-(((/* implicit */int) var_10)))))))));
    var_17 = ((/* implicit */long long int) var_3);
    var_18 = ((/* implicit */unsigned int) (unsigned char)230);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        arr_10 [i_1] [(_Bool)1] [i_0 + 1] [i_3] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0]))))) ? (((/* implicit */int) ((short) arr_0 [12LL] [i_3]))) : (((/* implicit */int) ((signed char) 18446744073709551615ULL)))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_13 [i_4] [(unsigned short)2] [i_2] [(signed char)2] [(unsigned short)2] [(_Bool)1] = ((/* implicit */unsigned int) (short)-6620);
                            arr_14 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0 - 1])) : (((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) (short)6619)) : (((/* implicit */int) (signed char)122))))));
                            arr_15 [i_1] [i_3] [i_0] [i_3] [i_4] [i_2] [(signed char)7] = ((/* implicit */unsigned int) ((arr_7 [i_0] [i_0] [i_2 - 1] [i_2 - 2] [i_3] [(unsigned char)10]) - (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_4]))))), (max((arr_2 [i_3]), (((/* implicit */unsigned long long int) 2685747780U))))))));
                            arr_16 [i_0] [(_Bool)0] [i_0 - 1] [(_Bool)0] [i_0 + 1] [i_0 + 1] [(unsigned char)2] = ((/* implicit */signed char) 1918031701U);
                            arr_17 [i_0 + 1] [i_0 + 1] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) (_Bool)0)))));
                        }
                        /* vectorizable */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            arr_20 [i_5] [i_5] [4ULL] [4ULL] [i_1] [i_0] = ((((/* implicit */_Bool) (~(arr_18 [i_0 + 1] [i_0 + 1] [i_1] [(short)7] [i_3] [i_5 - 1])))) ? ((-(18446744073709551608ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_1] [i_2 + 1] [2U] [(_Bool)1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-21902))))));
                            arr_21 [i_1] [(unsigned char)2] [i_0] [i_1] = ((((/* implicit */_Bool) ((arr_18 [i_0] [i_1] [i_1] [i_2] [i_3] [i_5 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0 - 1] [4U] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 - 2] [(signed char)1] [(signed char)1] [10LL]))) : ((-(arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) (short)-10040);
                            arr_23 [(signed char)0] [i_1] [i_1] [(signed char)4] [i_5] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1] [i_1] [i_5 - 1] [i_5 - 1] [i_5 - 1])) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((((/* implicit */_Bool) 330907540299912202ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_2 - 1] [i_5]))) : (1256378460U))))));
                        }
                    }
                    arr_24 [i_0 + 1] [i_1] [(short)2] = ((/* implicit */unsigned char) (-(min((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-64)) || (((/* implicit */_Bool) 287835962U))))), (((((/* implicit */_Bool) 18446744073709551598ULL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-108))))))));
                }
            } 
        } 
    } 
}
