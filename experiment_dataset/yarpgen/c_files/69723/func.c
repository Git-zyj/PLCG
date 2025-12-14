/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69723
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_0), (var_11)))) ? (((/* implicit */unsigned long long int) (+(var_1)))) : (var_11)))) ? (((/* implicit */int) (unsigned short)65522)) : (((((/* implicit */int) min((((/* implicit */unsigned short) (short)-6232)), ((unsigned short)49699)))) << (((max((((/* implicit */unsigned long long int) (-2147483647 - 1))), (var_11))) - (18446744071562067960ULL)))))));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 8; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */_Bool) arr_2 [1] [1]);
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_2) : (((/* implicit */int) (unsigned short)65523))))), ((-(var_12)))))) ? (min((((((/* implicit */_Bool) (short)28707)) ? (((/* implicit */int) (unsigned short)14)) : (((/* implicit */int) (unsigned short)20)))), (((((/* implicit */_Bool) (unsigned short)65522)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0])))))) : (((/* implicit */int) max((((_Bool) (unsigned short)65519)), (((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_6))))))))))));
    }
    for (short i_1 = 2; i_1 < 8; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) var_5);
        arr_6 [(short)6] [i_1 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_0 [i_1] [i_1 + 1]))) && (((/* implicit */_Bool) ((arr_4 [i_1 - 2]) - (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 1]))))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 2; i_2 < 8; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 3; i_5 < 9; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)65516))));
                        arr_18 [i_2 + 1] [i_3] [i_4] [i_4] [i_4] [i_5] = ((/* implicit */short) ((unsigned short) ((arr_4 [7]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20))))));
                    }
                    for (unsigned short i_6 = 4; i_6 < 8; i_6 += 4) 
                    {
                        var_21 -= ((/* implicit */short) ((int) arr_13 [i_2 + 1] [i_2] [i_6 + 2]));
                        var_22 ^= (!(((/* implicit */_Bool) var_11)));
                        arr_22 [i_2] [i_4] = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
                    }
                    for (short i_7 = 2; i_7 < 7; i_7 += 3) 
                    {
                        var_23 = ((/* implicit */short) max((var_23), ((short)5521)));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned short)41))));
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)4095)) >= (arr_19 [i_7] [i_7] [i_7 - 2] [i_7 - 2] [i_7 - 2]))))));
                        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_10 [i_2 + 1] [i_7 + 3] [i_4])) > (((/* implicit */int) arr_8 [1ULL] [i_7 - 1]))))))))));
                    }
                    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2 + 1])) || (((/* implicit */_Bool) 16ULL))));
                    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) arr_1 [i_2 - 1])))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_7 [i_2 + 1])))))));
            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_2 + 2] [i_2 + 2] [i_2] [i_2])) ? (((/* implicit */long long int) arr_23 [i_8] [i_2 + 2] [i_2 + 1] [(short)2])) : (2147483647LL)));
        }
        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            var_31 ^= ((/* implicit */short) ((unsigned short) (-(((/* implicit */int) (_Bool)1)))));
            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((var_15) ? ((~(((/* implicit */int) (short)32757)))) : ((+(arr_13 [i_2] [5ULL] [i_9]))))))));
            var_33 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (short)23348)) > (((/* implicit */int) (signed char)28))))) << (((((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */int) arr_17 [i_2] [i_2])) : (((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [2LL])))) - (35502)))));
        }
    }
    var_34 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? ((-(((/* implicit */int) (unsigned short)6907)))) : ((-(((/* implicit */int) var_10))))));
    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65525))))), (((((/* implicit */_Bool) var_12)) ? (var_0) : (var_12)))))) ? (((/* implicit */int) ((short) var_9))) : (max((((/* implicit */int) (unsigned short)8)), ((-(((/* implicit */int) (unsigned short)6909))))))));
}
