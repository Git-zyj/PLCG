/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75089
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
    var_12 = ((/* implicit */long long int) var_4);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((-(1645856186U))) + (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)185)) + (((/* implicit */int) (unsigned char)196)))))))) ? (((unsigned int) var_2)) : (max((((((/* implicit */_Bool) (unsigned char)168)) ? (56212619U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)185))))), (((/* implicit */unsigned int) (_Bool)1))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            arr_12 [i_2] [i_2] [i_2] [9ULL] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_1 [i_0] [(unsigned short)16]))))));
                            var_14 = ((/* implicit */signed char) var_9);
                            var_15 += ((/* implicit */unsigned int) var_8);
                            var_16 = ((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_2] [i_1] [i_0] [i_1]);
                            arr_13 [12U] [i_2] |= ((/* implicit */signed char) arr_11 [i_0] [i_1] [i_2] [i_3] [i_0]);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_17 = ((/* implicit */signed char) var_4);
                            var_18 = (signed char)46;
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            var_19 = ((((/* implicit */int) var_10)) > (((/* implicit */int) (unsigned char)66)));
                            arr_19 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) && (((/* implicit */_Bool) arr_17 [i_6] [i_6] [i_6] [i_6] [i_6]))));
                            var_20 += var_2;
                        }
                        for (int i_7 = 1; i_7 < 14; i_7 += 3) 
                        {
                            var_21 = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
                            var_22 |= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2 + 2] [i_0 - 2])) ? (2013937847U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2 - 1] [i_0 + 1])))))), (((((/* implicit */_Bool) arr_1 [i_2 + 2] [i_0 + 1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 + 2] [i_0 - 1])))))));
                            arr_22 [i_0] [i_0] [i_0] [i_3] [i_0] [(signed char)14] = ((/* implicit */int) ((((/* implicit */_Bool) max((4292870144ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) var_2)))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)207))))) : (arr_9 [i_0 - 1] [i_0 - 1] [i_0] [i_3] [i_3] [i_0 - 1])));
                            arr_23 [i_7] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) var_0);
                        }
                        arr_24 [i_3] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [3ULL]))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
    {
        var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))), (((((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))) | (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) -33554432)) : (arr_28 [22U])))))));
        var_24 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))), (max((((((/* implicit */_Bool) var_3)) ? (arr_27 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_8]))))), (((/* implicit */unsigned long long int) arr_28 [i_8]))))));
        var_25 += max((18446744069416681478ULL), (2409685124133946709ULL));
        var_26 = ((/* implicit */unsigned char) 2281029448U);
    }
    for (unsigned short i_9 = 3; i_9 < 18; i_9 += 1) 
    {
        var_27 = ((/* implicit */short) (-9223372036854775807LL - 1LL));
        arr_31 [i_9] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_9 - 1]))) != (var_9))))));
        arr_32 [i_9] = ((/* implicit */unsigned short) (+((-(max((((/* implicit */unsigned long long int) (signed char)-37)), (18446744069416681472ULL)))))));
    }
    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 3) 
    {
        var_28 |= ((/* implicit */unsigned short) 7534768913340013562ULL);
        var_29 -= ((/* implicit */short) (-(var_6)));
        arr_35 [i_10] = ((/* implicit */long long int) arr_27 [18U]);
    }
    var_30 |= ((/* implicit */unsigned short) 8545198715419784398LL);
    var_31 -= ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (unsigned char)127))))))));
}
