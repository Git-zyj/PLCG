/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76082
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
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (_Bool)1))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    var_20 *= var_17;
                    var_21 ^= ((/* implicit */unsigned short) -2670089925655771247LL);
                    var_22 = ((/* implicit */unsigned short) ((int) 18446744073709551615ULL));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 3; i_3 < 21; i_3 += 2) 
    {
        for (signed char i_4 = 2; i_4 < 21; i_4 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 483892377U)) ? (((/* implicit */int) (unsigned short)35155)) : (((int) (signed char)-1))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((signed char) var_15))), (var_4))))) : (max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)252))))), (var_15)))));
                            arr_17 [i_6] = ((/* implicit */_Bool) var_2);
                            arr_18 [i_3 - 1] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? ((+(arr_13 [i_3 - 1] [i_3] [i_3] [i_3]))) : (((((var_13) ? (((/* implicit */int) arr_15 [i_3] [i_3] [i_3 - 1] [i_3 - 2] [i_3] [i_3])) : (((/* implicit */int) arr_2 [i_5] [i_4 - 1])))) & (((/* implicit */int) var_10))))));
                            var_24 = ((/* implicit */unsigned int) var_8);
                            var_25 -= ((/* implicit */signed char) max((((/* implicit */int) max((var_0), (((/* implicit */unsigned char) arr_1 [i_3 - 2]))))), (((arr_3 [i_3 - 1]) ? (var_6) : (((/* implicit */int) arr_3 [i_3 + 1]))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)127)))) && (((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) arr_5 [i_4 - 1] [i_4 - 2])))))));
            }
        } 
    } 
}
