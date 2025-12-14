/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6052
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
    var_11 = ((/* implicit */long long int) ((signed char) (short)1529));
    var_12 = ((/* implicit */unsigned int) (-(((long long int) var_8))));
    var_13 = 3376867126U;
    var_14 = ((/* implicit */long long int) min(((~(var_1))), (((/* implicit */unsigned int) ((min((9223372036854775807LL), (((/* implicit */long long int) 3376867139U)))) > (((long long int) 918100182U)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((((unsigned long long int) 1744773357605835077ULL)) ^ (0ULL)));
                                var_16 = ((unsigned int) (+(((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)109))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */short) min(((+(((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)-943)))))), (((/* implicit */int) ((unsigned char) ((0ULL) * (((/* implicit */unsigned long long int) 2545977387U))))))));
                    var_18 = ((/* implicit */_Bool) ((unsigned char) max((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))), (max((-8152718390650372001LL), (((/* implicit */long long int) 0U)))))));
                    var_19 = ((/* implicit */unsigned int) ((unsigned char) ((_Bool) max(((short)-22052), ((short)-3519)))));
                }
            } 
        } 
    } 
}
