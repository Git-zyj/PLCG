/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85237
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (signed char)-1))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) % (17717494062715631844ULL)))));
        var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (-4021713034136244937LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) (unsigned char)64))));
        var_18 = ((/* implicit */signed char) var_10);
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    {
                        arr_15 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_15))));
                        var_19 = ((/* implicit */unsigned short) ((((int) ((18446744073709551615ULL) / (((/* implicit */unsigned long long int) var_5))))) + (((/* implicit */int) (signed char)-8))));
                        arr_16 [i_2] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_11)))) ? (((/* implicit */long long int) -166868257)) : (max((((/* implicit */long long int) (unsigned char)169)), (-3653128368019088898LL))))))));
                        arr_17 [i_2] [i_1] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) max(((signed char)-7), ((signed char)8)))) >> (((((/* implicit */int) ((unsigned short) var_15))) - (38969)))))), (var_12)));
                        var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) var_10))));
                    }
                } 
            } 
        } 
        var_21 ^= max((((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) (signed char)25))))) | (max((var_14), (((/* implicit */long long int) arr_11 [i_1] [i_1])))))), (-3066823433820377750LL));
        var_22 = ((/* implicit */long long int) ((unsigned char) 8833630882447406924LL));
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-31)) & (((/* implicit */int) (signed char)7))));
            var_24 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1])))))) ? (max((var_12), (((/* implicit */long long int) arr_2 [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_8 [i_1] [i_5]) > (((/* implicit */unsigned long long int) arr_9 [i_1])))))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)9)))));
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)33)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1] [i_1])) / (((/* implicit */int) (unsigned char)33))))) : (arr_10 [i_6] [i_1] [i_6] [i_6])));
            var_26 = ((/* implicit */unsigned long long int) arr_9 [i_1]);
            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_9 [i_6])))) ? (((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1] [i_6])))));
        }
    }
    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-6)) ? (1ULL) : (((/* implicit */unsigned long long int) 536838144))));
}
