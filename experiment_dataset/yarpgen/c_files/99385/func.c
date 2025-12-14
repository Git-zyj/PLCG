/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99385
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
    var_10 = (!(((/* implicit */_Bool) (~(((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))));
    var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) var_8)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) arr_2 [i_0 + 1] [i_0 - 1]);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0 - 3] [i_0 - 2]);
    }
    /* LoopSeq 4 */
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_13 = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) (_Bool)1)), (2646276155243122571ULL)))));
        var_14 = ((_Bool) max((arr_0 [i_1] [i_1]), (arr_0 [i_1] [3U])));
    }
    for (unsigned short i_2 = 1; i_2 < 16; i_2 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) var_2);
        /* LoopNest 3 */
        for (signed char i_3 = 1; i_3 < 14; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_19 [(_Bool)1] [(unsigned short)11] [i_3 + 2] [(signed char)9] [i_2] = ((/* implicit */signed char) max((max((var_3), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) arr_16 [i_2]))));
                        var_16 = ((/* implicit */_Bool) arr_9 [i_5]);
                    }
                } 
            } 
        } 
        arr_20 [i_2] = ((/* implicit */_Bool) ((unsigned long long int) max((arr_8 [i_2 + 2] [i_2]), (arr_8 [i_2] [i_2]))));
        var_17 = ((/* implicit */long long int) arr_0 [i_2 - 1] [i_2]);
    }
    for (signed char i_6 = 1; i_6 < 13; i_6 += 3) 
    {
        arr_23 [i_6] [i_6] = ((_Bool) (_Bool)1);
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned short i_8 = 3; i_8 < 15; i_8 += 1) 
            {
                for (unsigned int i_9 = 2; i_9 < 13; i_9 += 4) 
                {
                    {
                        arr_31 [i_6] [i_6] [5ULL] [i_6 + 2] = ((/* implicit */unsigned long long int) max((max((max(((unsigned short)55447), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) var_0)))), (((unsigned short) 4165073707U))));
                        arr_32 [i_6] [i_7] [i_6] [i_9] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) arr_5 [i_9 + 3])) == (((/* implicit */int) var_0)))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_10 = 3; i_10 < 12; i_10 += 3) 
        {
            for (signed char i_11 = 1; i_11 < 14; i_11 += 2) 
            {
                {
                    arr_39 [i_6] [i_6] [i_11] [7ULL] = ((/* implicit */unsigned short) (_Bool)1);
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31816))) + (var_3)))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_4))) : (((/* implicit */unsigned long long int) -4291066624064844023LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_6] [i_11 - 1]))) : (((unsigned long long int) ((_Bool) (_Bool)1)))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 3) 
                    {
                        arr_44 [i_6] = ((((/* implicit */_Bool) 0LL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_34 [i_6])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_6]))) % (var_3))) : (((/* implicit */unsigned long long int) arr_12 [i_6] [i_6])))) : (((unsigned long long int) min((((/* implicit */unsigned long long int) -3LL)), (17954070042361275340ULL)))));
                        var_19 = ((/* implicit */long long int) (-(((((/* implicit */int) max(((unsigned short)55460), (((/* implicit */unsigned short) (_Bool)1))))) + (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), ((unsigned short)55427))))))));
                        arr_45 [i_6] = var_4;
                        arr_46 [i_6] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_36 [i_6])), (((unsigned int) ((((/* implicit */_Bool) arr_35 [6U] [i_11] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_9))))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 2) 
                    {
                        arr_49 [(_Bool)1] [i_10 + 3] [i_6] [i_10 - 1] [i_10 - 1] = ((/* implicit */signed char) min((2822501045U), (((/* implicit */unsigned int) (unsigned short)3286))));
                        arr_50 [i_6 + 3] [i_6 + 3] [i_6] [i_6] [i_6] [8LL] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) >> (((var_8) - (850787005304966138ULL))))) >> (((var_9) - (3134016611U)))))), (((unsigned long long int) min((((/* implicit */unsigned long long int) (signed char)31)), (arr_41 [i_6] [i_10] [i_6] [i_13]))))));
                        arr_51 [i_11] [i_11] [i_6] [i_11] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) min((11250098019466887082ULL), (((/* implicit */unsigned long long int) 1922852686U))))))) + (min((min((((/* implicit */long long int) (_Bool)0)), (var_5))), (var_7)))));
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((14979569319416080532ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) << ((((-(2156218303U))) - (2138748990U)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_53 [i_6] [i_14] [(_Bool)1] [i_14 + 1] [i_11] [i_11] [i_6])))) : (((((/* implicit */_Bool) 1472466251U)) ? (-8100179107978653309LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10062)))))));
                            arr_54 [i_14 + 1] [i_14 + 1] [7U] [i_6] [i_14] = ((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) 2822501047U)), (arr_38 [i_10 - 1] [i_10 + 4] [i_10 + 4] [i_10 + 2])))));
                        }
                    }
                    arr_55 [i_6] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (max((min((((/* implicit */long long int) var_0)), (var_5))), (((/* implicit */long long int) ((_Bool) arr_35 [i_6] [i_6] [i_11 + 2])))))));
                }
            } 
        } 
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        var_21 += ((_Bool) min((arr_28 [8U] [i_15] [8U]), ((~(var_9)))));
        arr_60 [i_15] [i_15] = ((/* implicit */unsigned long long int) ((_Bool) var_2));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (((_Bool)1) ? (1472466250U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    }
}
