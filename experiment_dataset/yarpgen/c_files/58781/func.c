/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58781
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_16 &= ((/* implicit */long long int) 2990157877434263501ULL);
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (26ULL) : (26ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)55)) == (((/* implicit */int) (unsigned char)35))))))));
    }
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(var_11)))), (((var_12) + (((/* implicit */long long int) var_13))))))) ? (((((/* implicit */_Bool) (unsigned char)43)) ? (26ULL) : (((/* implicit */unsigned long long int) 4961457261565756294LL)))) : (((/* implicit */unsigned long long int) 7244067142640514771LL))));
    var_18 = ((/* implicit */unsigned short) (unsigned char)168);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_1 = 4; i_1 < 8; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) ((((18446744073709551615ULL) / (var_8))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -6494093400299145103LL))))));
        arr_6 [i_1] = (((!(((/* implicit */_Bool) (unsigned short)0)))) ? ((+(((/* implicit */int) (unsigned char)88)))) : (((var_0) + (((/* implicit */int) (unsigned char)72)))));
    }
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned long long int) ((var_6) >= (max((((/* implicit */unsigned long long int) -6028752833269071318LL)), (max((((/* implicit */unsigned long long int) var_12)), (var_6)))))));
        arr_10 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */unsigned long long int) var_11)) : (((0ULL) + (((/* implicit */unsigned long long int) max((arr_1 [i_2]), (((/* implicit */long long int) 1742880290)))))))));
    }
    var_19 = ((/* implicit */unsigned long long int) var_1);
}
