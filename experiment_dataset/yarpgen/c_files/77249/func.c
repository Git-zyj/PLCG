/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77249
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
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_5)), ((-(((/* implicit */int) var_10))))))), (13165486255976362477ULL)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))));
                        arr_9 [i_0] [i_0] [10LL] [i_3] = ((/* implicit */unsigned char) (unsigned short)32645);
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_18)))))) > (max((((/* implicit */unsigned long long int) var_17)), (5281257817733189138ULL))))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)20)) ? (1585667009385494713LL) : (((/* implicit */long long int) 1315697477U))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) (signed char)117))))) : (13165486255976362477ULL)))));
    var_22 = ((/* implicit */unsigned char) var_0);
    var_23 = ((/* implicit */unsigned char) max((max((1315697477U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) (signed char)20))));
    var_24 -= ((/* implicit */int) min((7021466374949180512ULL), (((/* implicit */unsigned long long int) (unsigned short)32657))));
}
