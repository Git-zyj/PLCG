/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97662
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */_Bool) (~(var_0)));
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
            {
                var_14 &= ((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [(_Bool)1] [(signed char)17] [i_2]))));
                var_15 ^= ((/* implicit */unsigned char) ((unsigned long long int) arr_3 [i_0] [i_0] [i_0]));
            }
            for (int i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
            {
                var_16 = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-92)) < (arr_10 [i_1]))) ? (((/* implicit */unsigned int) -1)) : (((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0]) : (var_9)))));
                var_17 = ((/* implicit */int) var_0);
                var_18 = ((/* implicit */long long int) ((arr_1 [i_1]) + (((/* implicit */unsigned int) -6))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 3; i_6 < 21; i_6 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_4])) ? (arr_15 [i_6 - 3]) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [(unsigned short)6] [i_1])))))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_7 [i_0] [21] [i_4] [i_6 - 2])) <= (((long long int) (signed char)4))));
                            var_21 = ((/* implicit */unsigned char) 8);
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [(unsigned char)22])) ? (621720791U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)31477))))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_1] [i_4] [2ULL])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))))));
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_1] [i_1] [i_4])) % (((/* implicit */int) arr_13 [i_1] [i_1] [i_4]))));
                var_24 = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_12)))));
            }
            /* LoopNest 3 */
            for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    for (int i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        {
                            arr_27 [i_0] [(signed char)12] [i_0] [i_0] [i_0] [i_0] [i_8] &= ((/* implicit */unsigned long long int) arr_8 [i_9] [i_8] [i_7]);
                            arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_11)) ? (5283462428167547792LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                        }
                    } 
                } 
            } 
        }
        arr_29 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-50)))))));
    }
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)31477))))) ? (max((var_2), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) (-(var_4))))))) ? (((((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned int) 1))))) ^ (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) max((var_12), (var_12)))), (var_8)))))));
    /* LoopSeq 1 */
    for (signed char i_10 = 3; i_10 < 21; i_10 += 3) 
    {
        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) var_11))));
        /* LoopSeq 1 */
        for (short i_11 = 0; i_11 < 22; i_11 += 3) 
        {
            var_27 = ((/* implicit */unsigned char) max((arr_1 [i_11]), (((/* implicit */unsigned int) ((signed char) ((_Bool) arr_34 [i_10] [(_Bool)1]))))));
            arr_36 [i_10] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) min((((/* implicit */int) arr_13 [i_10] [i_10] [i_10])), (arr_10 [i_10])))) ? (((/* implicit */unsigned long long int) arr_31 [i_10])) : (((1ULL) / (((/* implicit */unsigned long long int) -752505424))))))));
            /* LoopNest 3 */
            for (long long int i_12 = 3; i_12 < 20; i_12 += 3) 
            {
                for (unsigned char i_13 = 0; i_13 < 22; i_13 += 3) 
                {
                    for (unsigned short i_14 = 1; i_14 < 21; i_14 += 2) 
                    {
                        {
                            var_28 = (((-(((/* implicit */int) arr_19 [i_10 - 2] [i_10] [i_10] [i_12 - 3])))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_10])) || (((/* implicit */_Bool) arr_10 [i_10]))))));
                            var_29 = arr_33 [i_10];
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) arr_9 [i_10] [i_10] [i_10])), (3009707861079007253LL))) <= (((/* implicit */long long int) ((/* implicit */int) var_11)))))), (((((/* implicit */unsigned long long int) arr_35 [i_10] [i_10] [i_10])) % (min((((/* implicit */unsigned long long int) var_9)), (var_6)))))));
        }
    }
    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */long long int) min((-2147483639), ((~(((/* implicit */int) var_11))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) var_0)) : (var_6)))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-4194))))))))));
}
