/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63323
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
    var_17 *= var_14;
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [4U] = max((((/* implicit */unsigned int) (+(((((/* implicit */int) (short)-32766)) % (((/* implicit */int) arr_0 [i_0]))))))), (((unsigned int) var_15)));
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) max((((/* implicit */int) (short)32762)), (-553855326))))));
            var_19 += arr_1 [i_1 - 1];
            arr_5 [i_1] = ((/* implicit */unsigned char) arr_0 [i_0]);
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                arr_8 [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_6 [i_0] [i_1 + 3] [i_2] [i_1])) >> (((((/* implicit */int) arr_6 [i_0] [i_1 + 3] [i_2] [i_1])) - (86))))), ((+(((/* implicit */int) (_Bool)1))))));
                var_20 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)9)) : (var_1)))) % (((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (arr_7 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned int) arr_4 [i_1] [i_2]))))))));
                var_21 = arr_3 [i_0] [(_Bool)1];
                arr_9 [i_1] [i_2] [i_1 + 1] [i_1] = max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)155)) & (((/* implicit */int) (unsigned char)30))))), (arr_7 [i_0] [5] [(short)4]));
                var_22 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_8))))) >> (((((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 3] [i_1 - 1])) - (83)))))), (((unsigned int) arr_6 [(short)2] [(unsigned char)0] [i_1] [i_2]))));
            }
            var_23 = ((/* implicit */signed char) 7700285668937103396ULL);
        }
    }
    var_24 &= ((/* implicit */int) var_10);
    var_25 = ((/* implicit */signed char) 4009274156U);
}
