/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86331
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (-(-110533984)));
            var_13 = ((/* implicit */unsigned short) (short)-7499);
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (signed char)126)) : ((-(((/* implicit */int) arr_0 [i_1]))))));
            var_14 = ((/* implicit */_Bool) (signed char)67);
        }
        for (short i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            var_15 = ((/* implicit */unsigned int) ((arr_3 [i_2]) <= (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))));
            arr_10 [i_0] [i_0] = (signed char)126;
        }
        for (int i_3 = 3; i_3 < 13; i_3 += 1) 
        {
            arr_13 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)11778)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_11 [i_3 - 2] [i_3 - 3] [i_0])))) | (((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0])))));
            var_16 = ((/* implicit */long long int) arr_12 [i_0]);
        }
        var_17 = ((/* implicit */unsigned char) ((long long int) arr_9 [i_0]));
    }
    for (int i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) arr_8 [i_4])) ? (((/* implicit */int) arr_7 [i_4])) : (((/* implicit */int) arr_1 [i_4] [i_4])))), ((-(((/* implicit */int) arr_11 [i_4] [i_4] [i_4])))))), (min((arr_3 [i_4]), (((((/* implicit */_Bool) arr_3 [i_4])) ? (-764917083) : (((/* implicit */int) arr_1 [i_4] [i_4]))))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4] [i_4] [i_4]))) | (((((/* implicit */_Bool) arr_2 [i_4])) ? (arr_15 [i_4]) : (((/* implicit */unsigned long long int) arr_8 [i_4]))))))) ? (((unsigned long long int) ((((/* implicit */_Bool) (short)20865)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4]))) : (arr_2 [i_4])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_4]))) ? (((/* implicit */int) arr_14 [i_4])) : (arr_3 [i_4]))))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                for (unsigned short i_7 = 2; i_7 < 11; i_7 += 4) 
                {
                    {
                        arr_25 [i_4] = ((/* implicit */signed char) arr_17 [i_4] [i_5] [i_5]);
                        arr_26 [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_0)) == (((/* implicit */int) ((short) var_10))))) ? (((/* implicit */unsigned long long int) min((((-4231769949517974000LL) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_6]))))), (((/* implicit */long long int) ((arr_3 [i_7 - 1]) - (((/* implicit */int) var_7)))))))) : (max((((arr_2 [i_4]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_4] [i_4]))))), (((unsigned long long int) arr_21 [i_4] [i_4]))))));
                        arr_27 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) (short)-20866)) & (((/* implicit */int) var_8))))) ? (max((((/* implicit */unsigned long long int) (signed char)-119)), (arr_23 [i_4] [i_5] [i_6] [i_6] [i_7 + 1] [i_7 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_4] [i_4] [i_4] [i_7 - 2]))))), (((/* implicit */unsigned long long int) ((unsigned char) arr_3 [i_4])))));
                        var_20 = ((/* implicit */signed char) arr_1 [i_4] [i_4]);
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned short) ((unsigned int) (-(((/* implicit */int) (unsigned char)36)))));
    var_22 = ((/* implicit */int) 2698549939U);
}
