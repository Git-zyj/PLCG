/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96825
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
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_6))));
    var_19 |= ((/* implicit */_Bool) min((((max((var_4), (var_11))) ? (((/* implicit */int) ((unsigned short) -455060097))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)10984)))))), (((/* implicit */int) (unsigned short)41471))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_0] [i_0])))))) && (((/* implicit */_Bool) ((unsigned short) max((var_17), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) arr_1 [i_0] [(unsigned short)8]));
        var_21 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [(unsigned short)6] [i_0])))) >= (((/* implicit */int) ((((/* implicit */int) arr_1 [7] [i_0])) < (var_6)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)58625)) ? (((/* implicit */int) (unsigned short)2281)) : (((/* implicit */int) arr_0 [i_0] [i_0])))) != (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)57910)) < (((((/* implicit */_Bool) (unsigned short)62622)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)26842)))))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                {
                    arr_11 [i_1 - 1] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65533))))) >> (((((/* implicit */_Bool) ((arr_0 [(unsigned short)4] [(unsigned short)4]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_0 [i_1] [i_1 - 1])) : (((/* implicit */int) var_8))))));
                    var_22 = ((/* implicit */unsigned long long int) (_Bool)1);
                }
            } 
        } 
        arr_12 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [1ULL] [i_1]))))) ? (((((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1])) - (((((/* implicit */_Bool) -1797404317)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65509)))))) : (var_9)));
    }
    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        var_23 = ((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)0)));
        var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_14 [i_4] [i_4])) : (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((unsigned short) (_Bool)1)))))));
    }
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_16)) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)60754))) : (((/* implicit */int) var_8))))));
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            {
                var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned short)38694)) : (arr_18 [i_5])))) ? (((/* implicit */unsigned int) -962362586)) : (arr_20 [i_5] [i_5] [i_6])))) ? (((/* implicit */int) ((_Bool) ((int) var_13)))) : (((int) 459686370)));
                var_27 &= ((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_17 [i_5] [(_Bool)0])) + (((/* implicit */int) var_3)))));
                var_28 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_18 [i_5])))) ? (min((arr_18 [i_5]), (((/* implicit */int) arr_19 [i_5] [14])))) : (((((/* implicit */_Bool) arr_17 [i_5] [8])) ? (((/* implicit */int) var_11)) : (var_0)))))) ? (arr_20 [i_5] [i_6] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5] [12U])))));
                var_29 = ((int) ((((/* implicit */_Bool) arr_17 [i_5] [i_5])) ? (((((/* implicit */_Bool) var_5)) ? (arr_18 [i_5]) : (((/* implicit */int) (unsigned short)26)))) : (((((/* implicit */_Bool) (unsigned short)54810)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0))))));
            }
        } 
    } 
}
