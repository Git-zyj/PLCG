/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66871
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_10 += ((/* implicit */unsigned long long int) max((((2147483640LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 - 1]))))), (((long long int) var_4))));
                arr_6 [i_0] &= ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_2 [(unsigned short)10])), (((((/* implicit */_Bool) (short)-26989)) ? (((((/* implicit */int) arr_1 [i_0] [i_0])) & (-1973777397))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(_Bool)1] [i_0])))))))));
                var_11 = ((/* implicit */int) arr_0 [i_1]);
                var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_1]))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */int) max((2147483640LL), (8660007251808524521LL)));
                            arr_12 [10] = ((/* implicit */long long int) min(((+(((/* implicit */int) arr_9 [i_0])))), (((/* implicit */int) (unsigned short)0))));
                            var_14 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) -8660007251808524521LL)) : (arr_10 [i_2] [i_2] [i_2 + 1] [i_2])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((arr_16 [i_4] [i_4]), (((/* implicit */unsigned long long int) (unsigned char)77))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_4] [i_4])) ? (((/* implicit */int) (unsigned short)1953)) : (((/* implicit */int) var_8))))))))) : (13579463569525566797ULL)));
        var_16 |= ((((((((/* implicit */_Bool) -8660007251808524522LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_13 [i_4]))) % (9137917931903755032LL))) / (((/* implicit */long long int) var_1)));
    }
}
