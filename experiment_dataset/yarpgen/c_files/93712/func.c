/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93712
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_20 &= ((/* implicit */short) (-(((/* implicit */int) (unsigned short)19066))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_6 [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                    var_21 -= ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) min((max(((unsigned short)42725), (((/* implicit */unsigned short) (_Bool)1)))), ((unsigned short)5025))))));
                }
                var_22 &= (unsigned short)14336;
                arr_7 [i_0] = ((/* implicit */_Bool) (~((-(((/* implicit */int) (signed char)122))))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) (_Bool)1);
}
