/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72636
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            var_12 = ((/* implicit */unsigned short) ((15518544394798792836ULL) + ((-(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_1 [i_0])))))));
            var_13 = ((/* implicit */unsigned long long int) min((var_13), ((((-(0ULL))) / (((((/* implicit */_Bool) arr_0 [i_0 - 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_0 [i_1 + 2])))))));
            arr_6 [i_1 + 2] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) >> (((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24576))) : (arr_1 [i_0]))) - (12875499585188190747ULL)))))));
            arr_7 [i_0] = ((/* implicit */long long int) (~((((+(((/* implicit */int) var_8)))) ^ (((/* implicit */int) ((arr_5 [i_0] [i_1] [i_1 + 1]) > (((/* implicit */int) var_1)))))))));
            var_14 -= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((var_3) >> (((arr_4 [i_1]) - (2639395062037029592ULL)))))) ? (((((/* implicit */_Bool) (unsigned short)1)) ? (4503599627370495ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29783))))) : (((/* implicit */unsigned long long int) ((var_3) >> (((((/* implicit */int) arr_2 [i_1])) - (16514))))))))));
        }
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (-(arr_5 [i_0] [i_0] [i_0]))))));
        var_16 += ((/* implicit */unsigned short) ((arr_1 [i_0 + 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) min((((/* implicit */int) arr_2 [i_0])), (arr_5 [i_0] [i_0] [i_0]))))))));
    }
    for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 2) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_2 - 2]))))) != ((-(var_11)))));
        var_17 = ((/* implicit */int) var_11);
    }
    for (int i_3 = 1; i_3 < 20; i_3 += 2) 
    {
        var_18 = (((+(arr_15 [i_3 + 1] [i_3 + 1]))) > (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_0)))) ? ((-2147483647 - 1)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3] [i_3 - 1])))))))));
        var_19 |= ((/* implicit */unsigned long long int) (~((~(arr_14 [i_3])))));
    }
    /* LoopNest 2 */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        for (unsigned int i_5 = 2; i_5 < 21; i_5 += 2) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)57296)) >> (((var_5) - (1312485137U)))))) ^ (5935689524817951796LL)));
                arr_22 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) (unsigned short)17448))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (+(var_5)))) ? ((~(var_11))) : (min((((/* implicit */long long int) var_4)), (var_11)))))));
    var_22 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (-(4503599627370495ULL)))))) ? (((var_7) + (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57296)))));
    var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned long long int) 7U))) || (var_1))) ? (((/* implicit */unsigned long long int) (((_Bool)0) ? (((((/* implicit */_Bool) (short)0)) ? (var_0) : (var_0))) : (((/* implicit */int) (_Bool)1))))) : (2147483647ULL)));
}
