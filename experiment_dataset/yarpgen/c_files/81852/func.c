/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81852
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
    var_17 = ((/* implicit */int) var_12);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)158)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1294210554962716787ULL)) ? (arr_7 [(short)1] [(short)1] [(unsigned short)1] [i_2]) : (((/* implicit */int) (unsigned char)98))))) ? ((+(arr_8 [i_0] [i_0] [i_1] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)0))))))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_0] [i_1 + 2])) / (max((arr_2 [i_1 + 2] [i_1 - 1]), (-924459501)))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_3 = 3; i_3 < 18; i_3 += 4) 
    {
        var_20 = ((/* implicit */long long int) min((var_9), (((((/* implicit */int) arr_9 [i_3 - 2] [i_3 - 3])) <= (((/* implicit */int) arr_9 [i_3 - 1] [i_3 - 3]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                {
                    var_21 = ((/* implicit */_Bool) (+(((unsigned long long int) (+(arr_10 [i_4] [i_3]))))));
                    var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 213570663)))))));
                    arr_18 [i_3] [i_3] [10LL] [i_5] = ((/* implicit */int) min((min(((~(8618641458759948624LL))), (((/* implicit */long long int) (unsigned char)98)))), (((/* implicit */long long int) ((min((arr_12 [i_3]), (((/* implicit */unsigned int) (unsigned short)3)))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1)))))))))));
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((((/* implicit */long long int) ((arr_11 [i_5] [i_5]) + (var_10)))) - (-105457366623669248LL))) < (((/* implicit */long long int) (-((+(((/* implicit */int) arr_9 [i_3 + 1] [13]))))))))))));
                }
            } 
        } 
    }
    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
    {
        var_24 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-126))) >= (4294967295U))))));
        var_25 *= ((/* implicit */signed char) ((-2520930724681915154LL) - (2520930724681915148LL)));
        /* LoopNest 3 */
        for (unsigned int i_7 = 4; i_7 < 12; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 1; i_8 < 12; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    {
                        arr_30 [i_6] [i_7 - 3] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)138)) / ((+(((/* implicit */int) (unsigned char)249))))));
                        var_26 = ((/* implicit */long long int) min(((-(arr_22 [i_8 + 2] [i_6]))), ((+(arr_22 [i_6] [i_9])))));
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((min((arr_7 [i_8 + 2] [i_8 - 1] [i_8 + 2] [i_8 + 2]), (arr_7 [i_8 + 2] [i_8 - 1] [i_8 + 2] [i_8 + 1]))) >= ((+(arr_7 [i_8 + 1] [i_8 - 1] [i_8 + 2] [i_8 + 2]))))))));
                    }
                } 
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned long long int) var_4);
}
