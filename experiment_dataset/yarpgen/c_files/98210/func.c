/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98210
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((((_Bool) -1559283624108619441LL)) ? (((/* implicit */int) min((var_6), (((/* implicit */short) var_10))))) : (((((/* implicit */_Bool) 2419792024U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((_Bool) var_3))) : (((/* implicit */int) ((unsigned short) (_Bool)1)))))));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((((long long int) (short)-19278)), (((/* implicit */long long int) ((((/* implicit */_Bool) 684860732U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (178358388U))))))) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)25112)), (var_14)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)75)), (-4193569861226059049LL)))) : (var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */_Bool) (short)18936);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_20 ^= ((/* implicit */_Bool) ((short) (short)8334));
                            var_21 = (_Bool)1;
                            arr_10 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) max((9063988033110097225LL), (((/* implicit */long long int) -2037025149))))) ? (-9063988033110097226LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)42))))));
                            arr_11 [i_0] [i_1] [(unsigned short)6] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 13536842033805790186ULL)) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (var_1)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-17687))) : (var_3))) : (((((/* implicit */_Bool) var_5)) ? (6137698109575334120LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))) : (((/* implicit */long long int) ((int) ((unsigned char) 5001208788325008550LL))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
