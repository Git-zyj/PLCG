/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68722
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
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) max((-544876829), (((/* implicit */int) (!(((/* implicit */_Bool) 544876828)))))))), (max((((/* implicit */unsigned int) var_3)), ((~(4128768U))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0 + 1] [i_1] [i_1] [(signed char)16] [i_1] [i_1] [i_1] = ((/* implicit */short) ((long long int) (unsigned short)36191));
                                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((((/* implicit */int) var_3)) + (2147483647))) >> (((arr_0 [(_Bool)1]) - (4528808999104413271LL)))))), (((4290838528U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-32754)))))))) ? (((((/* implicit */int) (signed char)-74)) % (544876828))) : (((/* implicit */int) max((((/* implicit */short) arr_4 [i_0 - 1])), ((short)(-32767 - 1)))))));
                            }
                        } 
                    } 
                    arr_14 [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0 + 1]))));
                    arr_15 [i_0] [i_1] = ((/* implicit */unsigned int) ((_Bool) (((~(((/* implicit */int) (_Bool)0)))) | (-174018402))));
                }
            } 
        } 
    } 
    var_15 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-100))));
    var_16 = ((/* implicit */signed char) max((var_12), (((var_1) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (var_10)))))))));
}
