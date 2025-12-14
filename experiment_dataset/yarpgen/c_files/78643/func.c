/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78643
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -1242050493413351967LL)) == (var_5))))) % (-4LL)));
        var_17 = ((/* implicit */short) var_0);
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_8 [i_0 + 3] [i_2] [i_2 - 1]))));
                            var_19 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0]))) : (arr_14 [i_0 + 3] [i_0] [i_1] [i_2 + 3] [i_1]))));
                        }
                        for (int i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((/* implicit */_Bool) var_15)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(short)0])))))));
                            var_21 = ((/* implicit */long long int) arr_10 [13U]);
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0 + 3] [i_0] [i_2] [i_0 + 3] [i_3] [i_5]))) == (arr_7 [i_0]))))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            var_23 |= ((/* implicit */unsigned int) arr_6 [i_1] [(short)12]);
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) arr_2 [0]))));
                        }
                        for (unsigned int i_7 = 2; i_7 < 17; i_7 += 2) 
                        {
                            var_25 = ((/* implicit */long long int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_5 [i_0 - 1] [i_3]))))));
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_20 [i_3] [i_2 - 1] [i_0] [i_0] [15ULL])) <= ((+(arr_12 [i_0] [i_2] [i_3] [i_7])))));
                        }
                        var_28 = ((/* implicit */unsigned int) ((short) 1242050493413351966LL));
                        var_29 *= ((/* implicit */_Bool) ((int) var_15));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 2) 
                        {
                            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) var_15)) : (var_7)))) ? (2462467857346542193LL) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_2 - 2] [i_8] [i_0] [i_8] [(unsigned char)14]))))))));
                            arr_29 [i_0 + 3] [i_1] [i_0] [i_3] = ((/* implicit */unsigned short) arr_15 [i_2] [i_0] [i_0 - 2] [i_0] [i_0]);
                            arr_30 [i_8] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((16) & (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0 - 1] [i_0 + 3] [i_0 - 1] [i_0 + 2]))) : (((((/* implicit */_Bool) var_2)) ? (-1763168652836830943LL) : (((/* implicit */long long int) arr_12 [i_1] [i_2] [(unsigned char)12] [i_8]))))));
                            var_31 += ((/* implicit */unsigned short) (_Bool)1);
                        }
                        for (unsigned short i_9 = 1; i_9 < 16; i_9 += 1) 
                        {
                            arr_33 [16] [i_3] [i_2] [i_1] [16] |= ((/* implicit */unsigned int) ((arr_32 [i_0 + 3] [i_0] [i_0] [i_0] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_9 [12LL])))));
                            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) arr_23 [i_1] [i_1] [i_1]))));
                            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17139))) + (arr_11 [i_9 + 2] [i_3] [10ULL] [i_1] [i_0])))))));
                            var_34 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) var_9)))));
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_10 = 1; i_10 < 13; i_10 += 1) 
    {
        var_35 = ((/* implicit */long long int) var_3);
        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_10] [i_10] [(unsigned short)7] [i_10 - 1] [i_10] [i_10] [i_10]))))) >= ((~(((/* implicit */int) var_6))))));
        var_37 = ((/* implicit */unsigned int) var_4);
    }
    var_38 = ((/* implicit */long long int) (~(var_9)));
    var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((-1926205105240683372LL), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) var_11))))) ? (min((((long long int) var_9)), (((/* implicit */long long int) (-(2681326243U)))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) var_15)))))) && (((/* implicit */_Bool) var_10))));
}
