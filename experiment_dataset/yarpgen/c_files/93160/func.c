/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93160
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
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_12)), (var_3)));
    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) var_9)) * (134217727U))))));
    var_21 -= ((/* implicit */short) var_2);
    var_22 = ((/* implicit */unsigned char) ((_Bool) var_8));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_23 += ((/* implicit */_Bool) ((unsigned char) max((4160749563U), (((/* implicit */unsigned int) var_17)))));
                            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) min((((unsigned char) 134217727U)), (var_0))))));
                            var_25 = ((((/* implicit */_Bool) arr_3 [i_0 - 3] [i_2 + 1])) ? (((long long int) var_6)) : (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1] [i_1] [13U] [i_0 - 4])) | (((/* implicit */int) arr_5 [i_1] [i_1] [(_Bool)1] [i_0 - 2]))))));
                        }
                    } 
                } 
                var_26 = max(((((!(((/* implicit */_Bool) arr_5 [i_1] [i_1] [10LL] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1])))))) : (min((arr_7 [i_1] [i_0] [i_0] [i_1]), (((/* implicit */unsigned int) (short)-31955)))))), (((/* implicit */unsigned int) arr_1 [i_1] [i_0])));
            }
        } 
    } 
}
