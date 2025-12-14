/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79002
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
    var_20 = ((/* implicit */unsigned char) max(((_Bool)1), ((_Bool)1)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_21 += ((/* implicit */signed char) arr_0 [(signed char)12]);
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)32035)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)32035))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (-(var_17)))) ? (((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_2))))) : (arr_8 [(unsigned short)9] [i_1] [i_1] [8ULL] [8ULL]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((_Bool) var_10))))))));
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    var_24 = ((/* implicit */unsigned short) ((_Bool) min((min((((/* implicit */unsigned int) arr_2 [i_4] [i_1])), (arr_11 [i_0] [i_1] [i_1] [i_4]))), (((/* implicit */unsigned int) min((((/* implicit */short) var_15)), (var_16)))))));
                    arr_13 [i_0] [19ULL] [i_0] [5] = ((/* implicit */unsigned int) var_16);
                    arr_14 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)128)) / (((/* implicit */int) (_Bool)1))));
                }
            }
        } 
    } 
}
