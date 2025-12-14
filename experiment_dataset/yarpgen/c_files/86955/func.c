/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86955
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
    var_12 = ((int) var_2);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_13 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((4276541371758423066LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) 4265349637U))));
                    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (-((((_Bool)1) ? (var_0) : (((/* implicit */int) arr_6 [i_1] [i_2]))))))) || (((/* implicit */_Bool) ((var_6) ? (var_0) : (arr_3 [i_0 + 1] [i_0 + 2] [i_0 + 2]))))));
                    var_15 = ((/* implicit */signed char) var_3);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_3)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_13 [i_4] [i_4] [i_4])) : (var_5))))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 2; i_5 < 20; i_5 += 2) 
                {
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        {
                            arr_21 [i_6] [i_5] [i_3] [i_3] = ((/* implicit */long long int) (((~(((/* implicit */int) (!(arr_18 [i_3] [i_3] [i_3])))))) != (((/* implicit */int) var_10))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_5] [i_5 + 3] [i_5])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) min((0), (((/* implicit */int) var_6))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)226))) & (var_3))) : (((arr_9 [i_5]) & (((/* implicit */unsigned int) arr_12 [i_5] [i_4] [i_3])))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_17 [i_6] [i_4] [i_4])))))));
                            arr_22 [i_3] [i_5] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(var_8)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 66846720)) % (var_11)))))))) & (((unsigned long long int) (_Bool)0))));
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (signed char)85)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
