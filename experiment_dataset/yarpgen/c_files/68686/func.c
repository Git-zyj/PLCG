/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68686
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
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) max((((/* implicit */unsigned int) -1885521238)), (23U))))));
    var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 5646034991791018592ULL)) ? (4294967295U) : (var_5))))), (((((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) 16912284375346201763ULL);
        arr_3 [i_0] = ((/* implicit */unsigned char) ((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) != (0U)))), (((signed char) arr_1 [i_0]))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) var_9);
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) ((var_9) > (((/* implicit */unsigned long long int) var_8)))))))) | (((int) (unsigned short)0)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 14; i_1 += 3) /* same iter space */
    {
        var_19 = ((var_15) ^ (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-10451)) : (((/* implicit */int) (signed char)(-127 - 1))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) -5798395751884649121LL))))) <= (var_1)));
        /* LoopNest 3 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                for (int i_4 = 3; i_4 < 13; i_4 += 4) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) 0U))));
                        arr_16 [i_1] [i_2] [i_4] = ((((/* implicit */_Bool) ((signed char) var_6))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((0U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13))))));
                        var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_2 - 1] [i_1 - 3] [i_4 - 2])) ? (((/* implicit */unsigned int) -358932262)) : ((+(var_8)))));
                        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 2 */
    for (unsigned char i_5 = 3; i_5 < 16; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_6 = 2; i_6 < 15; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                {
                    arr_23 [i_5] = ((/* implicit */long long int) arr_19 [i_6] [i_7]);
                    var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)27))));
                    arr_24 [(unsigned char)10] [i_6 + 3] [i_7] = ((((/* implicit */int) ((((/* implicit */unsigned int) ((2008255895) | (1034501499)))) > (min((((/* implicit */unsigned int) 0)), (var_13)))))) != ((((+(((/* implicit */int) (signed char)113)))) % (((/* implicit */int) (unsigned char)9)))));
                }
            } 
        } 
        arr_25 [i_5] = ((/* implicit */signed char) max((((((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) 1685289562U)) : (13466057371483254892ULL))) << (((((/* implicit */int) (unsigned char)176)) / (672299140))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((3122110939U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))) ? (((/* implicit */int) (unsigned short)4)) : ((+(arr_20 [(signed char)4] [(signed char)4]))))))));
    }
    for (unsigned int i_8 = 3; i_8 < 16; i_8 += 4) 
    {
        arr_29 [i_8] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_3)), (1757258833U)));
        /* LoopSeq 1 */
        for (int i_9 = 3; i_9 < 16; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
            {
                for (signed char i_11 = 1; i_11 < 19; i_11 += 2) 
                {
                    {
                        arr_38 [i_8] [(short)1] [(short)1] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 709104421)) ^ (var_14)))) ? (max((var_2), (((/* implicit */int) arr_36 [i_8 - 2] [i_9 + 2])))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_36 [i_8 - 2] [i_9 - 3])), (var_0))))));
                        var_25 = ((/* implicit */signed char) min((var_13), (((/* implicit */unsigned int) (+((-(arr_32 [i_8] [i_9] [i_10] [i_10]))))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_12 = 1; i_12 < 19; i_12 += 4) 
            {
                var_26 ^= ((/* implicit */unsigned int) ((0U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11554)))));
                /* LoopNest 2 */
                for (unsigned int i_13 = 3; i_13 < 18; i_13 += 4) 
                {
                    for (signed char i_14 = 3; i_14 < 16; i_14 += 1) 
                    {
                        {
                            arr_48 [i_8] [i_8] [i_12] [i_8] [i_14] = ((/* implicit */signed char) ((((/* implicit */int) arr_28 [i_8] [i_8])) ^ (-1120253233)));
                            var_27 = ((/* implicit */unsigned int) max((var_27), (max((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))))), (var_14))), (((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-30)) % (((/* implicit */int) var_4))))) % (((var_5) % (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))))));
                        }
                    } 
                } 
                arr_49 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-107))) | (((((((/* implicit */unsigned long long int) var_8)) ^ (arr_33 [i_8] [i_9] [(unsigned char)3] [i_12]))) % (((/* implicit */unsigned long long int) (~(2561673074U))))))));
                arr_50 [i_8] [i_8] [i_8] = ((/* implicit */int) ((unsigned int) min((((/* implicit */int) var_0)), (((((/* implicit */int) (unsigned char)3)) ^ (var_15))))));
            }
            for (int i_15 = 3; i_15 < 18; i_15 += 2) 
            {
                /* LoopNest 2 */
                for (short i_16 = 1; i_16 < 19; i_16 += 1) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            arr_60 [(unsigned short)16] [(signed char)10] [i_15] [i_16] [i_8] = ((/* implicit */unsigned char) ((int) ((min((arr_44 [i_8]), (((/* implicit */unsigned int) var_6)))) != (((/* implicit */unsigned int) var_12)))));
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) arr_43 [i_8] [i_8] [i_15] [i_16] [i_15] [i_15]))));
                            var_29 += ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_42 [i_8] [i_8] [i_15] [i_15 + 2])) ^ (((/* implicit */int) var_0))))) & (((unsigned int) var_1))));
                            arr_61 [i_8] [(unsigned short)13] [i_8] [i_8 + 4] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)56478)) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) 1263460299)))))))) : ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)4)) : (arr_47 [i_8] [i_8] [i_8])))))));
                        }
                    } 
                } 
                arr_62 [i_8] = ((/* implicit */unsigned char) 14441742299453766298ULL);
                arr_63 [i_8] [i_8] [i_15 - 1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((arr_56 [i_9] [i_9] [i_9] [i_9] [i_8]), (((/* implicit */int) (unsigned short)36733))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)4447))) : (min((((/* implicit */unsigned int) var_15)), (arr_31 [(short)4] [i_15] [i_15]))))), (((/* implicit */unsigned int) ((_Bool) 0U)))));
            }
        }
        arr_64 [i_8] = ((/* implicit */int) (signed char)0);
        arr_65 [i_8] = ((/* implicit */int) ((((/* implicit */int) ((arr_33 [13U] [i_8 + 3] [i_8 - 3] [i_8]) > (((/* implicit */unsigned long long int) ((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))))))) != (min((arr_32 [i_8] [i_8] [i_8] [i_8]), (((/* implicit */int) ((unsigned char) arr_51 [13] [i_8])))))));
    }
}
