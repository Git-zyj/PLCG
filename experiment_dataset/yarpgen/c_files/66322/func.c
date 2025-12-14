/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66322
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
    var_10 = ((/* implicit */unsigned char) ((long long int) var_0));
    var_11 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) var_9))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 -= (short)-19119;
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (short)12673))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 1; i_4 < 21; i_4 += 4) 
                        {
                            var_14 = ((/* implicit */long long int) (short)-12673);
                            var_15 *= max((((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_2 + 3] [i_2 - 2] [i_4 + 2] [i_2 + 2] [i_4])) ? (((/* implicit */int) arr_6 [i_3 + 1] [i_4 + 2] [i_4] [i_3 + 1])) : (arr_11 [i_3] [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1] [i_3]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2 + 3] [i_2 - 3] [i_2 + 3] [i_3 + 1] [i_3 + 1] [i_3 + 1]))))));
                            arr_12 [i_2 + 3] [4ULL] [i_2] [i_4] [i_2 + 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-4088919022362906881LL), (((/* implicit */long long int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))) : (arr_9 [(signed char)2] [i_0] [i_2] [i_2] [i_1] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) ((var_1) < (((/* implicit */long long int) ((/* implicit */int) var_0)))))) < (arr_0 [i_2])))) : ((~(((/* implicit */int) arr_2 [i_2 - 1]))))));
                        }
                        arr_13 [i_0] [i_1] [i_2 + 3] [i_0] = ((/* implicit */unsigned short) arr_0 [i_2]);
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */unsigned long long int) var_0);
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        arr_17 [i_5] [i_5] = ((/* implicit */short) -2115368891);
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                {
                    var_16 = (+(((/* implicit */int) (short)12673)));
                    var_17 = ((/* implicit */unsigned short) arr_8 [i_5] [i_6] [i_5] [i_5] [i_6] [i_7]);
                    arr_24 [i_5] [i_6] = ((/* implicit */signed char) (short)12672);
                }
            } 
        } 
        arr_25 [i_5] = ((/* implicit */_Bool) arr_1 [i_5] [i_5]);
    }
    for (unsigned long long int i_8 = 2; i_8 < 21; i_8 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) <= (((((/* implicit */_Bool) arr_26 [i_8] [i_8])) ? (var_8) : (((/* implicit */unsigned long long int) -2160054071466275934LL)))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)69))) == (var_1)))) < ((+(((/* implicit */int) arr_28 [i_8] [i_8]))))))) : (((((/* implicit */int) (short)16043)) - (((/* implicit */int) var_4))))));
        var_19 = ((/* implicit */int) ((((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_7)))) : ((~(var_5))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
    }
    var_20 = ((/* implicit */short) (-(var_2)));
}
