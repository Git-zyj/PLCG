/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68338
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
    var_13 = ((/* implicit */short) min((((/* implicit */unsigned int) min(((unsigned short)65529), (((/* implicit */unsigned short) (short)32736))))), (980057039U)));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)181)) ? (-3828029933857783636LL) : (((/* implicit */long long int) 524280))))) ? ((~(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) (unsigned char)198)))), ((~((-(((/* implicit */int) arr_0 [i_0]))))))));
        var_14 = ((/* implicit */short) (_Bool)1);
    }
}
