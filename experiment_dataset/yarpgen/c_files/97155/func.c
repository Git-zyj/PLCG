/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97155
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
    var_10 = ((/* implicit */long long int) min(((~(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)167)), ((unsigned short)1566)))))), (((/* implicit */int) (unsigned short)35776))));
    var_11 = ((/* implicit */unsigned short) min((15603509900042576737ULL), (((/* implicit */unsigned long long int) -4053151354018319024LL))));
    var_12 = ((/* implicit */unsigned char) min(((unsigned short)29760), (((/* implicit */unsigned short) (short)27705))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27716)) ? (8097850046647699354ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1])))));
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) arr_0 [i_0] [i_1]);
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_19 [i_4] [12LL] [i_1] [i_1] [(unsigned short)11] [(unsigned short)11] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) min(((unsigned short)35774), (((/* implicit */unsigned short) (short)-13401))))) ? (((/* implicit */int) min((arr_6 [i_3] [i_4]), ((short)16171)))) : (((/* implicit */int) arr_9 [i_2] [i_1] [i_2] [1ULL]))))));
                                arr_20 [i_0] [(unsigned char)8] [i_2] [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) arr_11 [i_0] [i_2] [i_2] [i_4])), (-792062758854039687LL))), (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_4])))))));
                                arr_21 [i_0] [(unsigned short)10] [i_0] [i_1] = ((/* implicit */unsigned short) min(((-(0ULL))), (((/* implicit */unsigned long long int) min(((unsigned short)35776), (((/* implicit */unsigned short) (short)-16171)))))));
                                arr_22 [i_0] [i_1] [i_4] [i_3] = ((/* implicit */signed char) min((max((((/* implicit */long long int) (short)-27691)), (6266574719826640917LL))), (((/* implicit */long long int) max((((/* implicit */int) arr_2 [i_0])), (arr_3 [i_4] [i_2]))))));
                                arr_23 [i_1] [i_1] [i_1] = (((!((!(((/* implicit */_Bool) arr_18 [i_4] [i_3] [i_2] [i_1] [i_0])))))) ? (((/* implicit */int) max((arr_18 [i_0] [i_1] [i_2] [(short)3] [i_4]), (arr_18 [i_4] [i_0] [i_0] [i_3] [i_4])))) : (((/* implicit */int) (short)-16186)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        for (unsigned short i_6 = 1; i_6 < 12; i_6 += 4) 
        {
            {
                arr_29 [i_6] [i_6] [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_6] [i_5]))) == (arr_26 [i_5] [i_5] [i_6 - 1])));
                arr_30 [i_6] = ((/* implicit */unsigned short) max((arr_26 [i_5] [i_6 + 1] [i_6 - 1]), (arr_26 [i_6] [i_6 + 1] [i_6 - 1])));
            }
        } 
    } 
}
