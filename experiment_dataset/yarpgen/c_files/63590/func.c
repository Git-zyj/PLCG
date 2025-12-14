/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63590
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
    var_12 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_13 = ((/* implicit */int) arr_1 [i_0]);
        var_14 -= ((/* implicit */short) min((((/* implicit */unsigned int) arr_1 [i_0])), ((((!(((/* implicit */_Bool) 3890396530U)))) ? (404570757U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 404570757U)) && (((/* implicit */_Bool) arr_1 [(unsigned char)2]))))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_8 [(unsigned char)5] [i_1] [i_2] [i_2 + 1] = ((unsigned int) ((unsigned short) arr_3 [i_2 + 1] [i_2 + 1]));
                    var_15 = ((/* implicit */unsigned short) 1570490627);
                    arr_9 [i_2] [i_2] [i_2 + 1] = ((/* implicit */unsigned char) (unsigned short)32768);
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) ((-593034393) & (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)-2623)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [(_Bool)1]))))))))));
    }
}
