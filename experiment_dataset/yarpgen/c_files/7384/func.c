/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7384
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
    var_15 = ((/* implicit */unsigned int) ((1920315652) + (((/* implicit */int) (unsigned char)39))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) min((var_12), (var_5))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)9229)) - (9212)))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)217))) ^ (4498974546606828655ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_3)))) : (1704292644724170908LL)))));
                    var_16 = arr_1 [i_0];
                    var_17 -= ((/* implicit */short) ((552641347U) << (((min((((/* implicit */long long int) arr_1 [i_0])), (arr_2 [i_2 - 1] [i_2 - 1]))) + (1619764337850477770LL)))));
                    var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((1920315652) != (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(unsigned short)3] [i_2 - 1] [i_2 - 1] [i_2 - 1])))))) : (var_4)));
                }
            } 
        } 
    } 
}
