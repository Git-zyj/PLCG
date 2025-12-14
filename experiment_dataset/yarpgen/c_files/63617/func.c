/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63617
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_17 = 36028796951855104ULL;
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 36028796951855119ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21356))) : (18410715276757696513ULL)));
                            arr_10 [i_1] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [13LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2] [i_2] [i_2]))) : (36028796951855119ULL))));
                            var_19 = ((/* implicit */unsigned char) 36028796951855142ULL);
                        }
                    } 
                } 
                var_20 = arr_7 [i_0] [i_0] [i_0] [i_1];
                var_21 = ((/* implicit */signed char) min((18410715276757696524ULL), (36028796951855091ULL)));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18410715276757696514ULL)) ? (18410715276757696478ULL) : (36028796951855153ULL)));
}
