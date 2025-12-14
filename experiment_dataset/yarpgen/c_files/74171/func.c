/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74171
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
    var_16 = ((/* implicit */int) max((var_16), (var_13)));
    var_17 = var_14;
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_18 ^= ((/* implicit */short) (!(arr_2 [i_1] [i_1] [i_0])));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_7 [i_0] [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2932936309U)) ? (((/* implicit */int) arr_4 [i_2] [i_1] [i_0])) : (((/* implicit */int) (unsigned short)37534))))) ? ((-(((/* implicit */int) var_6)))) : ((~(((/* implicit */int) arr_5 [i_2] [i_1] [i_1] [i_0])))));
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_3))));
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((-1292353573520723700LL) + (((/* implicit */long long int) -1575664147)))))));
            }
            var_21 = ((/* implicit */short) (+(((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))));
        }
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1292353573520723713LL)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [(unsigned short)10] [(unsigned short)10] [(unsigned short)10] [i_0])))) : (1557352275)));
        arr_9 [i_0] = ((/* implicit */unsigned int) (((~(((/* implicit */int) var_11)))) == (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))));
    }
    var_22 = ((/* implicit */long long int) 720642561);
}
