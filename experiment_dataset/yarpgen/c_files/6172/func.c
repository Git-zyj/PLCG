/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6172
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_11 -= ((/* implicit */short) arr_0 [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) arr_5 [i_0]);
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(arr_2 [i_2 - 1]))))));
                        var_14 = ((/* implicit */long long int) (~((+(((/* implicit */int) (short)-13399))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            arr_13 [14] [i_2 - 1] [i_2 - 1] [i_3] [i_2] = ((((/* implicit */_Bool) (signed char)32)) ? (17805280293084023214ULL) : (15824147676869876827ULL));
                            var_15 ^= ((/* implicit */_Bool) var_7);
                            arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(arr_6 [(unsigned short)7] [i_3 + 1]))))));
                        }
                    }
                    for (short i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        arr_18 [i_0] [i_2] [i_2 + 2] [12] [(unsigned short)9] = ((/* implicit */unsigned short) arr_9 [(unsigned short)0] [i_1] [i_2] [(unsigned short)14] [i_2]);
                        var_16 += ((/* implicit */long long int) (+(((/* implicit */int) arr_16 [i_2 - 1] [i_5] [i_5]))));
                        arr_19 [i_1] [i_1] [i_2] [i_1] [i_0] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-13395))));
                        arr_20 [i_2] [(_Bool)1] [i_2] [(unsigned short)10] [(_Bool)1] [(unsigned char)10] = ((/* implicit */short) (+((+(((/* implicit */int) arr_15 [i_0] [i_1] [3] [(unsigned char)12] [i_1] [i_2 - 2]))))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
    {
        arr_24 [3U] [i_6] = ((/* implicit */short) arr_0 [i_6]);
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (+(((/* implicit */int) arr_15 [(short)15] [(signed char)11] [i_6] [i_6] [1] [i_6])))))));
        arr_25 [i_6] = ((/* implicit */long long int) arr_4 [i_6] [i_6]);
        var_18 = ((/* implicit */unsigned int) arr_2 [i_6]);
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (signed char)32))));
    }
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_6))));
}
