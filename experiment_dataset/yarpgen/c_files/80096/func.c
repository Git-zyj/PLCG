/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80096
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
    var_16 = ((/* implicit */unsigned short) var_14);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0 + 2] [i_4] [i_2 - 2] [i_2 - 2] [i_3] [i_4] = ((/* implicit */int) arr_2 [i_1] [i_4]);
                                var_17 = ((/* implicit */unsigned long long int) ((int) ((unsigned short) (unsigned short)65535)));
                                var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)37300)) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) 8305410189999362883LL)) : (12985513427280666769ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4] [i_2 - 2]))))) * (((/* implicit */unsigned long long int) ((var_3) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2799671782816766649ULL)) ? (((/* implicit */int) arr_3 [1ULL])) : (((/* implicit */int) (_Bool)1))))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / ((+(373071674U)))))) ? ((-(arr_6 [i_0] [i_0 - 1] [(unsigned char)2] [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_10 [2] [i_2])) * (((/* implicit */int) var_15)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_6] [4LL] [i_0] [i_6] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 + 2])) + (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_6]))))))) % (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_15 [i_0] [i_0] [i_5] [i_6])))) ? (arr_6 [i_2 - 1] [i_2] [i_2 + 1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((1751942091U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned short)5])))))))))));
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) ((arr_15 [i_5] [i_2 - 1] [i_1 - 3] [i_0 + 1]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [(signed char)10])))))) : (((/* implicit */int) arr_3 [i_5]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))) : (((/* implicit */int) (unsigned short)33516)))))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) & (((/* implicit */int) (signed char)123))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 6044840557773449621LL)))) : (((long long int) -2115124135))));
                                var_22 ^= ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5))) | (906821283U))) >= (((((/* implicit */_Bool) 1176386318)) ? (((unsigned int) (unsigned short)15)) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (3605411119U)))))));
                            }
                        } 
                    } 
                    var_23 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (1137612526U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_0 [i_0]))))))) ? (((((/* implicit */unsigned int) ((((/* implicit */int) (short)-19501)) ^ (((/* implicit */int) (unsigned short)3911))))) ^ (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) arr_18 [i_0] [i_1] [i_2 - 2] [(unsigned char)7] [i_0])) : (arr_4 [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_1 + 1])) ? (((/* implicit */int) (unsigned short)21374)) : (((/* implicit */int) var_15))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) ((unsigned short) var_2));
}
