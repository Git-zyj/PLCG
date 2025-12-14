/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73834
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
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (-((+(16715852272371642470ULL))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) 16715852272371642460ULL);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_19 += 555137686U;
                            arr_13 [i_1] = ((/* implicit */_Bool) (~(3739829609U)));
                            arr_14 [i_0] [i_1] [i_1] [(_Bool)1] [10LL] [i_3] = ((/* implicit */short) (-((+((~(-9216081873866947774LL)))))));
                            arr_15 [i_1] [i_1 - 2] [i_1 - 2] [i_1] = ((/* implicit */signed char) -1686709344);
                        }
                    } 
                } 
                var_20 ^= ((/* implicit */short) 1686709343);
            }
        } 
    } 
}
