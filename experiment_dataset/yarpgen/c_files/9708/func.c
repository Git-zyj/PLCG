/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9708
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_2), (((((/* implicit */int) var_19)) <= (-1668606113)))))) << (min((((/* implicit */int) var_2)), (var_10)))));
    var_21 *= ((((/* implicit */int) ((((/* implicit */int) ((unsigned char) 1351306892401271327LL))) > (((/* implicit */int) var_8))))) << (((((((/* implicit */_Bool) (-(var_7)))) ? (max((((/* implicit */long long int) var_18)), (var_1))) : (((/* implicit */long long int) -1668606134)))) - (5320079451778958494LL))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) max((max((arr_2 [i_0 - 1]), (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [(signed char)17])))), (arr_0 [i_0] [i_0])))) >= (((((((/* implicit */int) arr_4 [i_0 + 1] [i_0])) == (arr_1 [i_0]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_7 [i_2] [10] [i_1] [i_0])) : (arr_0 [i_0] [i_0])))) : (((unsigned int) arr_3 [i_2 - 1]))))));
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_5 [i_0 - 2])) ? (arr_5 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)237))))), (((/* implicit */unsigned int) min((arr_0 [i_0 + 1] [i_2 - 1]), (arr_2 [i_0])))))))));
                }
            } 
        } 
        var_24 = ((/* implicit */int) min((var_24), ((~(((((/* implicit */int) arr_4 [i_0] [i_0 - 2])) / ((+(((/* implicit */int) arr_7 [i_0] [i_0 - 1] [i_0] [i_0]))))))))));
    }
    for (long long int i_3 = 1; i_3 < 18; i_3 += 4) 
    {
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) arr_0 [i_3 + 1] [i_3 - 1]))));
        arr_11 [i_3] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_6 [i_3] [15] [15] [i_3])), (max((arr_1 [i_3]), ((((_Bool)1) ? (arr_0 [i_3] [i_3]) : (arr_1 [i_3])))))));
    }
    var_26 = ((/* implicit */signed char) min((((/* implicit */long long int) max((((((/* implicit */_Bool) (short)-25832)) ? (((/* implicit */int) var_8)) : (var_7))), (max((var_12), (var_10)))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_14)) / (((/* implicit */int) var_8))))) ? (min((var_6), (((/* implicit */long long int) var_17)))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
}
