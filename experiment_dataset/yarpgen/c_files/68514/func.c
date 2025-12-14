/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68514
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
    var_10 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1])))) ? (((/* implicit */long long int) ((int) ((((/* implicit */unsigned long long int) 212536890)) * (var_0))))) : (((long long int) 4407656116624587434ULL))));
                            var_12 = ((/* implicit */_Bool) arr_2 [(signed char)4] [i_1]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_5] [i_1] [i_5] [i_0 - 1] [i_6] [i_1]))))) ? (min((((/* implicit */unsigned long long int) min((arr_5 [5ULL] [0ULL] [i_5]), (((/* implicit */long long int) arr_14 [i_0 - 1] [i_1] [9LL] [i_5] [i_6]))))), (((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (4407656116624587434ULL))))) : (((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) (_Bool)1))))) & (14039087957084964181ULL)))));
                                var_14 = ((int) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (4397509640192ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-40))) < (14039087957084964181ULL)))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */int) max((var_15), (((((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) 9223371487098961920LL)) : (18446739676199911424ULL))) != (((/* implicit */unsigned long long int) (~(var_8))))))) + (((((int) 3143934644900680653LL)) | (((/* implicit */int) arr_14 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [11ULL]))))))));
                arr_17 [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])))) ? (((max((18446739676199911431ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_11 [i_0])) : (((/* implicit */int) var_9))))))) : (max((max((4397509640205ULL), (((/* implicit */unsigned long long int) (signed char)127)))), (((/* implicit */unsigned long long int) 3U))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))));
    var_17 = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) 14039087957084964181ULL)) ? (((/* implicit */unsigned long long int) var_2)) : (var_0))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) ((((long long int) var_5)) >> (((((/* implicit */long long int) ((/* implicit */int) var_4))) / (var_2))))))));
}
