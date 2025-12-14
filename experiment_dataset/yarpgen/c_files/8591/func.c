/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8591
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
    var_14 = ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_13)), (var_8)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned char) 14655822108889607982ULL);
                var_16 = ((/* implicit */short) var_6);
                var_17 = ((((/* implicit */_Bool) -1LL)) || (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) & (3790921964819943651ULL))) | (14655822108889607986ULL)))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 9223372036854775794LL)), (14655822108889607978ULL)))) ? ((~(14655822108889607969ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_1))))))) : ((-(14655822108889607982ULL))))))));
                            var_19 = ((/* implicit */unsigned long long int) ((long long int) 14655822108889607991ULL));
                            var_20 += ((((/* implicit */_Bool) 3790921964819943625ULL)) || (((/* implicit */_Bool) 3790921964819943622ULL)));
                        }
                    } 
                } 
            }
        } 
    } 
}
