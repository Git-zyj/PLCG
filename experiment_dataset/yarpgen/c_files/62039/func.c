/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62039
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) 253969419877894195ULL))));
        /* LoopNest 3 */
        for (long long int i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((_Bool) ((long long int) arr_1 [i_1 - 1]))))));
                        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))) : ((((((_Bool)1) ? (-5LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-52))))) * (((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)52)), (arr_3 [i_1 - 2] [i_3])))))))))));
                        var_13 *= ((/* implicit */_Bool) (signed char)51);
                        var_14 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_9 [i_2] [i_2] [i_1])), ((unsigned short)4)))) ? (13LL) : (3828901856822702966LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)18)))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] |= ((/* implicit */unsigned char) max((9223372036854775807LL), (((/* implicit */long long int) max((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_15 *= ((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-1)), (max((1573271298), (((/* implicit */int) (signed char)127))))));
        arr_14 [i_0] |= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_3 [6] [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)48045)) : (arr_10 [i_0] [(signed char)8] [10]))) : (((/* implicit */int) (signed char)-127))))), ((~(max((((/* implicit */unsigned int) arr_1 [i_0])), (0U)))))));
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        arr_17 [i_4] [i_4] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-19)) ? (arr_16 [i_4] [5]) : (arr_16 [i_4] [i_4])));
        var_16 ^= ((/* implicit */int) ((unsigned char) arr_16 [i_4] [i_4]));
    }
    var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? ((-(((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_3)))))) : (max((var_1), (((/* implicit */int) max(((signed char)1), ((signed char)-1))))))));
}
