/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95519
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
    var_13 = ((/* implicit */int) (unsigned char)56);
    var_14 = ((/* implicit */int) ((unsigned short) (unsigned char)80));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_15 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 5572212523008985120LL))))) & (((((/* implicit */int) arr_2 [i_0] [21U])) * (((/* implicit */int) (unsigned short)0))))))) : (var_6)));
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) 5572212523008985120LL))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_17 = (-(((/* implicit */int) (short)-4096)));
        var_18 *= ((/* implicit */_Bool) (unsigned char)70);
        var_19 *= ((/* implicit */signed char) (-(((int) (unsigned char)56))));
    }
}
