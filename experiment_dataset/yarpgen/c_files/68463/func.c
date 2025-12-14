/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68463
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
    var_11 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (var_2)))) ? (((((/* implicit */int) (signed char)-71)) - (220212781))) : (var_6)))) ? (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (unsigned short)9092)))) : (((/* implicit */int) min((var_1), (var_1))))));
    var_12 += var_2;
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        var_13 *= ((/* implicit */short) ((((((/* implicit */int) arr_1 [i_0])) ^ (((((/* implicit */int) var_3)) * (((/* implicit */int) var_10)))))) ^ ((-(min((var_4), (((/* implicit */int) (unsigned short)56442))))))));
        var_14 += arr_3 [i_0];
        var_15 = ((/* implicit */unsigned short) (signed char)(-127 - 1));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (signed char i_4 = 4; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_15 [i_2] [i_3] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_4 [i_0 - 2] [i_0 - 2]), (((/* implicit */signed char) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_9)))))))) ? (((/* implicit */int) min((arr_9 [i_0 - 2] [i_4 - 3] [i_4] [i_2]), (((/* implicit */unsigned short) var_1))))) : (((((/* implicit */_Bool) ((var_6) - (((/* implicit */int) var_1))))) ? (((((/* implicit */int) arr_10 [i_0 + 1] [i_1] [i_2] [i_2] [(short)1] [(signed char)16])) / (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_3] [i_4 - 3] [i_3]))))));
                                var_16 = (-(-1432269564));
                                var_17 = ((/* implicit */int) ((signed char) ((((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */int) var_8)))) / ((+(var_2))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_2] |= ((/* implicit */signed char) ((min((((/* implicit */int) var_8)), (((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) (signed char)126)))))) <= ((((!(((/* implicit */_Bool) var_8)))) ? (min((((/* implicit */int) var_1)), (var_2))) : (var_5)))));
                }
            } 
        } 
    }
    for (int i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-78)) : (((/* implicit */int) arr_17 [i_5] [i_5])))) | (((((/* implicit */int) var_1)) % (((/* implicit */int) var_1))))))) ? ((~((~(((/* implicit */int) var_3)))))) : (((/* implicit */int) var_1))));
        var_19 = ((/* implicit */long long int) var_6);
    }
    var_20 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) * (((((/* implicit */_Bool) var_1)) ? (((int) var_0)) : (((var_7) ? (-1567643676) : (((/* implicit */int) var_1))))))));
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) min((2147483647), (((/* implicit */int) (_Bool)1))))) * (((((/* implicit */_Bool) ((var_2) / (((/* implicit */int) arr_18 [i_6]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) arr_20 [(unsigned short)15])))))) : (((unsigned int) (_Bool)1))))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_22 [i_7] [i_7 - 1])) <= (((((/* implicit */_Bool) max((arr_21 [(_Bool)1]), (((/* implicit */int) (signed char)24))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) max((var_0), (var_8))))))));
                var_23 &= ((/* implicit */_Bool) (+(((((((((/* implicit */int) var_3)) + (2147483647))) << (((((/* implicit */int) var_10)) - (1))))) % (((/* implicit */int) var_10))))));
            }
        } 
    } 
}
