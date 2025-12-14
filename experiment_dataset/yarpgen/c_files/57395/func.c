/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57395
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) -5357496320292467427LL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)0))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_12 *= ((/* implicit */short) ((((arr_0 [i_1] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [7LL] [i_0])))) * (((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) arr_0 [i_0] [i_1]))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) ((((0ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) ? (((unsigned long long int) arr_6 [i_2] [i_2] [i_3 + 2])) : (((/* implicit */unsigned long long int) arr_6 [i_4] [i_2] [i_3 - 1]))));
                                arr_14 [i_2] = ((/* implicit */signed char) var_1);
                                var_14 = ((/* implicit */unsigned int) arr_4 [i_3 + 2] [i_2 - 1]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    for (unsigned char i_6 = 1; i_6 < 11; i_6 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) arr_20 [i_0]))));
                            arr_21 [i_0] [i_1] [i_5] [i_6 + 4] [i_0] = ((/* implicit */unsigned int) arr_18 [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
}
