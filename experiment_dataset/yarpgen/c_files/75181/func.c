/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75181
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
    var_11 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    var_12 = ((/* implicit */unsigned int) arr_2 [i_0]);
                    arr_7 [i_1] [i_0] = ((/* implicit */signed char) arr_2 [i_0]);
                    var_13 *= ((/* implicit */_Bool) arr_3 [i_2] [6ULL]);
                    var_14 += ((/* implicit */signed char) (~((~(((/* implicit */int) var_7))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [6] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) == ((~(var_3)))));
                                arr_13 [i_0 - 3] [i_0 - 2] [i_0] [i_0] [i_0 - 2] [i_0] [i_0 + 1] = ((/* implicit */_Bool) ((arr_11 [i_0] [i_0] [(unsigned char)13] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_3] [i_0])))));
                                var_15 = ((/* implicit */_Bool) max((arr_3 [i_3 - 1] [i_2]), (((/* implicit */short) ((((/* implicit */int) arr_1 [i_0] [i_0])) == (((/* implicit */int) arr_4 [8LL] [i_2])))))));
                            }
                        } 
                    } 
                }
                var_16 ^= ((/* implicit */short) (~((+(3187238228044995004LL)))));
                var_17 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                var_18 = ((/* implicit */unsigned long long int) arr_10 [i_0 + 2] [i_0] [i_1] [i_1] [i_0]);
                /* LoopNest 2 */
                for (unsigned int i_5 = 2; i_5 < 19; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_19 = ((arr_4 [i_0 - 3] [i_1]) && (((/* implicit */_Bool) (+(min((((/* implicit */long long int) arr_15 [(_Bool)1] [(unsigned short)9] [i_0 - 2] [i_0 - 2])), (var_3)))))));
                            var_20 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) % (var_6))))))));
                            var_21 = ((/* implicit */_Bool) arr_11 [i_0] [i_5 - 1] [i_1] [i_0]);
                            arr_18 [i_0] [i_1] [i_5 - 2] [i_0] = ((/* implicit */_Bool) var_0);
                            arr_19 [i_5 + 1] [i_5] [i_0] [i_5] [i_5] = ((/* implicit */unsigned int) arr_5 [i_6] [i_6] [i_6] [i_6]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((var_2) / (((/* implicit */long long int) max((((var_6) ^ (var_0))), ((-(var_5))))))));
    var_23 |= ((/* implicit */unsigned int) var_3);
}
