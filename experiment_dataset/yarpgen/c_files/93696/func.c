/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93696
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (max((((((/* implicit */_Bool) 292562706)) ? (var_0) : (var_0))), (((/* implicit */long long int) var_14)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? ((-(((/* implicit */int) (short)-16981)))) : ((+(((/* implicit */int) var_15)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (!((!(var_12)))));
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((arr_1 [i_0] [i_0]) > (arr_1 [i_0] [i_0]))) ? (((/* implicit */int) (unsigned short)62295)) : (((/* implicit */int) (((~(arr_1 [i_0] [i_0]))) > (((/* implicit */unsigned long long int) min((var_17), (((/* implicit */long long int) arr_0 [4LL])))))))))))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) min((max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) 9042659844178644162LL)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))))));
        arr_3 [i_0] = ((/* implicit */long long int) var_4);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2590894591071179881ULL)) ? (292562703) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_1)) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_2] [i_3 - 1] [i_3] [i_3] [i_4]))));
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4081))) + (arr_10 [1ULL] [1ULL] [i_3 - 1] [i_3 - 1]))))));
                        arr_16 [i_4] [i_3 - 1] [i_2] [i_2] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_2] [i_2] [i_3 - 1] [i_4] [i_2]))));
                        var_24 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [(signed char)9] [i_3 - 1] [i_3 - 1])) ? (arr_9 [i_3] [i_3 - 1] [i_3]) : (((/* implicit */unsigned long long int) 3LL))));
                        arr_17 [i_2] = ((/* implicit */long long int) arr_1 [i_3 - 1] [i_3 - 1]);
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)46509)) + (((/* implicit */int) arr_0 [16LL])))))));
        var_26 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [i_1]))))));
    }
    var_27 = ((/* implicit */int) 13319200476774866094ULL);
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                {
                    arr_26 [i_5 - 1] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (802782592986214035LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-88))))));
                    var_28 = ((/* implicit */long long int) arr_9 [i_7] [i_6] [i_5 - 1]);
                    arr_27 [i_5] [i_5 - 1] [i_6] [i_7] = ((/* implicit */unsigned int) (+(min((arr_10 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]), (((/* implicit */unsigned long long int) (unsigned short)53739))))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) (((~(min((((/* implicit */unsigned long long int) 1091834071U)), (1099511627775ULL))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
}
