/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93203
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_18 = ((((/* implicit */int) ((((/* implicit */int) ((var_7) == (((/* implicit */int) var_8))))) != (((/* implicit */int) var_3))))) >> (((/* implicit */int) ((_Bool) ((signed char) var_14)))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (int i_4 = 3; i_4 < 16; i_4 += 1) 
                            {
                                var_19 -= ((/* implicit */_Bool) var_16);
                                var_20 = ((/* implicit */unsigned long long int) var_17);
                                var_21 = ((/* implicit */short) ((unsigned int) (signed char)54));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
                            {
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((var_5) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */long long int) var_2)) & (var_12)));
                            }
                            for (int i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
                            {
                                var_24 = ((((/* implicit */unsigned long long int) ((unsigned int) ((unsigned short) var_17)))) & (((((/* implicit */unsigned long long int) var_15)) & (var_5))));
                                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) var_16))));
                                arr_21 [i_0] [i_1] [i_2] [i_3] [3U] = ((/* implicit */long long int) var_2);
                                var_26 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((var_1) != (((/* implicit */long long int) ((/* implicit */int) var_6))))))) <= (((var_12) & (var_12))))));
                            }
                            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) ^ (((/* implicit */int) ((((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_13)))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))))))));
                            var_28 = ((/* implicit */short) (!((!(((_Bool) var_17))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 1541789012U)))))));
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) var_16))))))));
}
