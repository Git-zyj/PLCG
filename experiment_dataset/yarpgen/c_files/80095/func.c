/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80095
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
    for (long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) arr_1 [i_0 - 2])))));
                var_20 = ((/* implicit */short) max((((/* implicit */long long int) arr_3 [i_0 + 1] [i_1 - 2])), ((+(var_9)))));
                arr_5 [i_0] [(unsigned char)21] [(unsigned char)21] &= ((/* implicit */unsigned char) ((((min((max((arr_3 [(short)1] [i_1 + 2]), (var_5))), (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65533)))))) + (2147483647))) << (((((/* implicit */int) (short)13704)) - (13704)))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    arr_8 [i_0] [i_0 + 1] [16] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1]))) * (arr_2 [i_0] [i_0 - 1] [i_0]))) : (((/* implicit */unsigned int) (-(var_18))))))));
                    var_21 = ((/* implicit */int) arr_6 [i_1] [i_1]);
                    var_22 -= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)243)), (var_6)))) ? ((-(((/* implicit */int) arr_7 [i_2 - 1] [i_2 + 2] [i_2 - 2])))) : (((/* implicit */int) ((short) arr_7 [i_2] [i_2] [i_2 - 2])))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */int) var_11);
                                var_24 |= ((/* implicit */unsigned short) ((unsigned int) max(((short)-32754), ((short)16591))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */int) var_19);
                }
                for (long long int i_5 = 3; i_5 < 21; i_5 += 4) 
                {
                    arr_19 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (short)-8564)) == (max((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) (_Bool)1))))))));
                    var_26 = ((/* implicit */unsigned short) (+(((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)228)) * (((/* implicit */int) (signed char)18))))) / (((var_9) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 2; i_6 < 20; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 18; i_7 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) min((((((/* implicit */_Bool) max(((short)-19123), (((/* implicit */short) (_Bool)0))))) ? (min((var_8), (((/* implicit */long long int) arr_0 [i_6])))) : (((/* implicit */long long int) var_18)))), (((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) (unsigned char)76)))))))))));
                                arr_24 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : ((-(((/* implicit */int) var_2)))))) >= (((/* implicit */int) (unsigned short)53915))));
                            }
                        } 
                    } 
                    arr_25 [i_5] [i_1] = ((/* implicit */_Bool) max((max((var_9), (((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_0] [i_1] [i_1] [(unsigned short)4] [i_5])) - (((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) ((short) max((1690208871), (((/* implicit */int) (_Bool)1))))))));
                }
            }
        } 
    } 
    var_28 &= ((/* implicit */short) ((((/* implicit */_Bool) ((max((15), (((/* implicit */int) (_Bool)1)))) + (var_18)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (unsigned short)53912)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_17)))) : (((/* implicit */int) ((var_18) >= (var_5))))))));
    /* LoopNest 2 */
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        for (unsigned short i_9 = 2; i_9 < 20; i_9 += 4) 
        {
            {
                arr_32 [i_9 + 2] [i_9 + 4] = ((max((((((/* implicit */_Bool) (short)8953)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_29 [(signed char)14] [(signed char)7] [i_9])))), (max((arr_26 [(short)16]), (((/* implicit */int) (unsigned short)9865)))))) ^ (((/* implicit */int) arr_31 [i_8] [i_9])));
                var_29 += ((/* implicit */int) ((((((/* implicit */_Bool) arr_31 [i_9 + 2] [i_9 + 1])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) + (((/* implicit */long long int) (-(((/* implicit */int) var_0)))))));
                var_30 -= ((/* implicit */_Bool) ((int) (unsigned short)9865));
            }
        } 
    } 
}
