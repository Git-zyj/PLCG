/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93332
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_20 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) & ((+(((arr_4 [i_3] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_3]))) : (1605961326U)))))));
                            var_21 |= ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_6 [i_3 + 2] [i_3 + 1] [i_2 + 1]) == (arr_6 [i_3] [i_3 - 2] [i_2 - 1])))) > (((/* implicit */int) var_11))));
                            arr_13 [i_0] [i_2 + 1] [(unsigned short)15] [(unsigned short)15] [i_0] = ((((/* implicit */_Bool) (+(15438001081770781071ULL)))) ? (min((((/* implicit */unsigned int) (+(2147483621)))), (3759174130U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_18))));
                            arr_14 [i_3 - 2] [i_1 + 1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) arr_5 [i_0])) != (((/* implicit */int) arr_10 [i_2 - 1] [i_2 + 1] [i_3 + 1] [12ULL])))));
                            arr_15 [i_0] [i_3 + 2] [i_0] [i_1 - 1] = ((/* implicit */unsigned short) arr_12 [(short)1]);
                        }
                    } 
                } 
                var_22 = ((/* implicit */short) ((unsigned long long int) 0ULL));
                var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) (~((+(var_7))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) var_2);
    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) var_12))));
    var_26 |= var_19;
}
