/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/668
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) <= (var_3)))) > (((1790574924) ^ (-1790574904)))))) : ((-(((/* implicit */int) (short)-1))))));
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) 596052765217122800ULL)) ? (((/* implicit */int) ((signed char) var_6))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -5770958401099047788LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_2))))))))))));
    var_14 = max((max((var_6), (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))))), (((/* implicit */unsigned int) var_4)));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_15 += ((/* implicit */_Bool) (-(((unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [(signed char)0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_1 [i_0] [13ULL]))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) max(((+((-(1790574903))))), (((/* implicit */int) (!((_Bool)1))))));
        var_16 = ((/* implicit */signed char) ((((_Bool) ((3980740156U) > (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (max((((/* implicit */unsigned long long int) var_7)), (((unsigned long long int) arr_2 [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (596052765217122796ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3)))))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) arr_4 [i_1] [i_1]);
        arr_7 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [i_1]) : (arr_6 [i_1]))))));
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) (~((((!(((/* implicit */_Bool) var_6)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-122)))) : (((/* implicit */int) var_7))))));
    }
    for (long long int i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_3 = 2; i_3 < 15; i_3 += 4) 
        {
            var_18 += arr_12 [i_2] [i_2] [i_3 - 1];
            arr_14 [i_3 + 2] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (short)20436)) : (arr_9 [i_2]))))));
            arr_15 [i_2] = ((/* implicit */signed char) ((var_8) ? (arr_2 [i_3 + 2] [i_3 + 3]) : (arr_2 [i_3 + 1] [i_3 - 2])));
        }
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (signed char i_5 = 2; i_5 < 15; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    {
                        arr_22 [i_2] [i_4] [i_5] [5ULL] [(unsigned short)0] = ((/* implicit */unsigned int) (-(((((/* implicit */int) ((_Bool) 1790574892))) + (((/* implicit */int) ((_Bool) (_Bool)0)))))));
                        var_19 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_11)))) ? (((((/* implicit */long long int) var_2)) / (arr_19 [i_2] [(short)12] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            for (int i_8 = 2; i_8 < 17; i_8 += 2) 
            {
                {
                    arr_27 [i_2] [0LL] [i_8 - 1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (short)-1)) ? (-315438752) : (((/* implicit */int) (_Bool)1))))));
                    arr_28 [(signed char)5] [i_7] [10LL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((short) -1790574904))))))));
                    arr_29 [(unsigned short)9] [i_7] [i_8 + 1] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((arr_10 [(signed char)17]), (((/* implicit */unsigned int) (_Bool)1)))) - (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11))) : (arr_11 [(signed char)11])));
                }
            } 
        } 
        var_20 += ((/* implicit */long long int) ((int) arr_21 [(short)16] [i_2] [(signed char)16] [(signed char)11]));
    }
}
