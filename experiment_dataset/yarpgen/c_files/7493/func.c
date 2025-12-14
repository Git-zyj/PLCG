/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7493
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned short)27715), (((/* implicit */unsigned short) min((((/* implicit */short) (signed char)-1)), ((short)-32763))))))) ^ (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 2 */
        for (long long int i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            var_17 = ((int) 5659846356859997489ULL);
            var_18 = ((/* implicit */unsigned short) min((((signed char) arr_4 [i_0 + 3] [i_0 + 2])), (((signed char) arr_1 [i_0 + 2]))));
            var_19 = ((/* implicit */unsigned int) ((long long int) (-(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_2 [i_1] [i_0])))))));
            var_20 = ((((/* implicit */_Bool) (signed char)-105)) ? (((int) (short)0)) : (((/* implicit */int) (_Bool)1)));
            var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) (short)-13713))));
        }
        for (signed char i_2 = 2; i_2 < 14; i_2 += 4) 
        {
            var_22 = ((/* implicit */short) max(((+(((/* implicit */int) (signed char)116)))), (((/* implicit */int) arr_7 [3]))));
            var_23 &= ((/* implicit */unsigned char) ((max((2412891132556795754LL), (((/* implicit */long long int) (_Bool)1)))) % (((/* implicit */long long int) (~(53560468U))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_3 = 1; i_3 < 14; i_3 += 4) 
        {
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_3 + 1] [i_3 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_3 - 1] [i_3 + 1]))) : (5439876290444851794LL)));
            var_25 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-89)))));
        }
        var_26 = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) (signed char)123)), (27ULL)))));
    }
    for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned short) max((((unsigned int) -112603531)), (((/* implicit */unsigned int) arr_7 [i_4 + 2]))));
        /* LoopNest 3 */
        for (unsigned int i_5 = 3; i_5 < 14; i_5 += 4) 
        {
            for (unsigned int i_6 = 2; i_6 < 12; i_6 += 2) 
            {
                for (long long int i_7 = 1; i_7 < 11; i_7 += 4) 
                {
                    {
                        var_28 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                        var_29 -= ((/* implicit */_Bool) arr_3 [i_6] [i_7] [i_6 + 2]);
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (unsigned char)209))));
                        var_31 &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_15 [i_4] [i_6 + 3] [i_7])) ? (arr_15 [i_6] [0U] [0U]) : (arr_15 [i_6] [i_5 - 3] [i_7]))), (arr_12 [i_6 - 1] [i_7])));
                    }
                } 
            } 
        } 
    }
    var_32 = ((/* implicit */int) var_3);
    /* LoopSeq 3 */
    for (int i_8 = 1; i_8 < 14; i_8 += 1) /* same iter space */
    {
        var_33 = ((/* implicit */_Bool) min(((short)-13713), (((/* implicit */short) (unsigned char)24))));
        var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_26 [i_8]))) ? (((/* implicit */long long int) ((int) (_Bool)1))) : (max((((long long int) 37ULL)), (((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_8])) < (((/* implicit */int) arr_26 [i_8])))))))));
        var_35 = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) 620358491361588055LL))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_8])))))));
        var_36 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */short) arr_25 [i_8]))));
    }
    for (int i_9 = 1; i_9 < 14; i_9 += 1) /* same iter space */
    {
        var_37 += max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_29 [i_9 + 1]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) arr_25 [(unsigned char)0]))))) ? (((unsigned long long int) 9223372036854775807LL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_27 [i_9 + 3]), (((/* implicit */unsigned short) arr_26 [(short)12])))))))));
        /* LoopSeq 1 */
        for (long long int i_10 = 2; i_10 < 15; i_10 += 4) 
        {
            var_38 = ((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)191)) - (((/* implicit */int) arr_29 [i_9 + 4]))))));
            var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_10 - 1])) ? (((((/* implicit */_Bool) ((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)150)))))) ? (((unsigned long long int) arr_25 [i_10])) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_24 [i_10]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1707206181U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_32 [i_9]))))) ? (((((/* implicit */_Bool) 3097321613710377730ULL)) ? (18446744073709551555ULL) : (74ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)230)) >> (((((/* implicit */int) (short)-11000)) + (11015))))))))));
        }
    }
    for (int i_11 = 1; i_11 < 14; i_11 += 1) /* same iter space */
    {
        var_40 -= ((/* implicit */long long int) ((short) ((int) arr_27 [i_11 + 3])));
        var_41 -= ((/* implicit */long long int) ((signed char) ((unsigned short) ((((/* implicit */_Bool) 1982991938U)) ? (((/* implicit */int) (short)13713)) : (((/* implicit */int) (short)-8747))))));
    }
}
