/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94579
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
    var_19 = ((/* implicit */_Bool) (+(var_10)));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_5 [i_2] [i_2] [i_1] [i_0])) | (((/* implicit */int) arr_0 [i_1] [i_1])))) & (((/* implicit */int) max((arr_2 [i_0 + 2]), (arr_2 [i_0 - 1]))))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((arr_3 [i_0] [1ULL] [i_0]) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) arr_0 [i_1] [i_2])))))) ? (((/* implicit */int) arr_2 [i_0])) : (((((((/* implicit */int) (short)-5220)) / (((/* implicit */int) arr_4 [i_0] [i_1] [i_1] [i_2])))) + (((/* implicit */int) max((((/* implicit */short) arr_4 [i_1] [i_1] [i_1] [5LL])), (arr_2 [8U]))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_14);
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            {
                var_22 &= ((/* implicit */short) ((((max((((/* implicit */int) arr_7 [i_4])), (arr_10 [i_3] [i_4]))) >> (((/* implicit */int) ((((/* implicit */int) arr_7 [i_3])) > (arr_10 [i_3] [i_4])))))) << (((((((/* implicit */unsigned long long int) var_10)) ^ ((((_Bool)1) ? (((/* implicit */unsigned long long int) -1885666925)) : (17637881195903622471ULL))))) - (13252309471017976588ULL)))));
                arr_13 [i_4] [i_4] = ((/* implicit */unsigned short) max((min((max((((/* implicit */unsigned long long int) arr_10 [i_4] [i_4])), (arr_11 [i_4] [i_4]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_15))))))), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_18)))) != ((+(((/* implicit */int) arr_7 [12LL])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 1; i_5 < 11; i_5 += 4) 
    {
        for (signed char i_6 = 2; i_6 < 12; i_6 += 4) 
        {
            {
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_5) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)60))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_5 - 1])) ? (((/* implicit */int) arr_5 [6] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_5 [i_5] [i_6 + 1] [i_5] [(signed char)8])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_15 [i_5])), (arr_7 [i_5 + 2]))))) : (max(((+(arr_11 [i_6] [(unsigned char)2]))), (808862877805929164ULL)))));
                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (+(((/* implicit */int) arr_14 [i_6])))))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 2; i_7 < 10; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) min((var_1), (var_2))))))));
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -9208155946625079334LL)) * (min((15528032692269118950ULL), ((-(17637881195903622451ULL))))))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned char) min((((((/* implicit */int) ((unsigned char) arr_8 [i_5]))) - ((+(((/* implicit */int) (signed char)-83)))))), (min((((/* implicit */int) arr_15 [i_5 + 3])), ((-(((/* implicit */int) arr_17 [i_6]))))))));
                var_28 -= ((((/* implicit */int) arr_14 [i_5 - 1])) != (((((/* implicit */int) (unsigned char)6)) & (((/* implicit */int) (unsigned short)50378)))));
            }
        } 
    } 
}
