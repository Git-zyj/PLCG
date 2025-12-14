/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58780
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
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 1; i_2 < 12; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [i_1] [i_1] &= ((/* implicit */int) 2920084828U);
                                var_14 = ((/* implicit */signed char) min((((/* implicit */int) var_11)), (arr_8 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_0] [i_3 + 1])));
                                arr_12 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) 11927007616359558794ULL);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned int) var_10);
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 4; i_6 < 11; i_6 += 1) 
                    {
                        for (signed char i_7 = 3; i_7 < 13; i_7 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) arr_18 [i_0] [i_0] [i_5] [i_6] [i_7]);
                                arr_20 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */unsigned short) arr_15 [i_0]);
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((short) min((((((/* implicit */_Bool) 6519736457349992828ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11927007616359558798ULL))), (((/* implicit */unsigned long long int) var_11))))))));
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_19 [i_0] [i_0])))) ? (max((arr_17 [i_0]), (((/* implicit */unsigned long long int) arr_4 [i_0])))) : (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((long long int) arr_10 [i_0] [i_5] [i_6] [i_7]))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)190))) % (14766013748956017877ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_5] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0] [i_1] [i_5])))))));
                                arr_21 [i_0] [i_6] [i_0] = ((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) -8759106218510211397LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)25))))), (((long long int) (short)-8813)))));
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_0] [i_5] = ((/* implicit */int) (~(((((/* implicit */_Bool) 13324219303124281183ULL)) ? (min((11927007616359558788ULL), (((/* implicit */unsigned long long int) 4294967287U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11927007616359558802ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65533)))))))));
                    var_19 = ((/* implicit */unsigned short) var_0);
                    arr_23 [i_0] [i_0] [i_0] [i_1] |= ((/* implicit */short) var_10);
                    var_20 = ((/* implicit */unsigned long long int) -5940944277772150221LL);
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    for (int i_9 = 3; i_9 < 10; i_9 += 2) 
                    {
                        {
                            arr_28 [i_1] [i_0] [i_1] [i_8] [i_9] &= ((/* implicit */int) var_0);
                            var_21 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_9]))) : (((((/* implicit */_Bool) arr_25 [i_0] [i_8] [i_9])) ? (arr_24 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)103))))))));
                            arr_29 [i_0] [i_0] [i_8] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */int) arr_3 [i_0 - 1] [i_0])), (((((/* implicit */int) arr_27 [i_0] [i_8] [i_0] [i_9])) - (((/* implicit */int) arr_15 [i_0])))))) : (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32768))) : (var_0)))) || (((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])) >= (((/* implicit */int) var_10)))))))));
                        }
                    } 
                } 
                arr_30 [i_0] [i_1] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((((arr_17 [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) - (16703249416171448784ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((var_1) != (arr_19 [i_0] [i_1])))))) : (var_8)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_10 = 0; i_10 < 15; i_10 += 3) 
    {
        for (unsigned short i_11 = 3; i_11 < 14; i_11 += 2) 
        {
            {
                var_22 = ((((/* implicit */_Bool) ((short) arr_34 [i_11 - 2] [i_11 - 3]))) && (((/* implicit */_Bool) max((arr_34 [i_11 - 1] [i_11 - 2]), (arr_34 [i_11 - 2] [i_11 + 1])))));
                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_10] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_10] [i_11])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_10] [i_11])))))) & (var_9)))));
                arr_35 [i_11] [i_10] [i_10] &= ((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_33 [i_10] [i_11]), (arr_33 [i_10] [i_11])))), (((((/* implicit */_Bool) arr_33 [i_10] [i_11 - 1])) ? (((/* implicit */int) arr_33 [i_10] [i_10])) : (((/* implicit */int) arr_33 [i_10] [i_10]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */int) var_0);
    var_25 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8796093022207ULL)) ? (((/* implicit */int) (unsigned char)190)) : (((/* implicit */int) (_Bool)1))));
    var_26 = ((/* implicit */unsigned char) var_9);
}
