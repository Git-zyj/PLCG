/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72897
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
    var_12 = ((/* implicit */unsigned short) 1U);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_12 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_2] [22] [i_1] [i_4])) && (((/* implicit */_Bool) arr_1 [i_0 - 1]))))), ((short)16384)));
                                arr_13 [5] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_0 - 1])) > (arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [11] [i_2] [i_4])))), (min((arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [(signed char)5] [i_1] [(signed char)20]), (((/* implicit */int) arr_5 [18ULL] [i_0 - 1] [i_0 - 1]))))));
                                arr_14 [i_1] [i_3] [(_Bool)1] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_9 [i_0 - 1] [i_0] [i_2] [i_0 - 1] [i_4] [i_3]) : (arr_9 [(signed char)14] [16] [16] [i_1] [i_1] [i_0 - 1]))))));
                                arr_15 [i_0] [i_2] [i_1] = ((/* implicit */_Bool) var_10);
                            }
                        } 
                    } 
                    var_13 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1362215825)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (short)16395))))) ? (((((/* implicit */_Bool) arr_11 [(signed char)14] [(signed char)14] [i_2] [(signed char)14] [i_2] [(unsigned char)0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (var_6))) : (((/* implicit */int) min((arr_10 [i_2] [i_2]), (((/* implicit */signed char) arr_0 [i_0])))))))) ? (((/* implicit */unsigned long long int) ((((_Bool) arr_6 [(unsigned short)9])) ? ((+(((/* implicit */int) (unsigned short)62431)))) : ((-(((/* implicit */int) arr_10 [i_0] [i_2]))))))) : (max((max((((/* implicit */unsigned long long int) var_6)), (var_0))), (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned int) arr_2 [i_0])))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) var_4))));
}
