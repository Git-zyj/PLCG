/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57672
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) (~((-(1340188527U)))));
                var_15 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_1 [i_1] [i_1 - 1])))) ? (((/* implicit */int) ((((arr_6 [i_0] [i_0] [i_1]) || (((/* implicit */_Bool) arr_2 [i_1] [i_1])))) && (((/* implicit */_Bool) arr_4 [i_1] [i_1 + 1]))))) : (((/* implicit */int) ((short) ((_Bool) arr_0 [i_0]))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned short i_3 = 4; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] = ((/* implicit */unsigned long long int) ((((((((/* implicit */unsigned int) -962938906)) - (2712918364U))) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-9031))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_1] [i_2])) : (((/* implicit */int) (unsigned char)240)))))))))));
                                arr_14 [i_4] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) (~(2683693637779509372LL)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    for (unsigned short i_6 = 1; i_6 < 18; i_6 += 4) 
                    {
                        for (short i_7 = 3; i_7 < 18; i_7 += 2) 
                        {
                            {
                                arr_23 [i_0] [i_1] [i_5] [i_1] [i_6] [i_7] = ((/* implicit */unsigned char) min((((unsigned int) var_5)), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((signed char) var_3))), (min(((unsigned char)239), ((unsigned char)246))))))));
                                arr_24 [i_1] [i_1] [i_1] [i_7] [i_7] = ((/* implicit */unsigned short) arr_9 [i_1] [i_6] [i_5] [i_1] [i_1]);
                                arr_25 [i_0] [i_6] [i_5] [i_1] [i_0] [i_0] &= ((/* implicit */unsigned char) arr_11 [i_7] [i_6] [i_5] [i_5] [i_1] [i_0]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) -1LL))));
    var_17 = ((/* implicit */unsigned int) var_8);
}
