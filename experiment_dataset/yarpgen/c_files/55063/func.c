/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55063
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
    var_20 = ((unsigned int) var_7);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */long long int) (unsigned char)29);
                arr_6 [i_1] = (((~(arr_0 [i_0]))) / ((~((~(((/* implicit */int) arr_4 [i_0])))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */long long int) min((1761965120U), (((/* implicit */unsigned int) (unsigned short)5965))));
                                arr_16 [i_3] [i_3] &= ((/* implicit */unsigned short) ((unsigned long long int) ((short) (~(((/* implicit */int) arr_11 [i_1 - 2]))))));
                                var_21 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max(((short)32767), ((short)32741)))) ? (((/* implicit */int) ((unsigned short) arr_11 [i_0]))) : ((+(((/* implicit */int) arr_3 [i_0] [i_0]))))))));
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (+((~(1809925902372665121LL))))))));
                            }
                        } 
                    } 
                } 
                var_23 += ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_7)), (((((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_3 [i_0] [i_1])))) ? (arr_12 [i_1] [i_1 - 1] [i_1 - 1] [8LL]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65535)))))))));
            }
        } 
    } 
    var_24 ^= ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned short) (_Bool)1)))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((long long int) var_3)));
}
