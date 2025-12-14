/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78597
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 11; i_2 += 4) 
                {
                    for (long long int i_3 = 2; i_3 < 8; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) ((_Bool) ((signed char) var_15)));
                            var_18 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_3 + 4] [i_2 - 1] [i_1 + 1])) <= (((/* implicit */int) arr_10 [i_2 - 2] [i_2 - 1] [i_2 - 2] [i_2 - 2] [i_2 + 1]))))), (min((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) >= (5434200020087334983ULL))))))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)-126))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 1; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) var_8);
                                var_21 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) ((arr_12 [i_0] [i_1] [(signed char)8] [i_6 - 1]) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_13 [i_0] [i_5] [i_1] [i_5])) : (((/* implicit */int) var_12))))))))));
                                var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((var_0) & (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) | (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_11 [i_0] [i_4] [(signed char)8] [i_6 - 1]) : (((/* implicit */long long int) 329718038U))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_12)))) : (min((0LL), (((/* implicit */long long int) (short)(-32767 - 1)))))));
                                arr_21 [i_6] [i_5] [i_4] [i_1] [i_0] &= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_7 [i_6 - 1] [i_6 + 1] [i_6])) ? (13012544053622216632ULL) : (var_15))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) (unsigned char)107);
    var_24 = ((/* implicit */short) var_4);
    var_25 |= ((/* implicit */unsigned char) var_8);
}
