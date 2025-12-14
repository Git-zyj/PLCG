/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74719
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
    var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) (signed char)127)), (var_8)))))), (((unsigned long long int) var_19))));
    var_21 ^= ((/* implicit */_Bool) var_17);
    var_22 &= ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = (~(((unsigned long long int) ((unsigned int) var_14))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */short) var_12);
                            var_24 = ((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))) : (min((arr_10 [i_0] [i_0]), (((/* implicit */unsigned long long int) 2147483620))))));
                        }
                    } 
                } 
                arr_13 [i_0] [12LL] [i_0] = ((/* implicit */int) (_Bool)0);
                var_25 &= ((/* implicit */int) min((-3008485414440822175LL), (((/* implicit */long long int) min(((+(var_14))), (((/* implicit */unsigned int) arr_9 [i_0] [i_1] [(unsigned short)6] [8LL])))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) (+(min((((/* implicit */int) var_6)), ((-(((/* implicit */int) var_19))))))));
}
