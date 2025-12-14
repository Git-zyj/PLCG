/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59027
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
    var_16 += ((/* implicit */short) var_7);
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) var_8))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_1 [i_0])), ((~(((/* implicit */int) arr_1 [i_0]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_1))));
                            arr_13 [i_0] = ((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) var_8);
                var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_12 [i_0] [i_0] [i_1] [i_1 + 1])), (arr_4 [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) 199665067656560765ULL))))))), (((/* implicit */int) (unsigned char)251))));
                arr_14 [i_0] [i_1 - 1] = ((/* implicit */unsigned int) arr_0 [i_0]);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_10);
}
