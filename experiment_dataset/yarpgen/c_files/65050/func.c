/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65050
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
    var_20 ^= ((/* implicit */unsigned char) max((max((min((var_9), (((/* implicit */unsigned int) (unsigned char)2)))), (((/* implicit */unsigned int) min((-1932700637), (((/* implicit */int) var_16))))))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)29592)) > (((/* implicit */int) var_8))))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) 3604284053U)) * (0ULL)))));
                        var_22 ^= ((/* implicit */short) ((int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) / (max((((/* implicit */long long int) arr_1 [i_0])), (arr_8 [i_0] [i_1] [i_2] [i_2 + 3] [i_3] [i_3 - 2]))))));
                        arr_10 [i_0] [i_1] [i_2] [i_3 + 1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 969419304)), (((((/* implicit */unsigned long long int) var_10)) & (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (20ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53054)))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 4; i_5 < 17; i_5 += 4) 
                        {
                            {
                                arr_17 [i_5] [i_4] [(unsigned char)7] [(unsigned char)0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((int) 0))))))));
                                arr_18 [i_0] [i_0] [(short)18] [i_0] [i_0] = ((/* implicit */unsigned short) max((arr_3 [i_2] [i_2 - 2] [i_2 - 2]), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22803))) : (8290412243518407845ULL))) < (18446744073709551595ULL))))));
                                var_23 = ((/* implicit */unsigned short) max((arr_11 [i_5] [i_2] [0] [i_0]), (((int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)139))) : (6618051046866913322LL))))));
                                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) min(((~(((/* implicit */int) ((((/* implicit */int) arr_16 [(unsigned char)7] [i_1] [(unsigned char)1])) > (((/* implicit */int) arr_14 [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1]))))))), (((((/* implicit */int) ((unsigned short) 6618051046866913322LL))) << ((((((~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))) + (28584))) - (26))))))))));
                                var_25 = ((/* implicit */unsigned long long int) var_10);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */_Bool) var_18);
}
