/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82975
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */_Bool) min((((/* implicit */short) ((arr_0 [i_1 + 1]) == (arr_0 [i_1 + 1])))), (arr_5 [i_1])));
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) max((arr_5 [(_Bool)1]), (arr_1 [i_1] [(signed char)8]))))))) ? (((((/* implicit */_Bool) arr_3 [i_1 + 1] [(unsigned char)5])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_3 [i_1 + 1] [1]))) : ((-(arr_3 [i_1 + 2] [i_1 - 1]))))))));
                var_17 = ((/* implicit */unsigned short) (+(((unsigned long long int) ((((/* implicit */unsigned long long int) var_5)) & (2627770074815814456ULL))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 15; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            arr_10 [i_3] [i_3] = ((/* implicit */unsigned long long int) 28942666);
                            arr_11 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */int) arr_7 [3LL] [(unsigned char)14] [3LL]);
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) arr_6 [i_1] [i_2] [i_3]))));
                        }
                    } 
                } 
                var_19 *= ((/* implicit */signed char) ((((((/* implicit */int) arr_2 [i_1 + 2])) - (((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) arr_1 [i_1 + 2] [i_0])))))) - ((+(((/* implicit */int) var_4))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((unsigned long long int) var_6));
}
