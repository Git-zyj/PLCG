/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65969
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
    for (long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 *= ((/* implicit */_Bool) (~(1717882249634596060LL)));
                arr_6 [i_0] [(_Bool)1] [i_0] = min((((arr_3 [i_0 - 1] [i_0 - 1] [i_0 + 1]) > (arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 1]))), (var_12));
                arr_7 [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_1 [i_0])))))));
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 14; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0 + 1] [i_2] [i_0] [i_3] [i_4] [i_0 + 1] [i_4] = ((((/* implicit */_Bool) var_8)) || (((_Bool) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))))));
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((_Bool) 5808020923061731760LL)) ? (((((/* implicit */int) min((var_10), ((_Bool)1)))) ^ (((/* implicit */int) min((arr_2 [i_4]), (arr_8 [i_0] [12LL] [i_3] [i_4])))))) : (((/* implicit */int) (!(arr_10 [(_Bool)1] [i_1] [i_1])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((long long int) ((((_Bool) var_13)) ? (((/* implicit */int) ((var_18) && (var_17)))) : (((/* implicit */int) var_3))));
    var_22 = ((_Bool) min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (var_9))), ((_Bool)1)));
    var_23 = ((/* implicit */long long int) min((var_23), (((long long int) var_18))));
}
