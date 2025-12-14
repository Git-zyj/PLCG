/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68384
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
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 3; i_2 < 13; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0 + 1] [i_2]);
                                arr_12 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (+(((unsigned long long int) arr_4 [i_2 - 2] [i_1]))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */unsigned int) ((unsigned long long int) arr_11 [i_0] [i_2] [13U] [13U] [i_2] [i_2 - 3] [(signed char)10]));
                    var_13 = ((/* implicit */unsigned char) min(((~(var_6))), (((int) var_2))));
                }
                for (unsigned long long int i_5 = 3; i_5 < 10; i_5 += 2) 
                {
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 - 1])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_2 [i_0] [i_1]))))) ? (((/* implicit */int) arr_14 [10ULL] [i_1] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_0] [i_0 - 2] [i_1] [1ULL] [i_5 + 4] [1ULL]))))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 1) 
                    {
                        var_15 = ((unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_0) : (var_1))));
                        arr_19 [i_0] [i_5] [i_5] [i_6] [i_6 + 3] = ((/* implicit */_Bool) arr_18 [i_6] [i_0]);
                    }
                    var_16 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) arr_1 [i_5]))))) ? (((/* implicit */int) var_7)) : (((int) var_5)))));
                }
                for (int i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    arr_22 [i_0] [i_1] = (~(max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_0])), (arr_21 [(signed char)12] [i_1] [i_7]))));
                    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
                }
                arr_23 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_13 [(signed char)7] [i_1] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_1] [i_0])))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((int) ((signed char) (-(var_1)))));
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), (var_6)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_6)) : (var_8)))))));
    var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) var_0)))))))));
    var_21 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_0) : (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_1)))) : ((-(var_0)))))));
}
