/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61659
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 8; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        {
                            arr_9 [(unsigned char)1] [i_1] [i_3] [i_3 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((unsigned int) arr_7 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [i_0] [i_0]))))) ? (((((((/* implicit */int) var_1)) << (((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_1])) - (49364))))) | (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && ((_Bool)0)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3] [i_3] [i_1])) ? (((/* implicit */int) (unsigned char)173)) : (((/* implicit */int) arr_1 [i_1]))))))))));
                            var_11 = ((/* implicit */_Bool) max((((short) (unsigned char)254)), (arr_4 [i_0] [i_1] [i_2] [i_3])));
                        }
                    } 
                } 
                arr_10 [(signed char)6] = ((/* implicit */_Bool) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 + 2]))) * (18446744073709551615ULL))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 1; i_4 < 9; i_4 += 2) 
                {
                    for (short i_5 = 4; i_5 < 9; i_5 += 3) 
                    {
                        {
                            arr_16 [i_0] [6ULL] [6ULL] [i_5] = ((/* implicit */short) min(((-(((/* implicit */int) (unsigned char)196)))), (((/* implicit */int) ((short) arr_15 [i_0] [i_1] [i_0])))));
                            var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [(unsigned char)5] [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_4])))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)224))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((unsigned long long int) var_0));
    var_14 = ((/* implicit */unsigned long long int) var_4);
    var_15 = ((/* implicit */signed char) var_0);
}
