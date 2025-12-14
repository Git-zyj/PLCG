/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76077
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) min(((+(var_11))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (var_6)))))))) : (var_1)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) + (((-1691669657) + (((/* implicit */int) (signed char)0)))))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 9; i_4 += 3) 
                        {
                            {
                                arr_11 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_10 [i_0] [i_0] [i_2] [i_2] [i_4 - 1] [i_1])), (var_8))))));
                                var_13 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_9 [(_Bool)1] [(_Bool)1] [i_2] [i_1] [(_Bool)1] [i_0]))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
