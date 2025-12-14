/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97775
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
    var_14 = ((/* implicit */signed char) var_7);
    var_15 |= ((/* implicit */_Bool) var_7);
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_2 [i_0 - 1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((arr_6 [i_1] [i_1] [(_Bool)1] [i_1]) && (((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) -3602369320190990861LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)60877)))))))));
                    arr_8 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((+(((/* implicit */int) var_1)))), (((/* implicit */int) (_Bool)1)))))));
                    var_17 = ((((/* implicit */_Bool) min((765862388513387425ULL), (((/* implicit */unsigned long long int) var_4))))) ? (((((/* implicit */int) (signed char)-14)) & (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min(((signed char)-1), (((/* implicit */signed char) arr_3 [i_1] [i_1]))))));
                    arr_9 [i_0] [(unsigned short)2] [i_1] [(unsigned short)2] &= ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */short) arr_4 [i_0 - 1] [2LL] [i_0 - 1])), (arr_5 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) != (((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [(signed char)2]))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */short) min((((/* implicit */long long int) var_2)), (max((((/* implicit */long long int) var_10)), (var_0)))));
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))))) <= (((/* implicit */int) var_5))))), (max((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)12))))), ((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)255)))))))))));
    }
}
