/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82321
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!((_Bool)1))))))) * (min((max((var_6), (var_1))), (((/* implicit */unsigned long long int) ((int) var_1)))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        var_11 = ((/* implicit */long long int) arr_2 [i_0 - 2]);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((5946589945213847278LL), (-5946589945213847287LL)))) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1]))))))));
                var_13 = ((/* implicit */unsigned int) arr_1 [5ULL]);
                var_14 = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_7 [i_0 - 2] [i_0] [i_0] [i_0 - 2])))) * (((/* implicit */int) arr_7 [(short)1] [i_0] [i_0] [5]))));
                var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((max((35184372088831ULL), (((/* implicit */unsigned long long int) (unsigned short)16256)))), (arr_6 [i_0] [i_2]))))));
            }
            var_16 = (-(((((/* implicit */_Bool) (((_Bool)1) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) ((-5946589945213847265LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48326)))))) : ((+(arr_6 [i_0] [i_1]))))));
        }
    }
    for (int i_3 = 2; i_3 < 8; i_3 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) arr_3 [i_3]);
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 1) 
        {
            var_18 = min((max((min((18446744073709551614ULL), (arr_6 [i_3] [i_3]))), (((/* implicit */unsigned long long int) max((3149398742691075760LL), (((/* implicit */long long int) arr_2 [i_3]))))))), (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))) - (((unsigned long long int) arr_12 [1ULL] [i_4] [i_4])))));
            var_19 = ((/* implicit */int) var_4);
        }
        for (int i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            var_20 = ((/* implicit */signed char) (~(max((var_4), (((/* implicit */unsigned long long int) max((var_7), (var_7))))))));
            var_21 = ((/* implicit */_Bool) var_1);
        }
        var_22 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [6] [9]))) != (var_6)))) * (((((/* implicit */_Bool) arr_0 [i_3 - 2])) ? (arr_0 [i_3 + 2]) : (arr_0 [i_3 - 2])))));
        var_23 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((-3149398742691075768LL) <= (5946589945213847286LL))))) + (var_4)));
    }
    for (signed char i_6 = 2; i_6 < 16; i_6 += 4) 
    {
        var_24 &= (!(((/* implicit */_Bool) var_6)));
        var_25 = arr_19 [i_6];
    }
}
