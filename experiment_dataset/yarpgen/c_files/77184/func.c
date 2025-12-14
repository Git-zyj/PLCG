/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77184
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
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) (unsigned char)235);
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_1 [(_Bool)1])))) ? (arr_1 [(unsigned short)2]) : (arr_1 [16ULL])))) && (((/* implicit */_Bool) (unsigned char)20)))))));
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_20 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 456509146U))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((1881590401) <= (((/* implicit */int) (unsigned char)235)))))));
                    var_22 *= ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) >= (arr_10 [i_3]))))) + (((arr_3 [i_3]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))))))) << ((((+(((/* implicit */int) min(((unsigned char)235), (arr_7 [i_3] [(_Bool)1] [i_3])))))) - (24)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        arr_13 [i_4] = ((/* implicit */unsigned short) var_8);
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 9; i_5 += 4) 
        {
            for (signed char i_6 = 2; i_6 < 8; i_6 += 2) 
            {
                {
                    var_23 = ((/* implicit */short) var_4);
                    var_24 = ((/* implicit */signed char) var_5);
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned short) var_16);
    }
    var_26 = ((/* implicit */long long int) (-(min((((/* implicit */unsigned long long int) ((var_14) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_0)))))));
}
