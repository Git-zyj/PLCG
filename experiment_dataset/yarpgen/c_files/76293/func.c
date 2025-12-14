/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76293
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_10 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0] [i_0])) <= (((/* implicit */int) (short)-5092))));
        var_11 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (_Bool)0)))) - (((/* implicit */int) var_8))));
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_5))));
    }
    for (long long int i_1 = 2; i_1 < 13; i_1 += 4) 
    {
        var_13 = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-5092)) + (2147483647))) << (((((((/* implicit */int) (short)-14779)) + (14791))) - (12)))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            var_14 = ((/* implicit */_Bool) (-(((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1] [i_2])) | (((/* implicit */int) var_9))))) - (min((((/* implicit */long long int) arr_7 [i_1])), (var_4)))))));
            var_15 = ((/* implicit */unsigned char) (short)-5092);
            arr_9 [i_1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_8 [i_1 - 1])))) && (((/* implicit */_Bool) arr_8 [i_1 + 4]))));
        }
        var_16 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) <= (var_4))))) >= (((((unsigned long long int) arr_2 [i_1 + 2])) / (((/* implicit */unsigned long long int) ((arr_4 [i_1]) & (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
        var_17 = ((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [(short)13])) || (((/* implicit */_Bool) 2410678567986974710LL))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_5 [i_3]) != (arr_5 [i_3]))))) <= (((((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [i_3])) + (2147483647))) << (((/* implicit */int) (signed char)0))))) ? (((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (arr_5 [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3])))))));
        var_19 = ((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) ((((/* implicit */int) (short)-2283)) < (((/* implicit */int) arr_7 [i_3]))))), (((((/* implicit */_Bool) arr_8 [i_3])) ? (var_1) : (arr_11 [i_3])))))));
        arr_13 [i_3] [(short)6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((4611686018427387903LL) - (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_3]))))) : (((/* implicit */int) (_Bool)1))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) min((-57422854497963163LL), (((/* implicit */long long int) var_8))))) || (((/* implicit */_Bool) (~(arr_6 [i_3] [i_3]))))))) << (((((((/* implicit */_Bool) arr_2 [i_3])) ? (((((/* implicit */_Bool) (short)-5092)) ? (arr_8 [i_3]) : (((/* implicit */long long int) -2056693577)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))))) - (2300687887652705040LL)))));
    }
    /* LoopSeq 3 */
    for (short i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_0 [i_4] [i_4])))) ^ (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5092))) : (((max((((/* implicit */unsigned long long int) (short)127)), (8235130726695374455ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_8)))))))))));
        var_22 |= ((/* implicit */unsigned short) (+(13776780505999451039ULL)));
        var_23 = (+(((arr_0 [15ULL] [i_4]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_4] [i_4])))));
    }
    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (short)5092))));
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((1437134042) - ((-(((/* implicit */int) (!(arr_0 [i_5] [i_5])))))))))));
        var_26 = ((/* implicit */short) ((((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (unsigned char)255)))) << (((((/* implicit */int) max((arr_3 [i_5]), (arr_3 [i_5])))) - (18820)))));
        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_16 [i_5] [i_5])) && (((/* implicit */_Bool) arr_16 [i_5] [i_5]))))))));
    }
    for (unsigned int i_6 = 4; i_6 < 16; i_6 += 4) 
    {
        var_28 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(4669963567710100577ULL))))));
        var_29 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) 13776780505999451039ULL)) && (min((var_6), (arr_0 [i_6] [i_6])))))));
    }
    var_30 = ((/* implicit */unsigned char) (signed char)-9);
    var_31 = ((/* implicit */long long int) ((unsigned char) (unsigned short)9213));
}
