/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78811
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
    var_19 = ((/* implicit */unsigned char) var_14);
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (+(max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */short) var_16);
                var_22 = ((/* implicit */signed char) ((((/* implicit */int) (short)2491)) & ((-(((/* implicit */int) (unsigned char)15))))));
                arr_8 [(_Bool)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0 + 4]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)92))) : (var_8)));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    var_23 = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) 2147483631)))));
                    var_24 = ((/* implicit */signed char) (~(((long long int) ((((/* implicit */int) var_3)) & (2147483647))))));
                    var_25 = ((/* implicit */_Bool) 2147483647);
                }
                for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 4; i_4 < 9; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) var_14);
                                var_27 = ((/* implicit */unsigned char) var_14);
                                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)17)) || (((/* implicit */_Bool) var_10))))), (var_5)))) >= (((/* implicit */int) var_11)))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned int) max((var_11), (arr_4 [i_1 - 1] [i_0 - 2])));
                }
                /* vectorizable */
                for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6] [i_0 + 1]))) * (var_14)));
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_17 [i_6] [i_6] [i_0] [i_0] [i_0]) : (((/* implicit */int) var_12))))) || (((/* implicit */_Bool) var_5))));
                }
            }
        } 
    } 
    var_32 ^= var_1;
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    for (unsigned short i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */signed char) ((((/* implicit */int) max(((short)0), (arr_20 [i_7] [i_7] [6] [i_10] [6] [i_7])))) << ((((+(((/* implicit */int) arr_20 [i_7] [i_8] [i_7] [i_7] [i_11] [i_7])))) - (9636)))));
                                var_34 &= var_13;
                            }
                        } 
                    } 
                } 
                var_35 = ((/* implicit */unsigned short) var_8);
            }
        } 
    } 
}
