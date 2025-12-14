/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81244
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
    var_17 = ((/* implicit */signed char) var_15);
    var_18 = ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)127)))))));
                arr_6 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [i_0])) ? (18446744073709551585ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)68))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)73))))))))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_20 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)4)) ? (((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_0] [i_0])) : (((/* implicit */int) (signed char)-41))))), (45ULL))) - (var_3)));
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 23; i_3 += 3) 
                    {
                        for (short i_4 = 4; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_2] = ((/* implicit */short) min((((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)(-127 - 1))))), (((((/* implicit */int) (short)0)) >> (((arr_15 [i_3 - 2] [i_3] [i_3] [i_3] [i_3 + 1] [i_3] [i_3 - 2]) - (11614063266636054334ULL)))))));
                                arr_18 [i_4] [i_4] [i_4 - 3] [i_4] [i_4 - 1] [i_4] = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) arr_12 [i_0 - 1] [i_4 - 2] [13ULL] [i_4] [i_4] [i_4])) > (((/* implicit */int) (short)-7039)))));
                                var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) (short)-16))))) ? (((/* implicit */int) ((signed char) arr_15 [i_1] [i_4] [i_3] [i_0] [i_1] [i_0] [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) 278746187162855199ULL))))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) | (((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-20))))))));
                                var_22 = max(((-(15718462936389258698ULL))), (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 - 1] [i_1] [i_3 - 1] [i_4 - 4]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-74))));
                    arr_22 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_5] [i_0 - 1] [i_0])))))));
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_14 [i_0 - 1] [i_0 + 1] [i_0 - 1]), (arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1])))) <= (((((/* implicit */int) (signed char)103)) / (((/* implicit */int) arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
                }
                for (signed char i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    var_25 = ((/* implicit */unsigned char) (-(2708317915357467612ULL)));
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-49)) ? (((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_0]))))) == (((((/* implicit */_Bool) 6285357126627131786ULL)) ? (3ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_0])))))));
                }
            }
        } 
    } 
}
