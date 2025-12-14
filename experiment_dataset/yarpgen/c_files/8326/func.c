/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8326
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
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_20 = arr_5 [i_0 - 1];
                /* LoopSeq 1 */
                for (unsigned short i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        arr_11 [10ULL] [i_1] [i_2] [i_1] = var_13;
                        var_21 = ((/* implicit */int) var_10);
                        var_22 = ((/* implicit */int) var_6);
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_9 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 2])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 + 2]))));
                        var_24 = ((/* implicit */unsigned short) var_11);
                    }
                    var_25 ^= min((((((/* implicit */int) ((arr_1 [i_0 - 1] [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))))) | (((((/* implicit */_Bool) (unsigned short)8661)) ? (((/* implicit */int) (signed char)126)) : (var_12))))), (((/* implicit */int) (unsigned short)53936)));
                    var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max(((unsigned short)11599), (((/* implicit */unsigned short) (signed char)17))))) ? (((/* implicit */int) (unsigned short)11333)) : (arr_8 [i_2 - 2] [i_0] [i_0 - 1] [i_0]))) != (((int) arr_4 [i_0] [i_0] [i_2]))));
                }
                var_27 = ((/* implicit */short) max((((int) min((arr_5 [i_0]), (((/* implicit */short) (signed char)-110))))), (((/* implicit */int) arr_5 [i_0 + 3]))));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)14558))));
}
