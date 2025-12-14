/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59774
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((long long int) 4782772268655781118ULL);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_11 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (_Bool)1))))))), (((unsigned long long int) ((((/* implicit */_Bool) 1781477949)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-15709)))))));
                            var_12 -= ((/* implicit */unsigned long long int) ((unsigned char) 1781477949));
                            var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) / (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (var_7))))) : (((unsigned int) var_5)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */int) (short)15708);
                            arr_20 [i_4] [2ULL] [i_0] [i_5] = ((/* implicit */int) var_9);
                            var_15 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((((/* implicit */_Bool) 4782772268655781125ULL)) ? (var_5) : (((/* implicit */unsigned long long int) 1)))) : (((/* implicit */unsigned long long int) (+(1006029605U))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((6899260700887058ULL), (((/* implicit */unsigned long long int) var_2))))))))) : ((~(var_5))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 -= ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        for (short i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            {
                arr_25 [i_6] [0LL] = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) min(((short)-32761), (((/* implicit */short) (_Bool)1))))), (6499823636337663168ULL)))));
                var_17 = (-(13663971805053770500ULL));
            }
        } 
    } 
}
