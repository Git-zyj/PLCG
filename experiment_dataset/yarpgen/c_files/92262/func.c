/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92262
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)16384)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33395))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)16384)) * (((/* implicit */int) (unsigned short)33395)))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) + (arr_2 [i_0] [i_0])))));
        var_18 = ((/* implicit */short) ((unsigned long long int) (unsigned short)49140));
    }
    for (unsigned int i_1 = 2; i_1 < 18; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) max((max((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1]))))), (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (430072911) : (var_3))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)175)))))));
        var_20 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (-(arr_3 [i_1] [i_1]))))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                for (short i_4 = 1; i_4 < 16; i_4 += 4) 
                {
                    {
                        var_21 -= ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) ((((/* implicit */_Bool) 3799282072837857941ULL)) && (((/* implicit */_Bool) (unsigned short)32140)))))))));
                        var_22 = ((/* implicit */unsigned int) -430072912);
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned int) -4862640984480651530LL);
    var_24 = (unsigned char)31;
    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) max((((((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) var_13))))) ? (((/* implicit */unsigned long long int) 2147483647)) : ((+(0ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) == (((((/* implicit */_Bool) 4028811358U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))))))));
}
