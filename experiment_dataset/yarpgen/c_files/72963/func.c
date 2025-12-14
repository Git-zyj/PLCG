/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72963
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_14 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-18533)) + (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)69))))))) ? (max((max((9415052521814416326ULL), (9415052521814416326ULL))), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_13 [i_4] [i_3 + 3] [i_1] [i_1] [i_1 - 1] [i_1] [i_0])) : (max((((/* implicit */int) (short)5970)), (arr_9 [i_0] [i_0]))))))));
                                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */int) (!((!(((/* implicit */_Bool) 9031691551895135290ULL))))))) < (((/* implicit */int) ((arr_4 [i_1] [i_2] [i_4 - 2]) < (arr_4 [i_0] [i_0] [i_0])))))))));
                                var_16 = ((/* implicit */unsigned short) ((unsigned int) max((((/* implicit */signed char) ((_Bool) 9415052521814416326ULL))), (arr_5 [i_4 - 2] [i_3 - 1] [i_1 + 1]))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */signed char) ((max((((int) 9415052521814416349ULL)), (((/* implicit */int) (!(((/* implicit */_Bool) (short)5970))))))) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_4]))) == (9415052521814416334ULL))))));
                                var_17 = ((9415052521814416310ULL) < (((/* implicit */unsigned long long int) 415067064U)));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_1] = min((((((/* implicit */_Bool) 9031691551895135266ULL)) ? (((/* implicit */int) (unsigned short)6293)) : (((/* implicit */int) (signed char)126)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)59236))))));
            }
        } 
    } 
    var_18 = max((((/* implicit */signed char) ((_Bool) (unsigned short)32640))), (var_3));
}
