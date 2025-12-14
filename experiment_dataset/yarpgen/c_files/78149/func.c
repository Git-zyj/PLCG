/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78149
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) min((max((var_17), (((/* implicit */unsigned short) var_9)))), (var_8))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_5 [i_0])) + (((/* implicit */int) (unsigned char)164)))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_1])), ((unsigned short)0))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            var_20 = ((/* implicit */int) 594762088U);
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) (signed char)8)) && (((/* implicit */_Bool) arr_0 [i_1] [i_2]))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (var_3) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [12ULL] [i_4])))))))));
                        }
                        var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min(((short)-1), (((/* implicit */short) arr_3 [i_0])))))));
                    }
                }
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) var_14);
        var_23 = ((/* implicit */short) (+(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) var_16)) - (var_10)));
}
