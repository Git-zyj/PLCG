/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7837
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_12 = ((/* implicit */int) max((531667819U), (3U)));
        var_13 += ((/* implicit */unsigned int) max((max((arr_0 [i_0]), (-1LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) -1553020841)) ? (3U) : (((/* implicit */unsigned int) 612910217)))))));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) -818817443)) ? (3U) : (4U))))) ? ((-((+(arr_6 [i_1] [i_1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_3 [i_1])), (arr_5 [i_1])))) ? (((((/* implicit */_Bool) -2147483631)) ? (arr_4 [i_1] [(signed char)5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(unsigned char)10]))))) : ((+(arr_4 [(unsigned short)8] [i_1]))))))));
        arr_7 [i_1] = max(((-(((/* implicit */int) ((unsigned char) arr_6 [i_1] [i_1]))))), ((+(((/* implicit */int) ((unsigned char) arr_4 [i_1] [i_1]))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_11))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_3])) ? (arr_4 [i_1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (min((arr_4 [i_2] [i_2]), (arr_4 [i_3] [i_3])))));
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_8)))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) 23U)) ? (((/* implicit */int) (unsigned char)112)) : (-2147483647)))) ? (((/* implicit */unsigned long long int) ((20U) % (var_5)))) : (min((arr_2 [i_2]), (18177970943921525245ULL)))))));
                    }
                } 
            } 
        } 
    }
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((var_4) % (var_5)))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_10)) : ((-(var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    var_18 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1379314647)))))) : (min((((/* implicit */long long int) 4294967279U)), (var_2)))))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)18)) ? (-2147483639) : (((/* implicit */int) (unsigned short)65535))));
}
