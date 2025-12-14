/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96214
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
    var_13 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] [5LL] [5LL] = ((/* implicit */signed char) max(((unsigned short)44218), ((unsigned short)21336)));
                arr_7 [i_0] = ((/* implicit */unsigned int) ((_Bool) 4184674276267337197ULL));
            }
        } 
    } 
}
