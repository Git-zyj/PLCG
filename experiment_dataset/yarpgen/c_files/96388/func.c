/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96388
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
    var_18 = ((/* implicit */unsigned short) var_12);
    var_19 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [i_0] = min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_4 [i_1])), (arr_0 [i_0])))) != (((((/* implicit */unsigned long long int) arr_0 [i_1])) + (arr_3 [i_0] [i_1])))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_2] [i_3 - 1] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_16) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) (+(var_11)))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_4]))) : (arr_11 [i_0] [i_0] [i_3] [i_4 + 1]))))))));
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_4] = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))), (min((((/* implicit */unsigned long long int) var_16)), (var_6))))), (max((((/* implicit */unsigned long long int) var_4)), (min((((/* implicit */unsigned long long int) arr_10 [i_0])), (arr_3 [i_0] [i_4 - 1])))))));
                                arr_14 [i_2] [i_4] [i_2] [i_4] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_16))) | (var_12)))) ? (4553997057136901292ULL) : (((/* implicit */unsigned long long int) arr_10 [i_3 - 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_12), (((/* implicit */long long int) var_7))))) ? (((/* implicit */int) (short)4917)) : (((/* implicit */int) max((var_3), (((/* implicit */short) arr_9 [i_0] [i_1] [i_1] [i_3 + 1]))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned int i_5 = 3; i_5 < 15; i_5 += 2) 
                {
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((2968654790U), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) arr_4 [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */int) (short)-8160)) % ((~(((/* implicit */int) (signed char)-79))))))))))));
                    arr_17 [i_0] [i_1] [i_1] [i_1 - 2] = ((/* implicit */unsigned short) (+(18446744073709551614ULL)));
                }
                for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        for (long long int i_8 = 1; i_8 < 15; i_8 += 1) 
                        {
                            {
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = max(((!(((/* implicit */_Bool) min((var_12), (arr_10 [i_0])))))), (((var_2) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -4488243106494656274LL)))))))));
                                var_21 = ((/* implicit */unsigned int) max(((-((-(2047LL))))), (((/* implicit */long long int) max((arr_15 [i_8 + 1] [i_1] [i_1 + 1] [i_7]), (arr_15 [i_8 - 1] [i_7] [i_1 + 1] [i_7]))))));
                                var_22 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((short) 4180931877715489829ULL))), (1326312505U)));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-12))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) var_12);
    var_25 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (min((min((((/* implicit */unsigned long long int) var_15)), (var_6))), (((/* implicit */unsigned long long int) (~(var_10))))))));
}
