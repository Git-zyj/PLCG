/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71784
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) 1832730573)))))) - (((((var_1) + (9223372036854775807LL))) << (((1053152133) - (1053152133)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1902686650)) ? (arr_1 [i_0]) : (((/* implicit */int) var_5)))))))) : (((/* implicit */int) (unsigned short)29321))));
        var_18 = ((/* implicit */short) min((var_18), (var_5)));
        var_19 = ((/* implicit */_Bool) var_6);
        var_20 = (-((+((+(((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_21 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_2 [i_1] [i_1]), (((/* implicit */short) arr_3 [i_1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (var_7))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_17 [i_5] [i_4] [i_3] [i_3] [i_3] [i_2] [i_1] = ((/* implicit */long long int) (short)23727);
                                var_22 -= (+((+(11179869634596424374ULL))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_16 [i_1])))) ? ((~(1185889646U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))), (((min((var_1), (((/* implicit */long long int) var_3)))) - (((/* implicit */long long int) (+(((/* implicit */int) arr_13 [(_Bool)1] [(_Bool)1] [i_3] [7ULL])))))))));
                    arr_18 [i_1] [i_2] [i_1] = ((/* implicit */int) ((_Bool) max((arr_13 [i_3] [i_2] [i_2] [i_1]), (arr_13 [i_1] [i_2] [i_2] [i_3]))));
                    var_24 = ((/* implicit */short) ((arr_16 [i_1]) != (min((((/* implicit */long long int) arr_12 [i_1] [i_1] [i_1] [i_3])), (arr_16 [i_1])))));
                }
            } 
        } 
        arr_19 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) -6389115127173518790LL))));
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1] [i_1] [4])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    }
    var_26 = ((/* implicit */unsigned int) var_4);
    var_27 = ((/* implicit */long long int) var_14);
    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) 2147483647)), (2868569261U)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) -941357145)) ? (5411298341331480366LL) : (var_1))) > (((/* implicit */long long int) ((-1069612029) - (var_6))))))) : (1053152147)));
}
