/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81579
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
    var_12 = ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((short) arr_4 [i_0 + 1]));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (~(((arr_2 [i_0 + 1] [i_1 - 3]) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 3] [i_1 + 1]))))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1 - 1] [i_2] [i_2] [i_4] [(short)8] = ((/* implicit */unsigned short) (((~(((/* implicit */int) (signed char)106)))) & (((/* implicit */int) (short)0))));
                                var_15 = (i_1 % 2 == 0) ? (((((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_1])) || (((/* implicit */_Bool) arr_8 [i_0] [i_1 - 3] [i_2] [i_0] [i_1 - 3]))))) * (((/* implicit */int) ((arr_2 [i_0] [i_0]) && (((/* implicit */_Bool) (short)16446))))))) >> (((max((var_3), (((/* implicit */long long int) arr_5 [i_1] [i_1 - 1] [i_1])))) - (2664859277LL))))) : (((((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_1])) || (((/* implicit */_Bool) arr_8 [i_0] [i_1 - 3] [i_2] [i_0] [i_1 - 3]))))) * (((/* implicit */int) ((arr_2 [i_0] [i_0]) && (((/* implicit */_Bool) (short)16446))))))) >> (((((max((var_3), (((/* implicit */long long int) arr_5 [i_1] [i_1 - 1] [i_1])))) - (2664859277LL))) + (1140296985LL)))));
                                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) max((((/* implicit */unsigned short) ((((/* implicit */int) (short)-1)) != (((((/* implicit */int) (short)16446)) - (((/* implicit */int) (short)27376))))))), (arr_8 [(unsigned short)5] [i_3] [i_2] [(signed char)12] [(short)12]))))));
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_3]))))) ? ((~(((/* implicit */int) arr_11 [i_3])))) : (((/* implicit */int) max((arr_11 [i_0]), (((/* implicit */unsigned short) (short)16384)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_18 = ((min((((/* implicit */unsigned long long int) ((short) (_Bool)1))), (((var_1) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) << (((((/* implicit */int) var_2)) + (73)))))));
    var_19 += ((/* implicit */unsigned long long int) ((long long int) ((long long int) var_9)));
}
