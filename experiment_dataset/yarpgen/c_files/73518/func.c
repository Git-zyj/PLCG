/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73518
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
    var_15 = ((/* implicit */unsigned char) var_4);
    var_16 = ((/* implicit */unsigned int) var_12);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_6), (((/* implicit */signed char) ((arr_2 [i_1]) || (((/* implicit */_Bool) 5866048359461723071ULL))))))))) >= (((((/* implicit */_Bool) 12580695714247828545ULL)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15))) | (12580695714247828553ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)17))))))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_5 [i_0] [i_3] [i_3 + 1] [i_0]), (arr_5 [i_0] [i_1] [i_3 - 2] [i_3]))))) > (((unsigned int) (_Bool)1))));
                            arr_8 [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)24795)) || (((/* implicit */_Bool) (unsigned short)65521))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
                            {
                                var_19 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)109))));
                                arr_12 [i_4] [i_3 + 2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_1] [i_3 - 2]) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_3 - 2])) : (((/* implicit */int) (unsigned short)15))));
                                var_20 = ((/* implicit */unsigned int) ((var_7) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3 - 1] [i_4]))))))));
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_4] = ((/* implicit */signed char) arr_3 [i_3] [i_1]);
                            }
                            /* vectorizable */
                            for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
                            {
                                var_21 *= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)18))));
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)24811))) : (arr_1 [i_0]))))));
                                var_23 = ((/* implicit */short) var_0);
                                arr_17 [i_2] [i_1] [7U] [i_2] [i_2] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 4294967232U)) / (3690590422709955180LL)))) ? (((/* implicit */unsigned long long int) var_9)) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (12580695714247828541ULL) : (824280520023979215ULL)))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 17; i_6 += 2) 
                            {
                                var_24 -= ((/* implicit */short) 5866048359461723071ULL);
                                arr_21 [i_0] [i_0] [i_0] &= ((((/* implicit */_Bool) arr_19 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 3])) ? (arr_7 [i_0] [i_0] [i_2] [i_3 - 1] [i_3] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24811))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
