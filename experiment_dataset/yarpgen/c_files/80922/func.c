/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80922
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
    var_14 = ((/* implicit */int) max((var_14), (((((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) % (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_10)))))) % (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_0)) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_15 += ((/* implicit */signed char) min((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (max(((-(((/* implicit */int) var_7)))), (((/* implicit */int) var_7))))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */short) var_6);
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)1))) >= (6646622010153707491LL))))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_10)) ? ((((_Bool)1) ? (268435455) : (((/* implicit */int) var_1)))) : (((/* implicit */int) (_Bool)1))))));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(short)0] [(short)0]))) : (var_13))) % (((((/* implicit */unsigned long long int) 451956693714060263LL)) % (arr_4 [i_0])))))) ? (var_13) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (-984572793))))));
                }
            }
        } 
    } 
}
