/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78161
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 14613055395892400740ULL)))))))) ? (max((((((/* implicit */unsigned long long int) -621098886)) - (6765839947047654395ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -621098886)) - (var_2)))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) -285105402)) / (var_6))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 621098897)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_12))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)27))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) : (var_2)));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_13 [i_1] [3LL] [i_2] [i_2] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))) : (((/* implicit */int) (unsigned char)228))));
                            var_19 = ((/* implicit */int) ((((((/* implicit */int) arr_10 [i_2 - 2] [i_2 + 1] [i_2] [i_3 + 1] [i_3 - 1] [i_3])) != (((/* implicit */int) (short)-16510)))) ? (((((unsigned int) var_10)) & (((var_2) ^ (arr_11 [12LL] [i_1] [i_2] [i_3]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-1024)) ? (((/* implicit */int) arr_10 [i_3 - 1] [i_3 - 1] [(short)13] [10] [i_3] [i_2])) : (((/* implicit */int) (short)31744)))))));
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                            arr_14 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) > (((((/* implicit */_Bool) (short)24291)) ? (arr_0 [i_3 - 2]) : (arr_0 [i_0])))));
                        }
                    } 
                } 
                arr_15 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1442033679U)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned char)247))));
                var_21 = ((/* implicit */short) (_Bool)0);
            }
        } 
    } 
}
