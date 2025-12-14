/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84702
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
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((short) ((((arr_2 [i_0]) * (((/* implicit */int) (_Bool)1)))) + ((+(((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (short i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_14 [i_3] [i_4] [i_2] [i_1] [i_4] = ((unsigned short) min((arr_7 [1U] [3ULL] [i_0 + 2] [i_0]), (arr_7 [i_0] [i_0] [i_0 + 2] [i_0 + 2])));
                                arr_15 [i_0] [i_1] [13U] [i_4] [i_4] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(signed char)12] [(signed char)12] [(signed char)12] [i_0 - 2])) ? (arr_3 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((((/* implicit */int) (unsigned char)2)) & (var_7))))), (((/* implicit */int) min((((short) (unsigned short)40961)), (((/* implicit */short) (_Bool)1)))))));
                                arr_16 [i_1] [14ULL] [i_4] [i_3] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_12 [i_2] [i_4]), (((/* implicit */signed char) (_Bool)1)))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0 + 3] [i_0 + 3] [i_0 + 3] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) arr_5 [i_0 - 2])) < (max((((/* implicit */unsigned int) arr_1 [i_1] [7LL])), (4294967283U))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 + 3] [i_1])) % (((/* implicit */int) arr_12 [i_0 + 1] [i_1]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_10 [i_0] [i_0] [11LL] [i_1])))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40966))) / (2444087195145067746ULL)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) (_Bool)1)), (1883679681U)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_14))) % (15U))) ^ (var_15)))) : (max((((/* implicit */unsigned long long int) ((var_13) <= (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), (((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))));
    var_20 = ((((var_2) < (((/* implicit */int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) (unsigned short)40969))))))) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned char)2)))))));
}
