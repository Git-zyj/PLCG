/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91560
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
    for (short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_0 - 1] [i_1] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [10]))) : (0ULL)))))) && (((/* implicit */_Bool) ((unsigned short) max((364908318), (-364908309)))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    arr_10 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) 499007917);
                    arr_11 [i_2 - 1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) min((max((arr_5 [i_0] [i_1] [i_2 - 1]), (arr_5 [i_0] [i_1] [i_2 + 2]))), (max((((/* implicit */unsigned long long int) ((-499007918) % (var_8)))), (((unsigned long long int) var_1))))));
                }
                for (int i_3 = 3; i_3 < 12; i_3 += 3) 
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -499007921)) ? (((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) - (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [(unsigned short)0]) : (arr_7 [i_0] [2LL]))))) : (((/* implicit */long long int) -1807016318))));
                    var_21 = ((/* implicit */_Bool) min((var_21), (((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2763459653551069430ULL)))))))) || (((/* implicit */_Bool) (+(499007928))))))));
                }
            }
        } 
    } 
    var_22 = var_15;
    var_23 = ((/* implicit */_Bool) 499007917);
}
