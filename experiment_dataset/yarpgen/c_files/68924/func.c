/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68924
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
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_13)) / (((/* implicit */int) var_5))))))) ? (((((((/* implicit */int) var_8)) ^ (var_7))) >> (((((((/* implicit */int) var_1)) | (((/* implicit */int) var_3)))) - (105))))) : (((((((((/* implicit */int) var_13)) * (((/* implicit */int) var_3)))) + (2147483647))) << ((((-(var_16))) - (2659263399333698230LL))))))))));
    var_19 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_15)), (var_1)))) ? ((~(var_14))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) && (((/* implicit */_Bool) var_11)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [i_0])))) && (((/* implicit */_Bool) min((((/* implicit */long long int) arr_5 [i_0] [(unsigned char)14])), (var_14))))))))));
                    var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) arr_1 [i_2])) && (((/* implicit */_Bool) var_15)))))))) % ((~(max((((/* implicit */unsigned long long int) var_8)), (var_12)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_12)) ? (arr_6 [i_0] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) <= (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                        var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) / (((((/* implicit */long long int) ((/* implicit */int) var_11))) ^ (arr_1 [i_3 + 1])))));
                        arr_10 [i_0] [i_0] [i_3 - 1] [i_2] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) ((arr_4 [6ULL] [i_2] [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))))));
                        var_24 = ((arr_6 [i_3 - 1] [i_1] [(short)1]) ^ (arr_6 [i_3 - 1] [i_3] [i_2]));
                    }
                    for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_7 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4])), (((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (arr_12 [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */int) var_2))))) ^ ((~(arr_1 [i_0]))))))))));
                        arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2199023255551ULL)) || (((/* implicit */_Bool) -4252571553245289579LL))));
                        var_26 = ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) : (426496259038481628ULL)));
                        var_27 = ((/* implicit */int) (-(((18020247814671069988ULL) | (426496259038481627ULL)))));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */_Bool) (~(max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))), (((/* implicit */int) max((var_15), (((/* implicit */signed char) var_4)))))))));
    var_29 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_2))))));
}
