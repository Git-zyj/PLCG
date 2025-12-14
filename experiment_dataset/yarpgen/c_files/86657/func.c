/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86657
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned char) ((max((((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) arr_6 [i_0] [i_0] [2LL] [i_0]))))), ((~(((/* implicit */int) var_5)))))) | (((/* implicit */int) var_14))));
                        arr_12 [i_1] [i_1] = ((/* implicit */unsigned short) min((max((((/* implicit */int) max((arr_0 [i_3]), (((/* implicit */unsigned short) var_2))))), ((+(((/* implicit */int) (unsigned short)65521)))))), (((((/* implicit */int) var_8)) / (((/* implicit */int) arr_9 [i_2 - 2] [i_2 + 4] [i_2 - 2]))))));
                    }
                } 
            } 
        } 
        var_16 ^= (unsigned char)17;
        var_17 *= ((/* implicit */unsigned char) var_12);
        var_18 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((arr_4 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_4 [18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) ^ (112))))))));
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) var_5))))) / (max((((/* implicit */long long int) var_11)), (var_9)))))) ? ((-(((var_11) | (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)238))) != ((+(arr_5 [i_0])))))))));
    }
    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
    {
        arr_16 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (arr_4 [i_4]))) - (((/* implicit */unsigned long long int) arr_5 [i_4])))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_1)) ? (612355626314691648LL) : (((/* implicit */long long int) arr_8 [i_4] [i_4] [i_4])))), (((/* implicit */long long int) arr_0 [(signed char)11])))))));
        var_20 *= (unsigned char)99;
    }
    var_21 = ((/* implicit */long long int) (_Bool)1);
    var_22 = ((/* implicit */signed char) var_11);
}
