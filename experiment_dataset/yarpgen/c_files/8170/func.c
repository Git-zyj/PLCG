/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8170
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
    var_12 -= ((/* implicit */int) var_10);
    var_13 &= ((/* implicit */signed char) ((unsigned int) (short)26369));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)252)))))));
                    var_15 = ((/* implicit */long long int) ((unsigned short) (_Bool)1));
                    var_16 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)46)) ? (((long long int) (unsigned char)255)) : (((/* implicit */long long int) var_5))))));
                }
            } 
        } 
    } 
    var_17 += ((/* implicit */long long int) (short)-12299);
    var_18 = ((/* implicit */short) max((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (var_5))) | (((/* implicit */int) min(((short)-27420), (var_1)))))), (((/* implicit */int) (unsigned short)50251))));
}
