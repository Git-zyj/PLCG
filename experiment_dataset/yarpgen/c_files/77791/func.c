/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77791
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((5486727725843115916LL) | (5486727725843115916LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) (short)21149)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_1 [i_0]))))) >= (((((/* implicit */_Bool) arr_1 [i_0])) ? (-5486727725843115916LL) : (5486727725843115916LL))))) ? (((/* implicit */int) ((((5486727725843115916LL) << (((5486727725843115915LL) - (5486727725843115915LL))))) <= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) : ((-(((/* implicit */int) arr_1 [i_0]))))));
    }
    for (unsigned char i_1 = 2; i_1 < 13; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    {
                        var_17 ^= ((/* implicit */unsigned short) arr_4 [i_3] [i_2]);
                        arr_14 [i_1] [i_1] [i_1] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_12 [i_1] [i_1 - 2] [i_1] [i_1 - 2] [i_1] [i_2 + 1])))) | (min((arr_12 [i_1] [i_1 - 1] [i_1] [i_1 + 1] [i_1] [i_2 - 1]), (((/* implicit */long long int) arr_8 [i_2 + 1] [i_1 - 1]))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */_Bool) ((((((unsigned long long int) arr_5 [i_1] [i_1])) | (((/* implicit */unsigned long long int) ((8295803828065637913LL) << (((((((/* implicit */int) arr_11 [i_1] [i_1])) + (93))) - (4)))))))) ^ (((/* implicit */unsigned long long int) ((unsigned int) 8069431945861989298ULL)))));
        var_19 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)42855)))) >= (min((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])), (arr_6 [i_1]))))))));
        var_20 = ((/* implicit */unsigned long long int) ((unsigned int) arr_9 [i_1] [i_1] [i_1]));
    }
    for (short i_5 = 3; i_5 < 9; i_5 += 1) 
    {
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(min((5486727725843115916LL), (((/* implicit */long long int) 2780541897U))))))) + (((unsigned long long int) ((444773055U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5] [i_5]))))))));
        arr_20 [i_5] = ((/* implicit */long long int) min((max((4294443008ULL), (((/* implicit */unsigned long long int) (unsigned short)22688)))), (((/* implicit */unsigned long long int) -5486727725843115943LL))));
        var_21 *= ((/* implicit */unsigned long long int) ((5486727725843115921LL) ^ ((+(arr_7 [(unsigned char)6] [i_5])))));
    }
    for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
    {
        var_22 = ((/* implicit */short) 5486727725843115926LL);
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 16; i_7 += 1) 
        {
            for (short i_8 = 0; i_8 < 18; i_8 += 1) 
            {
                {
                    var_23 -= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)4096))) - (11579517881701721ULL))));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(3640637921763468642LL)))), (16777215ULL)))) ? (((((/* implicit */_Bool) arr_24 [i_6] [i_8] [i_7 + 1])) ? (arr_24 [i_6] [i_7] [i_7 - 1]) : (((/* implicit */unsigned long long int) -5486727725843115922LL)))) : (((/* implicit */unsigned long long int) min(((-(5486727725843115912LL))), (((/* implicit */long long int) max((2147483647), (((/* implicit */int) arr_0 [i_6]))))))))));
                    arr_27 [i_6] [i_7] [i_8] [i_7] = ((/* implicit */unsigned int) (~(-5486727725843115914LL)));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */short) ((unsigned short) var_15));
}
