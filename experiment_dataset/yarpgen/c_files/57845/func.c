/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57845
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((long long int) ((var_12) > (((/* implicit */int) var_2))))))));
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */int) (_Bool)1)) >> ((((((-2147483647 - 1)) - (-2147483641))) + (19))))))))))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_1 [i_0 - 1]) : (((/* implicit */unsigned long long int) -613398162))))) ? (var_10) : (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0 - 1])))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        arr_10 [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) (short)-26571)) : (((int) (unsigned short)38771)))) : ((-(((/* implicit */int) (short)4095))))));
                        var_21 = ((/* implicit */_Bool) max((var_21), ((!(((/* implicit */_Bool) (unsigned short)56828))))));
                        arr_11 [i_0 + 1] [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((unsigned long long int) (signed char)124));
                        arr_12 [i_1] [i_1] [i_3] = (unsigned short)23939;
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        arr_17 [i_0 + 1] [i_1] [i_0 + 1] [i_4] = ((/* implicit */_Bool) (short)26291);
                        var_22 = ((/* implicit */long long int) var_7);
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_1] [i_1])) > (-1392964161)));
                        arr_18 [i_0 - 1] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 1392964160)))) ? (((((/* implicit */_Bool) (unsigned short)39964)) ? (var_14) : (((/* implicit */long long int) 1968108098)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63)))));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [i_4])) ? (((int) 11037680146138385300ULL)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_15 [i_0 + 1] [i_1] [i_2] [i_4])) != (var_10))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            {
                arr_23 [(_Bool)1] [i_5] = ((long long int) ((int) var_4));
                var_25 += ((/* implicit */_Bool) ((((var_0) + (9223372036854775807LL))) << (((((((/* implicit */int) ((short) ((((/* implicit */_Bool) 127LL)) ? (-1704208390) : (((/* implicit */int) (unsigned short)23937)))))) + (10297))) - (51)))));
            }
        } 
    } 
    var_26 = ((/* implicit */short) (-(min((((/* implicit */int) ((signed char) var_3))), (((((/* implicit */_Bool) var_0)) ? (var_12) : (var_12)))))));
    var_27 = ((/* implicit */int) var_4);
}
