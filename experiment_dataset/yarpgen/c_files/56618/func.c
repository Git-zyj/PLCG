/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56618
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
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        arr_4 [i_0] [i_0 - 3] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (~(2335372644126150151ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (((var_18) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
        arr_5 [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) ((unsigned char) 16111371429583401476ULL));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 10; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == (17444159365351176074ULL))))) : (min((((/* implicit */unsigned long long int) var_12)), (var_17)))))) ? (var_8) : (((unsigned long long int) var_13))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
                        {
                            {
                                arr_18 [i_1] [i_2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((max((((/* implicit */unsigned long long int) var_11)), (var_5))) ^ (((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)95))))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_1), (var_12)))) << (((min((arr_11 [i_2] [i_5]), (var_6))) - (17389962660328789583ULL))))))));
                                var_21 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2335372644126150158ULL)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2 + 3] [i_2 + 3] [i_1] [i_2 + 2]))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_2 - 1] [i_4] [i_2 + 3])))));
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((arr_16 [i_4] [i_2] [i_4] [i_4] [i_4]) + (var_13)))))) ? (((max((var_7), (((/* implicit */unsigned long long int) var_1)))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_15 [i_5] [i_5] [i_3] [i_5] [i_1])) : (((/* implicit */int) var_14))))))) : (max((((2335372644126150142ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28))))), (((/* implicit */unsigned long long int) ((16111371429583401482ULL) != (16111371429583401482ULL)))))))))));
                                var_23 ^= ((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_17))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_12)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 *= var_8;
        var_25 = ((/* implicit */unsigned long long int) (unsigned char)68);
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    {
                        arr_25 [i_8] [i_7] [i_1] [i_1] = min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))), ((-(1023ULL))));
                        var_26 *= min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_6]))))), (((((/* implicit */_Bool) 2335372644126150158ULL)) ? (14745162304650652541ULL) : (2335372644126150133ULL))));
                        var_27 = min((((16111371429583401476ULL) | (16111371429583401487ULL))), (max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) | (arr_14 [i_8] [i_8]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
    {
        var_28 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))));
        var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) ((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)134)))))))));
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) != (var_7)));
        arr_28 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)117))) * (max((min((var_10), (((/* implicit */unsigned long long int) (unsigned char)26)))), (min((arr_19 [i_9]), (((/* implicit */unsigned long long int) var_1))))))));
    }
    var_31 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)229))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) & (var_9))))), (((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) var_15))))) ? (((var_18) + (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)181)))))));
    var_32 = (-(((((/* implicit */_Bool) min(((unsigned char)13), (var_2)))) ? (((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))))) : (max((((/* implicit */unsigned long long int) (unsigned char)26)), (2335372644126150139ULL))))));
}
