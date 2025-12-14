/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7342
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (-(1640096786)));
        var_12 = ((/* implicit */unsigned long long int) 1148098094U);
        var_13 = ((/* implicit */unsigned long long int) min((3146869221U), (3146869201U)));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) 1148098094U)) < (350137070029474698ULL)));
        var_15 += min((((((arr_3 [8U]) > (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(_Bool)1]))) : (1148098077U))), (((/* implicit */unsigned int) (unsigned short)55823)));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            var_16 = ((/* implicit */int) (((_Bool)1) ? (((((/* implicit */_Bool) 1148098095U)) ? (1148098094U) : (((/* implicit */unsigned int) arr_1 [i_2])))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_3])))))));
            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) arr_8 [i_2]))));
            var_18 = ((/* implicit */unsigned char) (((_Bool)0) ? (((((/* implicit */int) (unsigned char)3)) + (((/* implicit */int) arr_8 [i_2])))) : (arr_6 [i_3 + 1] [i_3 + 1])));
        }
        var_19 = ((/* implicit */unsigned long long int) var_11);
    }
    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                for (int i_7 = 0; i_7 < 19; i_7 += 4) 
                {
                    for (int i_8 = 1; i_8 < 18; i_8 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) (+(min((((((/* implicit */int) (unsigned short)62691)) - (-18))), (((/* implicit */int) arr_12 [i_6]))))));
                            var_21 = ((/* implicit */unsigned int) arr_20 [i_4] [3ULL] [i_7] [i_7]);
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_11) % (((/* implicit */int) (unsigned short)40992))))) * ((~(arr_15 [i_4] [(unsigned short)0] [(unsigned short)0]))))))));
                            var_23 = ((/* implicit */_Bool) min((var_23), (((((/* implicit */_Bool) arr_15 [5] [5] [5])) && (((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)65535)), (-2638585294723547525LL))))))));
                        }
                    } 
                } 
            } 
            arr_23 [i_5] [i_4] [11] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_13 [i_5]), ((unsigned short)47192))))) : (((((/* implicit */_Bool) arr_4 [(unsigned char)11])) ? (arr_18 [13] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4])))))))) < ((((_Bool)0) ? (17513507388339637788ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18328)))))));
            var_24 = ((/* implicit */unsigned int) min(((+((+(((/* implicit */int) var_5)))))), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [(unsigned short)12]))))) && (((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_4])))))));
        }
        var_25 = ((/* implicit */_Bool) arr_4 [i_4]);
    }
    var_26 += ((/* implicit */unsigned long long int) var_8);
}
