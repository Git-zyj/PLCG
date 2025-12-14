/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69982
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32764))) / (arr_6 [11ULL] [(signed char)7])))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)21007)) ? (((/* implicit */int) (short)-18288)) : (((/* implicit */int) (short)-32740))))), ((+(arr_2 [i_1])))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-23438)), ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32763))))) : (arr_6 [i_1] [i_1])))));
                var_19 |= ((/* implicit */long long int) arr_4 [i_0]);
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((unsigned short) (-(((/* implicit */int) (short)32754))))))));
                var_21 -= ((/* implicit */signed char) max((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)4286)) : (33554431)))))), (arr_2 [(unsigned short)6])));
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_2 + 3] [i_1] [(short)15]))))) ? ((+(281474976710655ULL))) : (((/* implicit */unsigned long long int) arr_2 [(unsigned short)7]))));
                    var_23 = ((/* implicit */unsigned int) max((var_23), ((+(1235397386U)))));
                    var_24 = var_1;
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    for (long long int i_6 = 1; i_6 < 19; i_6 += 3) 
                    {
                        {
                            arr_19 [i_3] [i_3] [6U] [i_6 - 1] [i_6] [i_5] = ((/* implicit */long long int) 18446462598732840961ULL);
                            var_25 += ((/* implicit */unsigned long long int) arr_14 [i_4 - 1] [i_4 + 1] [i_6 - 1]);
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_3] [i_6 + 1])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) max(((unsigned short)31), (((/* implicit */unsigned short) arr_18 [(short)0] [i_5] [i_4] [5ULL])))))))) : (var_1)));
                            arr_20 [i_3] [i_5] [(unsigned short)10] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5] [i_5]))) + (2047U))))) ? ((~((+(((/* implicit */int) arr_17 [i_3] [i_4 - 2] [i_5] [i_6])))))) : (((/* implicit */int) (signed char)127))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned long long int) max((var_27), (var_4)));
                var_28 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_10 [i_4 - 1] [i_4 - 2]))))))));
                arr_21 [(short)2] |= ((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_4 - 1] [i_4]))));
            }
        } 
    } 
    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)32764)), (((((/* implicit */_Bool) 281474976710662ULL)) ? (389161841U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65024)))))))) ? (var_6) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_17))))))))))));
    var_30 = ((/* implicit */unsigned short) min((281474976710648ULL), (((/* implicit */unsigned long long int) var_12))));
    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) var_14))));
}
