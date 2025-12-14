/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58687
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_18 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */short) var_8)), (max((((/* implicit */short) arr_3 [i_0 + 3] [i_0 + 3] [i_0 + 3])), ((short)10278))))))));
                var_19 = ((/* implicit */unsigned short) max(((short)-10279), (((/* implicit */short) (_Bool)1))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_8 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_3 [i_1] [i_1] [i_0]);
                            var_20 = ((/* implicit */int) max((arr_4 [i_0] [i_0]), ((_Bool)1)));
                            arr_9 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 2] [i_0 + 1])) % (((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 2] [i_0 + 3])))) & ((+(((/* implicit */int) arr_3 [i_0 + 3] [i_0 + 2] [i_0 + 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) != ((~(var_7))))) ? (((/* implicit */int) ((_Bool) 21U))) : (((((((/* implicit */unsigned long long int) var_4)) != (var_0))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (unsigned char)255))))));
}
