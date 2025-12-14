/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78415
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
    var_11 = ((/* implicit */unsigned long long int) ((unsigned short) var_9));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_12 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_2)))) ? ((~(7950809875209505147LL))) : (((arr_3 [i_0] [i_1]) & (arr_3 [i_0] [i_1])))));
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 7902346425227609096ULL)) || (((/* implicit */_Bool) arr_1 [i_0] [17])))))) && ((!(((/* implicit */_Bool) arr_0 [i_1] [i_2])))))))));
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) >> (((((/* implicit */int) (unsigned char)39)) - (38))))))));
                    arr_8 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (~(-968405522)));
                }
            } 
        } 
    } 
    var_15 |= ((/* implicit */int) (_Bool)1);
}
