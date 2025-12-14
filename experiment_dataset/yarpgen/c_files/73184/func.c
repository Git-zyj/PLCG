/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73184
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
    var_10 = ((/* implicit */short) max((((/* implicit */unsigned int) ((unsigned char) var_7))), (62759586U)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */short) var_9);
                arr_5 [i_0] = ((/* implicit */unsigned char) var_3);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    arr_8 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0] [i_1]))));
                    arr_9 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((unsigned char) 15187025934199127362ULL)))));
                    arr_10 [i_0] [i_0] [5LL] [i_2] = ((/* implicit */unsigned long long int) (_Bool)1);
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 1; i_4 < 17; i_4 += 3) 
                        {
                            arr_17 [i_4] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_14 [i_4] [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1]))));
                            arr_18 [i_4] = ((((/* implicit */int) arr_14 [i_4] [i_4 + 1] [i_4] [i_4 - 1] [i_4 - 1])) <= (((/* implicit */int) arr_14 [13ULL] [i_4 + 1] [i_4] [i_4 + 1] [i_4 - 1])));
                            var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)32))))));
                            var_13 = ((/* implicit */short) var_2);
                        }
                        for (long long int i_5 = 3; i_5 < 17; i_5 += 3) 
                        {
                            var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((var_8) <= (20))))));
                            var_15 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62))) <= (3259718139510424253ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)-114)))) : (((4089404214U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-41)))))));
                            arr_22 [i_5] [i_3] [i_2] [i_1] [i_5] = ((/* implicit */_Bool) ((unsigned long long int) 3259718139510424253ULL));
                        }
                        var_16 = ((/* implicit */int) min((var_16), ((+(((/* implicit */int) (short)5419))))));
                    }
                    for (unsigned int i_6 = 2; i_6 < 16; i_6 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned short) (~(arr_2 [i_6 + 2])));
                        var_18 = ((/* implicit */unsigned int) (_Bool)0);
                    }
                    for (unsigned short i_7 = 2; i_7 < 17; i_7 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)239));
                        var_20 = ((_Bool) (!(((/* implicit */_Bool) var_8))));
                    }
                }
                var_21 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_25 [i_0]), (arr_4 [(unsigned char)16] [i_1]))))));
                arr_28 [i_0] [i_1] = var_5;
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_6);
    var_23 = ((/* implicit */unsigned long long int) ((1023ULL) <= (((/* implicit */unsigned long long int) 4294967295U))));
}
