/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69292
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((unsigned short) (_Bool)1));
        arr_4 [i_0] = ((/* implicit */_Bool) ((unsigned short) (unsigned short)13200));
        var_11 = ((_Bool) max((((unsigned short) (_Bool)0)), (((unsigned short) arr_1 [i_0] [(unsigned short)5]))));
        arr_5 [i_0] [i_0] = ((unsigned short) (((_Bool)1) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((/* implicit */int) max(((_Bool)0), ((_Bool)1))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 1; i_1 < 17; i_1 += 1) 
    {
        for (unsigned short i_2 = 2; i_2 < 18; i_2 += 4) 
        {
            {
                var_12 = ((/* implicit */_Bool) arr_1 [i_1] [i_1]);
                var_13 &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) >> (((/* implicit */int) min(((_Bool)1), ((_Bool)0))))))));
                var_14 = ((/* implicit */_Bool) (+(min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) max((((/* implicit */int) (!(min(((_Bool)1), ((_Bool)1)))))), (min(((-(((/* implicit */int) var_7)))), (((((/* implicit */_Bool) (unsigned short)42343)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))))));
}
