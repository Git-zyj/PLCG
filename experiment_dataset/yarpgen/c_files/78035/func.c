/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78035
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
    var_20 = ((/* implicit */long long int) 2047);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
        {
            var_21 += ((/* implicit */_Bool) ((((min((var_9), (((/* implicit */int) var_0)))) + (2147483647))) >> (((((((/* implicit */_Bool) -8935718453107600916LL)) ? (-4419249862577656921LL) : (-7085514675482150463LL))) + (4419249862577656930LL)))));
            arr_6 [i_0] [i_1] = var_14;
            /* LoopSeq 1 */
            for (int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                var_22 = max((max((((1496878063) & (((/* implicit */int) (_Bool)0)))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [16] [i_2])))))), (((/* implicit */int) (_Bool)1)));
                var_23 = ((/* implicit */int) var_0);
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    var_24 = ((int) max((((/* implicit */long long int) (_Bool)1)), (7085514675482150458LL)));
                    arr_12 [i_2] = max((((/* implicit */long long int) (+((+(((/* implicit */int) (_Bool)1))))))), (((long long int) 7085514675482150463LL)));
                }
            }
        }
        for (long long int i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (long long int i_6 = 3; i_6 < 15; i_6 += 4) 
                {
                    for (int i_7 = 2; i_7 < 15; i_7 += 4) 
                    {
                        {
                            var_25 = var_5;
                            var_26 = -4442589288578979815LL;
                            var_27 = ((/* implicit */int) max((((/* implicit */long long int) arr_18 [i_5] [i_7 + 2] [(_Bool)1] [i_7] [i_7])), (max((-3626148555854409145LL), ((-9223372036854775807LL - 1LL))))));
                        }
                    } 
                } 
            } 
            var_28 = var_17;
            arr_21 [i_4] [12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((-976146272) + (2147483647))) >> (((/* implicit */int) var_1))))), (-7064331586361500833LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) -471165263)), (-4860386399430758536LL)))) ? (var_6) : (-1667042010)))) : (-7064331586361500833LL)));
            arr_22 [i_0] = max((((((arr_8 [i_0] [i_0] [i_4] [(_Bool)1]) >> (((/* implicit */int) (_Bool)1)))) >> (((((((/* implicit */_Bool) var_8)) ? (7085514675482150458LL) : (((/* implicit */long long int) -77823711)))) - (7085514675482150417LL))))), (((/* implicit */long long int) min(((_Bool)1), (((_Bool) (_Bool)1))))));
            var_29 = ((/* implicit */int) var_4);
        }
        for (long long int i_8 = 0; i_8 < 17; i_8 += 3) 
        {
            arr_25 [i_8] = ((/* implicit */_Bool) 1487239178);
            var_30 = ((/* implicit */long long int) (+(min(((~(((/* implicit */int) var_1)))), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_8])))));
        }
        var_31 -= max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_12))))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_7))))), (((var_17) * (((long long int) (_Bool)1)))));
    }
}
