/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5788
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
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) (unsigned char)128);
        var_16 -= ((/* implicit */int) (unsigned char)38);
        var_17 = ((/* implicit */unsigned int) min(((~((+(-6629943737236802527LL))))), (((/* implicit */long long int) (unsigned char)246))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_8 [i_1] [9U] = ((/* implicit */unsigned short) min(((+(min((((/* implicit */unsigned long long int) -8950647351627012418LL)), (5002574253299148100ULL))))), (((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) (unsigned char)15)), (1620985516530341039LL))), (((/* implicit */long long int) (+(((/* implicit */int) (short)-11056))))))))));
        /* LoopNest 2 */
        for (long long int i_2 = 2; i_2 < 22; i_2 += 4) 
        {
            for (unsigned char i_3 = 1; i_3 < 19; i_3 += 1) 
            {
                {
                    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (!(((/* implicit */_Bool) max(((~(9223372036854775807LL))), (((/* implicit */long long int) 5U))))))))));
                    arr_17 [14U] [i_3] = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)9))))), ((-(2LL))))), (((/* implicit */long long int) min(((~(((/* implicit */int) (unsigned char)112)))), (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))));
                }
            } 
        } 
        arr_18 [i_1] |= (-(-2561929421223590083LL));
    }
    var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) max(((unsigned short)31565), (((/* implicit */unsigned short) (short)-25494)))))));
}
