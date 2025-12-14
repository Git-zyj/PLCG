/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93811
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) min((arr_1 [i_0]), (min(((~(arr_1 [i_0]))), (((/* implicit */long long int) arr_0 [i_0 + 1]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) (unsigned short)45845);
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)32686)) ? (-5330485773326332984LL) : (-5330485773326332974LL))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned short) 5330485773326332982LL))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (-623300203) : (((/* implicit */int) var_8))))))) : (max(((((_Bool)1) ? (2311620109U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32665))))), (((/* implicit */unsigned int) max(((short)12), (var_15))))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        for (short i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 2; i_3 < 24; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            {
                                arr_19 [i_1] [i_1] [i_2] [i_3] [(_Bool)1] [i_2] = ((/* implicit */unsigned char) min((max((arr_5 [i_3 - 2]), (arr_5 [i_1]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4)))))));
                                var_16 ^= 1410860251;
                            }
                        } 
                    } 
                    var_17 = ((((/* implicit */_Bool) ((var_6) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) -6382596359523101010LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_17 [i_1] [i_1] [i_2] [i_3])))))))) && (max((min((var_5), (arr_6 [i_2]))), (arr_18 [i_1] [i_3 + 1] [(short)22] [(short)22] [i_3]))));
                    var_18 = max((min((arr_18 [i_1] [i_2] [i_3 - 1] [i_1] [i_2]), (arr_18 [i_1] [15] [i_3 - 2] [i_1] [i_1]))), (max((arr_18 [i_1] [i_2] [i_3 - 1] [(unsigned short)9] [19ULL]), (arr_18 [i_3] [i_3] [i_3 + 1] [i_3] [i_3 + 1]))));
                    /* LoopSeq 1 */
                    for (short i_6 = 1; i_6 < 23; i_6 += 4) 
                    {
                        arr_24 [i_1] [2] [i_3] [i_6] [i_1] [i_6] = ((/* implicit */_Bool) (+(5816091631827258015ULL)));
                        arr_25 [i_1] [i_6] = ((/* implicit */_Bool) min((arr_15 [14U] [i_3] [i_2] [i_1]), (((/* implicit */unsigned short) (!(var_5))))));
                    }
                }
                arr_26 [i_2] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned char)48), (var_7)))) ? (((arr_16 [i_1] [i_1] [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))), (max((((/* implicit */long long int) (~(((/* implicit */int) (signed char)119))))), (((((/* implicit */long long int) ((/* implicit */int) var_3))) | (-4332107033229511663LL)))))));
            }
        } 
    } 
}
