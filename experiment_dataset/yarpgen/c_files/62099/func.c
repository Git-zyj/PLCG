/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62099
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
    var_19 = ((/* implicit */unsigned long long int) var_14);
    var_20 = ((/* implicit */unsigned char) 16813806854392842331ULL);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (unsigned short i_3 = 2; i_3 < 9; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [i_1 + 1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_8 [7U] [i_3] [i_2] [i_3]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_3] [i_0 + 3]))) : ((-(9314089605834773070ULL)))));
                        var_21 = (i_3 % 2 == 0) ? (((/* implicit */int) ((5484900497152830502LL) / (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_17)) << (((((/* implicit */int) arr_8 [i_3] [i_3] [i_3] [i_0 - 1])) - (3192)))))) ? ((~(((/* implicit */int) (_Bool)0)))) : (1166438463))))))) : (((/* implicit */int) ((5484900497152830502LL) / (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_17)) << (((((((/* implicit */int) arr_8 [i_3] [i_3] [i_3] [i_0 - 1])) - (3192))) - (31954)))))) ? ((~(((/* implicit */int) (_Bool)0)))) : (1166438463)))))));
                        var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) : (9638234684585478482ULL))) << (((((/* implicit */int) max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 2])))) - (27928)))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) ((268435456) <= (((/* implicit */int) var_0))))) << (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_17)) ? (4152462451U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
                    }
                } 
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */signed char) var_16);
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 1; i_4 < 7; i_4 += 3) /* same iter space */
    {
        arr_15 [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4 + 2] [i_4 - 1]))));
        var_24 = ((/* implicit */short) arr_11 [i_4 + 2]);
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            for (unsigned char i_7 = 1; i_7 < 9; i_7 += 4) 
            {
                {
                    arr_26 [i_5] [i_5] = ((/* implicit */unsigned char) ((arr_16 [i_7 + 3]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1612771353)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_19 [i_5 - 1] [i_6])))))));
                    var_25 = ((/* implicit */int) arr_25 [i_6] [i_6] [i_5]);
                    arr_27 [i_5] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_5] [i_7 - 1] [i_7 + 3] [(unsigned short)8])) && (((/* implicit */_Bool) arr_17 [i_5]))))), ((~(((/* implicit */int) var_2))))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned short) (-(16777216U)));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_27 *= (-(((((/* implicit */_Bool) arr_28 [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [(unsigned char)10] [i_8] [i_8] [(unsigned char)10]))) : (((var_9) - (((/* implicit */unsigned long long int) arr_24 [i_8])))))));
        var_28 = ((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)105)));
        var_29 = ((/* implicit */unsigned char) ((int) (-(((/* implicit */int) arr_19 [i_8] [i_8])))));
        var_30 = ((/* implicit */unsigned long long int) (+(((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_30 [i_8] [i_8])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_8]))) : (arr_29 [i_8])))));
        var_31 = ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_2))) % (((/* implicit */int) arr_22 [i_8] [i_8] [(signed char)1] [i_8]))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)126)), (var_4))))) ^ (((((/* implicit */_Bool) var_17)) ? (var_3) : (((/* implicit */unsigned long long int) var_6)))))));
    }
    var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)59)) && (((/* implicit */_Bool) ((4294967295U) | (3728051974U)))))))));
}
