/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79013
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */int) var_4);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) var_1);
                                var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_12 [i_1 + 2] [i_3] [i_3] [i_3] [i_4] [i_4] [i_4]))))), (var_0)));
                            }
                        } 
                    } 
                    var_17 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)55524)) && (((/* implicit */_Bool) arr_2 [i_1 - 1] [i_2 - 1]))))), (var_2));
                    var_18 = ((/* implicit */unsigned short) (-(min(((+(((/* implicit */int) (unsigned char)238)))), (((/* implicit */int) var_11))))));
                }
            } 
        } 
        arr_13 [2] = ((/* implicit */unsigned long long int) arr_9 [i_0] [(signed char)0] [i_0] [i_0]);
        var_19 ^= (unsigned short)12002;
        arr_14 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (+(1041094457)))) && (((/* implicit */_Bool) min((33554432U), (((/* implicit */unsigned int) arr_4 [i_0] [i_0]))))))) ? (var_6) : (min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
    }
    for (short i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_16 [22] [i_5])))) ? ((+(((/* implicit */int) arr_17 [20LL] [20LL])))) : ((+(((/* implicit */int) arr_15 [i_5]))))));
        var_21 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) ((unsigned char) 4294967295U))))) << (((((/* implicit */int) var_11)) - (19339)))));
        var_22 = max((arr_16 [i_5] [i_5]), (2147483647ULL));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
    {
        var_23 = ((/* implicit */unsigned long long int) arr_11 [i_6] [i_6] [i_6] [i_6] [i_6] [10ULL]);
        var_24 = ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) < (var_13));
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) 
    {
        arr_22 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) -1770769503)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-1))));
        arr_23 [i_7] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (short)12204))) + (((((/* implicit */int) var_9)) / (((/* implicit */int) (unsigned short)44148))))));
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_15 [i_7]))));
    }
    /* LoopNest 2 */
    for (unsigned short i_8 = 0; i_8 < 23; i_8 += 1) 
    {
        for (int i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            {
                arr_30 [15LL] [i_9] [15LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)20)), (1770769502)))) ? (((((/* implicit */_Bool) arr_28 [i_8] [i_9])) ? (arr_24 [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) < (arr_25 [(unsigned char)22] [i_9])))))));
                /* LoopNest 2 */
                for (unsigned short i_10 = 1; i_10 < 21; i_10 += 3) 
                {
                    for (unsigned int i_11 = 0; i_11 < 23; i_11 += 4) 
                    {
                        {
                            arr_36 [i_8] [i_8] [i_8] = ((/* implicit */signed char) ((var_3) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_10 + 2] [i_10 + 1] [i_10])) << (((((/* implicit */int) arr_27 [i_10 + 2] [i_10 - 1] [i_10])) - (62)))))) ? (((max((969159042U), (((/* implicit */unsigned int) var_11)))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) != (var_8))))))) : (var_2))))));
                        }
                    } 
                } 
                arr_37 [i_8] [i_9] &= ((/* implicit */short) ((((var_13) < (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_8]))))) ? (((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_11)), (var_13)))) | (var_6))) : (((/* implicit */unsigned long long int) var_2))));
            }
        } 
    } 
}
