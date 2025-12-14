/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62357
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
    for (unsigned short i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) max(((unsigned short)16599), (((/* implicit */unsigned short) arr_0 [i_0]))))) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_3)))))));
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned short)16602)))) - (((/* implicit */int) ((short) (unsigned short)38246))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_17 ^= ((/* implicit */long long int) min(((unsigned short)52919), (((/* implicit */unsigned short) (_Bool)1))));
                            var_18 = ((((arr_1 [i_1] [i_1]) == (((/* implicit */long long int) arr_9 [i_0 - 1] [i_0 - 1] [i_2] [i_3 + 1])))) || (((/* implicit */_Bool) min((arr_4 [i_1] [i_1] [i_2]), (max(((unsigned short)34478), (var_9)))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) ((unsigned short) arr_7 [(_Bool)1] [i_1] [i_1]))) ? (min((((/* implicit */long long int) arr_8 [i_1] [i_1] [i_1] [i_0])), (var_14))) : (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) & (((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [(unsigned short)1])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (arr_9 [i_0] [i_1] [(signed char)2] [i_1])))) ? (min((((/* implicit */long long int) (unsigned char)38)), (var_14))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 2] [i_0])))))));
            }
        } 
    } 
    var_20 |= ((/* implicit */unsigned short) var_12);
}
