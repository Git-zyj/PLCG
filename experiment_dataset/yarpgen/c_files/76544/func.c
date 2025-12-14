/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76544
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] [(unsigned short)12] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (3342554556808081256ULL)))) && (((/* implicit */_Bool) ((5238919267361010604ULL) * (((/* implicit */unsigned long long int) var_8)))))));
                arr_7 [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4205821650271343621ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16383))) : ((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22412)))))))) % (((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (2777222391468285337ULL) : (18237009857949016493ULL)))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) var_17);
}
