/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99833
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) ((unsigned short) 9902542395588222953ULL))))), (((/* implicit */int) ((unsigned short) ((unsigned short) var_4)))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) var_1);
                var_20 *= ((/* implicit */unsigned short) ((((((/* implicit */int) var_15)) == (((/* implicit */int) var_5)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((long long int) var_3));
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            {
                arr_11 [i_2] [i_3] = ((/* implicit */signed char) ((short) max((arr_10 [i_2]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)23588))))))));
                arr_12 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18823))) : (3444906971375947962ULL)));
                var_22 = (unsigned short)0;
                var_23 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_3] [i_2])) << (((arr_10 [i_2]) - (17738786080938048316ULL))))))));
                var_24 = ((/* implicit */long long int) (signed char)-19);
            }
        } 
    } 
}
