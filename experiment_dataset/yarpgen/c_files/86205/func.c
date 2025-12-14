/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86205
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_1))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 3620267688033485719ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))) : ((~(1429079137U)))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) arr_3 [i_0]))));
        var_16 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_0 [i_0]) : (arr_2 [i_0] [i_0]))));
        arr_5 [i_0] = ((/* implicit */short) ((((long long int) arr_2 [i_0] [i_0])) <= (((/* implicit */long long int) ((unsigned int) ((0) ^ (((/* implicit */int) var_13))))))));
        var_17 = ((/* implicit */int) min((var_17), (0)));
    }
    for (unsigned int i_1 = 2; i_1 < 22; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((arr_6 [i_1 - 1]), (((/* implicit */unsigned int) arr_11 [i_1] [i_1] [i_1 - 1] [i_3]))))), (((long long int) 4294967294U))));
                    arr_13 [i_3] = ((/* implicit */signed char) ((((arr_9 [i_1] [i_2]) << (((((/* implicit */int) var_14)) - (18510))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) min((5997991507262096008ULL), (((/* implicit */unsigned long long int) var_9))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (unsigned int i_5 = 3; i_5 < 23; i_5 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) ((unsigned char) ((((-14) % (-14))) + (13))));
                    var_20 = ((/* implicit */int) max((var_20), ((~(((/* implicit */int) max((((/* implicit */short) arr_17 [22] [i_4] [i_5 - 1] [i_5])), (var_1))))))));
                    arr_19 [i_1] [i_1] [i_4] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) + (arr_8 [i_5 - 3] [i_4 - 1]))) < (arr_8 [i_5 + 1] [i_4 - 1])));
                    var_21 = ((/* implicit */unsigned int) ((unsigned char) max((822960243198204254LL), (((/* implicit */long long int) arr_9 [i_1] [i_4 - 1])))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_6 = 2; i_6 < 17; i_6 += 3) /* same iter space */
    {
        var_22 = var_8;
        /* LoopNest 3 */
        for (unsigned int i_7 = 3; i_7 < 18; i_7 += 4) 
        {
            for (unsigned short i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                for (int i_9 = 2; i_9 < 16; i_9 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_10 = 0; i_10 < 19; i_10 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned short) 465797144U);
                            arr_33 [i_6 - 2] [i_6 - 2] [i_8] [i_6] [i_10] = ((/* implicit */long long int) ((unsigned short) arr_20 [i_6]));
                            var_24 += ((/* implicit */short) var_0);
                            var_25 = ((/* implicit */signed char) arr_23 [i_6 - 2] [i_6]);
                            arr_34 [i_6] [i_6] [i_6] [i_9] [2U] = ((/* implicit */unsigned int) 1695478224224135177ULL);
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 2) /* same iter space */
                        {
                            var_26 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) 2091746007))) > (((/* implicit */int) var_11))));
                            var_27 = ((/* implicit */unsigned char) 1429079131U);
                            var_28 = ((/* implicit */long long int) var_9);
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 2) /* same iter space */
                        {
                            arr_40 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((arr_11 [i_6] [i_6 - 2] [i_7 - 2] [i_12]) >> (((arr_11 [i_6] [i_6 - 2] [i_7 - 3] [i_6 - 2]) - (1881516174)))));
                            arr_41 [i_12] [i_6] [i_12] [i_12] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)45838))));
                        }
                        var_29 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)178)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-16852))) : (2961602073U)));
                        var_30 ^= ((/* implicit */long long int) ((int) 1200201708));
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) arr_20 [i_9]))));
                    }
                } 
            } 
        } 
        arr_42 [i_6] = ((/* implicit */_Bool) ((int) (_Bool)1));
        var_32 = ((((/* implicit */int) arr_16 [i_6 - 2] [i_6 - 1] [i_6 - 1])) << (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30984))) * (arr_32 [i_6] [i_6] [i_6 + 2] [i_6 + 2] [i_6] [i_6 + 2] [i_6]))) - (667056139U))));
        var_33 = ((/* implicit */signed char) ((unsigned long long int) arr_39 [i_6] [i_6] [i_6 - 1]));
    }
    for (unsigned short i_13 = 2; i_13 < 17; i_13 += 3) /* same iter space */
    {
        arr_46 [i_13] = ((/* implicit */unsigned long long int) ((int) 2136418103));
        var_34 += arr_9 [i_13 - 1] [i_13 - 1];
    }
}
