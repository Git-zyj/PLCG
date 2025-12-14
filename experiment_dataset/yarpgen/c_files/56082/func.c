/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56082
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((-(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) var_5))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_2 [i_0]))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 4; i_2 < 11; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        arr_12 [i_2] [i_2] [i_2 + 3] [i_3] [i_2 - 3] [i_2 + 3] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (-7573367343914323291LL)))));
                        arr_13 [i_0] [i_1] [i_0] [i_3] [i_2] = ((/* implicit */signed char) (~((~(((/* implicit */int) (signed char)(-127 - 1)))))));
                        arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
                    }
                } 
            } 
        } 
        arr_15 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_2))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
    {
        arr_20 [i_4] [i_4] = ((/* implicit */unsigned char) var_10);
        arr_21 [i_4] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) var_9))))));
        arr_22 [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)21746))));
        arr_23 [i_4] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)26))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_6 = 2; i_6 < 12; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_33 [i_7] [i_7] = ((/* implicit */long long int) var_6);
                    arr_34 [i_6] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)119))));
                }
            } 
        } 
        arr_35 [i_5] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
        arr_36 [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-4899)) && (((/* implicit */_Bool) (short)(-32767 - 1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_7 [i_5] [i_5] [i_5])));
    }
    var_17 = ((/* implicit */long long int) (((+(((((/* implicit */_Bool) (signed char)-113)) ? (-5255886979651451032LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-4))))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4546681758364566786LL)) ? (((/* implicit */int) (unsigned short)41715)) : (((/* implicit */int) (signed char)-105))))) : (70368207306752LL)))));
}
