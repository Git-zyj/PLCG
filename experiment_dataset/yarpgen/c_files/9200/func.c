/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9200
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
    var_11 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))), (min((4294967295U), (((/* implicit */unsigned int) var_4))))));
    var_12 = ((/* implicit */short) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_3))))))) > (min((((/* implicit */int) (unsigned short)65534)), ((-2147483647 - 1))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) arr_2 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65524))));
                    arr_8 [i_0] [i_0] [(unsigned short)13] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (arr_3 [i_1 + 1]) : (arr_3 [i_1 + 3])));
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_15 = arr_2 [i_3] [i_3];
        arr_11 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_10 [i_3]), (arr_10 [i_3])))) ? (((/* implicit */long long int) max(((~(var_0))), (max((arr_3 [i_3]), (arr_2 [i_3] [i_3])))))) : (((((/* implicit */_Bool) ((long long int) (short)-8267))) ? (((/* implicit */long long int) arr_3 [(unsigned char)9])) : (((((/* implicit */_Bool) arr_4 [i_3] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3]))) : (arr_0 [i_3])))))));
        var_16 = ((/* implicit */unsigned long long int) arr_10 [i_3]);
    }
    var_17 = ((/* implicit */unsigned int) ((((var_4) && (max((var_10), (var_1))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((_Bool) -8041703603321332398LL)))))));
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((var_1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))) << (((/* implicit */int) var_10))))) == (min((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (max((8041703603321332406LL), (((/* implicit */long long int) var_10))))))));
}
