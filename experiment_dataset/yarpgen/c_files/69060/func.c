/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69060
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
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_9)))) ? (((((/* implicit */_Bool) -2082364580932943923LL)) ? (-282083219555465235LL) : (7065241372563210852LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))) && (((/* implicit */_Bool) -4107474535164066712LL)))))));
    var_16 = ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4107474535164066712LL)) ? (-7084160611939618336LL) : (-7546531522085209467LL)))) ? (((-4107474535164066711LL) / (4107474535164066698LL))) : (((var_6) / (var_1)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_1] = var_14;
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_17 = -4107474535164066711LL;
                                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3280781821264417665LL)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_3] [i_3 + 2])) || ((!(((/* implicit */_Bool) -4107474535164066713LL))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                                arr_17 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2] [i_4] = var_2;
                                arr_18 [i_1] [i_1] [i_2 + 1] [i_3] [i_4] [i_4] [i_2] = max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))))), (((max((-6832060281200595358LL), (1042786901393594494LL))) + (var_5))));
                            }
                        } 
                    } 
                    var_19 = (-(4478343579920294564LL));
                }
            } 
        } 
    } 
}
