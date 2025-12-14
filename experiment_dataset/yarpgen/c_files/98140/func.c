/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98140
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
    var_20 = ((/* implicit */unsigned char) (_Bool)0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] = (+(min((var_18), (((/* implicit */unsigned int) (_Bool)1)))));
                arr_7 [i_0 + 1] [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned int) ((unsigned short) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1])));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) var_11);
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 699735274931988997LL)))))) != ((-(max((205334007), (((/* implicit */int) (_Bool)1))))))));
}
