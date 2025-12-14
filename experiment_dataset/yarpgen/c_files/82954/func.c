/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82954
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_4 [2LL] [(short)9] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1]))) & (0U))))));
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        arr_9 [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (signed char)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (arr_0 [i_0])));
                        arr_10 [i_0] = ((/* implicit */int) var_10);
                        var_18 = 6970940122208814344ULL;
                        var_19 &= ((/* implicit */int) min(((~(((((/* implicit */_Bool) arr_1 [9ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (11475803951500737272ULL))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-12)))))));
                    }
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(var_12)))) <= (((11475803951500737272ULL) + (var_6)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        arr_13 [i_4] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (~((+(((((/* implicit */_Bool) var_10)) ? (arr_6 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [(unsigned short)4] [(unsigned short)4])))))))));
                        arr_14 [i_2] [i_4] |= ((/* implicit */unsigned int) 11475803951500737272ULL);
                    }
                }
                for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    arr_17 [i_5] [i_5] &= ((/* implicit */signed char) ((((/* implicit */_Bool) 11475803951500737269ULL)) && (((/* implicit */_Bool) (-(((((/* implicit */_Bool) 31457280)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_13))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 21; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 22; i_7 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 1208890083)) < (max((11475803951500737272ULL), (((/* implicit */unsigned long long int) 536870784))))))), (var_2)));
                                var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) (signed char)(-127 - 1))))))));
                                var_23 -= ((/* implicit */unsigned int) ((short) max((9223372036854775807LL), (((/* implicit */long long int) ((short) arr_3 [i_7]))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)66))));
                }
                for (int i_8 = 2; i_8 < 22; i_8 += 3) 
                {
                    arr_25 [i_0] = ((unsigned int) 6970940122208814344ULL);
                    arr_26 [i_0 - 1] [i_0] [20LL] &= ((/* implicit */short) (((-2147483647 - 1)) >= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)43414)) || (((/* implicit */_Bool) var_11)))))));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) -4417363375563256260LL);
    var_26 += ((/* implicit */signed char) var_16);
}
