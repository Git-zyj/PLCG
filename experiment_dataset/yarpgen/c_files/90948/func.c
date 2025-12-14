/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90948
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
    var_14 = ((/* implicit */_Bool) var_9);
    var_15 = var_12;
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) -1104743916)) ? (min((((/* implicit */int) min(((signed char)-102), ((signed char)33)))), (((((/* implicit */_Bool) (short)-24038)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)53)))))) : (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-10)))), (((/* implicit */int) var_7)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (signed char i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                arr_9 [i_0] [(signed char)5] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)28881)) >= (arr_6 [i_0] [i_1] [(signed char)1])));
                var_17 = ((signed char) (signed char)102);
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-80))) / (arr_8 [i_2 + 1] [i_2 - 1] [i_2 + 1])));
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (+(((/* implicit */int) arr_4 [i_2 + 1] [i_0] [i_2 + 1])))))));
            }
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    arr_17 [i_0] [10] [i_1] [i_0] = ((/* implicit */long long int) ((int) -302700627620444046LL));
                    arr_18 [i_0] [i_1] [i_1] [(signed char)4] = ((/* implicit */signed char) arr_15 [i_0] [i_0] [i_3] [(short)5]);
                }
                var_20 = ((/* implicit */short) max((((/* implicit */unsigned int) ((signed char) (signed char)-56))), (min((arr_8 [i_1] [i_3 - 1] [(signed char)9]), (arr_8 [i_0] [i_3 - 1] [i_0])))));
            }
            /* vectorizable */
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 3642877726U))));
                var_22 *= arr_15 [i_0] [i_0] [i_0] [7U];
                var_23 = ((/* implicit */int) (-(arr_5 [i_0] [i_5])));
            }
            for (signed char i_6 = 2; i_6 < 10; i_6 += 4) 
            {
                arr_23 [i_1] [(signed char)8] [i_0] [i_1] = ((/* implicit */signed char) min((((min((((/* implicit */unsigned int) (unsigned short)5407)), (arr_11 [i_6] [(_Bool)1] [i_0]))) / (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 1104743930)))))), (var_5)));
                arr_24 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((2365914337U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-26036))))), (((/* implicit */unsigned int) ((signed char) 4013393855U)))))) ? (((/* implicit */unsigned int) max((-1104743887), (((((/* implicit */int) (unsigned short)37583)) >> (((-1104743926) + (1104743948)))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-107))) - (1170045469U)))));
            }
            arr_25 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_0] [i_1] [i_0])) ^ (((/* implicit */int) (signed char)90))))), (max((var_2), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-5285)))))))));
            arr_26 [5U] [5U] [i_1] = ((/* implicit */int) arr_8 [i_0] [(signed char)8] [4LL]);
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-43))))) ? (((/* implicit */int) (short)11108)) : (((/* implicit */int) (signed char)-125))))), (((arr_14 [(signed char)6] [6] [i_1] [i_1]) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_1] [i_0] [i_0]))))) : (arr_10 [i_1] [(signed char)0] [10U] [(signed char)7]))))))));
        }
        arr_27 [1U] = ((/* implicit */unsigned short) (short)-17508);
    }
}
