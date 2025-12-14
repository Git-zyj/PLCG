/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62522
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
    var_17 ^= ((/* implicit */long long int) var_16);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 4; i_2 < 22; i_2 += 4) 
                {
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) 14462368790876371180ULL)) && (((/* implicit */_Bool) 8482025236379447060ULL))));
                    var_19 ^= ((/* implicit */long long int) max(((+(var_12))), (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) * (-7881277563411974508LL))), (((arr_1 [i_0] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))))))))));
                }
                for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    var_20 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_16))) >= (((4057874924U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1]))))) / (((/* implicit */int) arr_2 [i_0] [i_3]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0]))) : (arr_8 [i_0] [i_1] [i_1] [i_0])))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((782766824U) / (var_11))))))));
                    arr_10 [24U] [7U] [7U] [i_0] = max((((/* implicit */int) ((_Bool) ((arr_2 [i_0] [i_3]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_13)))))), (((int) var_2)));
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) 2397520095U)) ? (((/* implicit */int) max((arr_0 [i_0]), (arr_9 [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) 9750805935915841064ULL)) ? (((/* implicit */int) arr_9 [i_3] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_1])))))))));
                    arr_11 [i_0] [i_1] [i_0] [i_3] = ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? ((~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0])))))) : (((int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16335124766300702106ULL)))));
                }
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */short) (((~(((/* implicit */int) min(((_Bool)0), ((_Bool)1)))))) != (((/* implicit */int) ((var_0) >= (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16))))))))));
            }
        } 
    } 
}
