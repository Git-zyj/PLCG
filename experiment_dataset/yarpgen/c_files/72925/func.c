/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72925
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
    var_16 = ((/* implicit */_Bool) var_11);
    /* LoopSeq 4 */
    for (long long int i_0 = 4; i_0 < 8; i_0 += 2) 
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)25292))))) == ((~(arr_1 [i_0 - 1])))));
        arr_3 [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)37073)) ? (max((((/* implicit */long long int) (_Bool)0)), (6594008580975639714LL))) : (((long long int) (-(6594008580975639723LL))))));
        arr_4 [i_0 - 4] = ((/* implicit */unsigned short) arr_2 [i_0]);
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1]))) * (var_3)))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((-6594008580975639724LL) - (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))))) : (arr_6 [i_1])));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9075173508000782452LL)) ? (((/* implicit */long long int) 189629312)) : (-1LL)));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_19 = ((/* implicit */_Bool) min((189629323), (((/* implicit */int) (_Bool)1))));
        var_20 = ((/* implicit */int) ((((_Bool) arr_10 [i_2])) ? ((+(((((/* implicit */_Bool) var_13)) ? (5539070240501867639LL) : (((/* implicit */long long int) arr_10 [i_2])))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */unsigned int) 768301380)) : (var_3))))));
    }
    for (unsigned int i_3 = 3; i_3 < 22; i_3 += 1) 
    {
        arr_15 [i_3] = ((/* implicit */long long int) ((int) ((arr_13 [i_3 + 1]) - (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3]))))));
        arr_16 [i_3] [i_3] = ((/* implicit */short) max((arr_12 [i_3]), (((_Bool) ((((/* implicit */_Bool) 16600427180203670246ULL)) ? (((/* implicit */unsigned long long int) 1189715965)) : (14957230374455738378ULL))))));
        /* LoopNest 3 */
        for (unsigned short i_4 = 1; i_4 < 21; i_4 += 3) 
        {
            for (unsigned int i_5 = 2; i_5 < 20; i_5 += 1) 
            {
                for (long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    {
                        arr_24 [i_3] [i_4] [i_3] = (_Bool)1;
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) min((var_2), (((/* implicit */unsigned long long int) (-(var_4)))))))));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_14 [i_3])))) - (((((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(_Bool)1] [i_3]))))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_3] [i_4 + 1] [i_5] [i_6])) + (((/* implicit */int) arr_12 [i_3])))))))));
                    }
                } 
            } 
        } 
        arr_25 [i_3] = ((/* implicit */_Bool) max(((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)2))) : (-5539070240501867639LL))), (((/* implicit */long long int) 1189715965))));
    }
    var_23 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (min((((/* implicit */long long int) var_1)), (var_10))))), (((/* implicit */long long int) min((((/* implicit */int) min((var_13), (var_13)))), (max((var_7), (((/* implicit */int) (signed char)2)))))))));
    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (-7977377812098529929LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */long long int) var_7)) - (var_4))))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    var_25 = ((/* implicit */long long int) max((var_25), (var_4)));
}
