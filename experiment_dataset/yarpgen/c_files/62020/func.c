/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62020
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
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        var_12 += ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1170296652404061123LL)) ? (((/* implicit */int) (unsigned short)65511)) : (1531809163)))))) ? (min(((+(var_6))), (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) arr_2 [6U]))));
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_0] [i_1]))) ? (arr_1 [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24821)))));
            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [10LL])))))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 3; i_3 < 23; i_3 += 4) 
                {
                    {
                        var_15 = ((/* implicit */int) ((((-1692468588787019204LL) + (9223372036854775807LL))) << ((((+(((/* implicit */int) arr_7 [i_0 - 2] [i_0] [i_0] [i_0])))) - (12358)))));
                        var_16 = ((/* implicit */signed char) (+(arr_2 [i_0])));
                    }
                } 
            } 
        }
        for (short i_4 = 1; i_4 < 22; i_4 += 4) 
        {
            var_17 = ((/* implicit */long long int) arr_2 [i_0]);
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (signed char)15))));
            var_19 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) 3572822067U)) == (((((/* implicit */_Bool) arr_15 [i_0] [21U] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) : (var_2)))))), (var_8)));
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    {
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_5]))))), (((/* implicit */unsigned int) arr_12 [i_4 - 1]))))) ^ (((var_5) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 666954864)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6])))))))))))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2662096561190095622LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (-2088974931165607282LL)))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-59)), (-8806904123835035420LL)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((short) 666954860))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
                        var_22 = ((/* implicit */unsigned long long int) (-(min((-2662096561190095627LL), (((/* implicit */long long int) arr_14 [i_0 + 1] [i_4 - 1] [i_4 + 2]))))));
                    }
                } 
            } 
            var_23 |= ((/* implicit */signed char) arr_21 [i_0 - 1] [i_4] [i_4] [(unsigned char)20]);
        }
        for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) arr_2 [i_7]))));
            var_25 = ((/* implicit */signed char) var_10);
            var_26 = ((/* implicit */unsigned char) arr_15 [i_0] [i_0 - 2] [i_0]);
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(2662096561190095641LL)))) ? (max((18446744073709551599ULL), (((/* implicit */unsigned long long int) 1572864U)))) : (((/* implicit */unsigned long long int) 807440330999519316LL))))) ? (((((/* implicit */_Bool) -1137675679383115891LL)) ? (arr_9 [i_0 - 1] [i_0] [i_0 - 2]) : (((/* implicit */unsigned long long int) var_9)))) : (max((((/* implicit */unsigned long long int) -5939737800135212883LL)), (((unsigned long long int) arr_24 [i_0 - 1] [i_7]))))));
        }
        var_28 = (+(((((/* implicit */_Bool) arr_22 [i_0 - 1] [i_0 - 2] [i_0 + 1])) ? (2662096561190095638LL) : (((/* implicit */long long int) arr_22 [i_0 - 1] [i_0 + 1] [i_0 - 2])))));
    }
    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_9))) ? ((~(6941888987367092599ULL))) : (((/* implicit */unsigned long long int) var_11))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((/* implicit */unsigned long long int) var_10)) : (var_5))))));
}
