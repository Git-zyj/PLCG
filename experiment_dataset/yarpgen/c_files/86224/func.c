/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86224
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
    var_13 = ((/* implicit */short) var_3);
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (min((((/* implicit */unsigned int) var_11)), (3888379973U))))))));
    var_15 = ((/* implicit */short) (~(((unsigned int) (!(((/* implicit */_Bool) (short)-18035)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) <= (((arr_2 [i_0 + 1] [i_0 + 2]) & (arr_2 [i_0 + 1] [i_0 - 2])))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_16 = var_8;
                    arr_8 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) (signed char)5);
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned short) arr_7 [i_0] [i_0]))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_5))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0 + 1]))))) : (((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))));
                    arr_9 [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((int) ((((/* implicit */int) arr_4 [i_0] [i_0])) < (((/* implicit */int) arr_0 [i_0]))))) >> (((max((arr_2 [i_0 + 1] [i_0 + 1]), (((arr_2 [i_2] [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) - (16341528097765060904ULL)))));
                }
            } 
        } 
    }
}
