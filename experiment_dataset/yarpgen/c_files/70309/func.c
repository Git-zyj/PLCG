/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70309
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
    var_17 = var_0;
    var_18 = min(((+((+(((/* implicit */int) var_16)))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) > (((/* implicit */int) ((((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) (_Bool)1))))) || (((/* implicit */_Bool) min((arr_1 [i_1]), (((/* implicit */long long int) (unsigned short)8064))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (signed char i_3 = 3; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0 + 1] [i_0] [i_0] [i_0 + 1] = (-(((9223367638808264704LL) >> (((3883103196583763688LL) - (3883103196583763669LL))))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)4))))) || (((/* implicit */_Bool) min(((-(1864114367))), ((+(((/* implicit */int) var_12))))))));
                            arr_14 [14LL] = ((/* implicit */int) min((((/* implicit */unsigned int) min((min(((unsigned short)65534), (((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0 + 3] [11LL] [i_0] [i_0])))), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) <= (598825128U))))))), ((+(min((((/* implicit */unsigned int) var_7)), (arr_5 [i_0] [i_2] [i_3])))))));
                            arr_15 [i_3] [i_2] [i_0] [i_0] [i_1 + 3] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_9 [i_3] [i_1] [i_2] [i_0 - 1]), (((/* implicit */unsigned long long int) var_16)))))));
                            var_20 = ((/* implicit */unsigned int) max((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) (-((~(arr_5 [i_0] [i_1] [i_2]))))))));
                        }
                    } 
                } 
                arr_16 [i_0 + 1] = ((/* implicit */_Bool) (+(max((var_0), (var_14)))));
            }
        } 
    } 
}
