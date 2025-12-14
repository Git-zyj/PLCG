/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96285
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
    var_10 = min((((int) 2027958783U)), ((+(((/* implicit */int) ((((/* implicit */int) (unsigned short)26601)) >= (((/* implicit */int) (short)-29908))))))));
    var_11 = ((/* implicit */int) var_1);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_12 *= ((/* implicit */unsigned char) (+(1499563639U)));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */int) arr_7 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_13 ^= ((/* implicit */int) ((unsigned short) (+((~(var_4))))));
                                var_14 = ((/* implicit */unsigned char) min((1728203804966531502ULL), (((/* implicit */unsigned long long int) (signed char)20))));
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)51462)) ? (-7825927245556527075LL) : (((/* implicit */long long int) 1717261857))))))) ? (((/* implicit */int) ((signed char) (+(4148921666U))))) : (((/* implicit */int) max((((/* implicit */short) (signed char)10)), (arr_5 [i_1] [i_2])))))))));
                                var_16 += ((/* implicit */unsigned long long int) max((arr_12 [i_0] [(signed char)4] [(unsigned short)10]), (((((/* implicit */int) arr_0 [i_0] [i_1])) - (((/* implicit */int) arr_7 [(signed char)0]))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_0] [i_0] = arr_14 [i_0] [i_0] [i_2];
                }
            } 
        } 
    } 
}
