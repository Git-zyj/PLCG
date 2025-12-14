/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7882
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
    var_14 = max((((/* implicit */unsigned long long int) min((var_1), (((7U) | (((/* implicit */unsigned int) 7))))))), (var_5));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) 11U);
        var_16 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned int) var_7)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_17 -= ((/* implicit */unsigned int) 1817524771);
        var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))))) | (((/* implicit */unsigned long long int) ((180186608) / (((/* implicit */int) (signed char)29)))))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) min((4294967286U), (((/* implicit */unsigned int) arr_0 [i_1]))))) <= (((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5750))))))) ? (((/* implicit */int) max(((unsigned short)16005), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_1])))))))) : (((/* implicit */int) (unsigned short)55266)))))));
        arr_5 [9U] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_3 [i_1] [i_1]), (((/* implicit */short) (signed char)-69))))) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [(short)0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) + (var_2)))) : (var_5)));
        arr_6 [i_1] [i_1] = ((((/* implicit */int) (unsigned char)245)) * ((+((+(((/* implicit */int) (signed char)46)))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_1 [i_2]))));
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2]))) : (691869466U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) > (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_15 [i_4])) : (((/* implicit */int) var_10)))))))));
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0)))))));
                        var_23 = ((/* implicit */long long int) (((-(arr_18 [i_4] [i_2]))) <= (2781676091308353531ULL)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            for (int i_7 = 1; i_7 < 13; i_7 += 3) 
            {
                {
                    var_24 += ((/* implicit */unsigned long long int) arr_10 [i_6]);
                    var_25 = ((/* implicit */_Bool) (unsigned short)55266);
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned long long int) arr_10 [i_2]);
    }
    var_27 = ((/* implicit */unsigned short) (short)-27797);
    var_28 |= ((/* implicit */_Bool) var_10);
}
