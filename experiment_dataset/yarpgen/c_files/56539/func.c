/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56539
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
    var_18 = ((/* implicit */unsigned long long int) (unsigned char)25);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            arr_5 [(short)14] [i_0] [8LL] &= ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0]) < (((/* implicit */int) (unsigned char)50)))))) / (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_16) : (((/* implicit */unsigned long long int) arr_4 [1] [(signed char)9])))))), (((((/* implicit */_Bool) ((signed char) var_8))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)92))))) : (((unsigned long long int) arr_2 [i_0]))))));
            arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0])))) ? ((+(arr_2 [i_1]))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_2 [(signed char)11]) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) (short)14554)) ? (arr_4 [i_0] [i_1]) : (((/* implicit */int) arr_1 [i_1]))))))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                arr_9 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_6)), (9157988957148662154ULL)));
                arr_10 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) (-(max((((/* implicit */int) arr_1 [i_2 + 1])), (-820648157)))));
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 + 1] [i_2])) ? (((/* implicit */int) arr_7 [i_2 + 1] [i_2 + 1] [i_2])) : (((/* implicit */int) arr_0 [i_2 + 1]))))))));
            }
        }
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            var_21 += ((/* implicit */_Bool) ((unsigned char) (signed char)-43));
            var_22 -= ((/* implicit */short) min((((((((/* implicit */int) min((var_9), (((/* implicit */short) var_1))))) + (2147483647))) >> (((((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [6ULL])), (arr_8 [i_0])))) - (10833))))), (((/* implicit */int) max((((short) (signed char)-37)), (arr_14 [i_0]))))));
            arr_15 [i_0] [(short)11] [i_3] = ((/* implicit */_Bool) min((((/* implicit */int) (((!(((/* implicit */_Bool) (-2147483647 - 1))))) && (((/* implicit */_Bool) 3966825026U))))), (-820648157)));
        }
    }
    var_23 = ((/* implicit */unsigned char) (+((+(((((/* implicit */int) var_14)) >> (((2398166639U) - (2398166630U)))))))));
}
