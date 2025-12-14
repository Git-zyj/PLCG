/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67541
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_8))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) ((unsigned char) var_8)))))) : (((((/* implicit */int) ((_Bool) -2074038616))) + (((((/* implicit */_Bool) var_8)) ? (2074038616) : (-2074038616)))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) (unsigned char)181);
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2074038609)) ? (-2074038632) : (((/* implicit */int) (signed char)12))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) max((((unsigned long long int) 8949800284205159667ULL)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)183)) : (-2074038617))))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 8; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) 2074038633);
        /* LoopNest 2 */
        for (unsigned int i_2 = 1; i_2 < 10; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((((_Bool) -2074038616)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_13))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (2074038616))))));
                    var_19 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)179)) && (((/* implicit */_Bool) 2074038636)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 1; i_4 < 9; i_4 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_5))));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) -2074038603)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_11)))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) <= (var_3)));
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 2147483647)))))));
                        }
                        /* LoopSeq 4 */
                        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */_Bool) (signed char)6);
                            var_25 = ((/* implicit */unsigned int) ((_Bool) var_14));
                        }
                        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
                        {
                            arr_23 [i_8] [i_2 - 1] [i_4] [i_2] [i_2 - 1] = ((/* implicit */unsigned long long int) ((var_13) / (((/* implicit */long long int) ((unsigned int) -412377746)))));
                            arr_24 [i_2] = ((/* implicit */short) ((_Bool) -2147483647));
                        }
                        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned char) (short)-26816);
                            arr_29 [i_2] [i_2] [6LL] [i_4 + 1] [i_3] [0LL] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_0)))));
                            var_27 = ((/* implicit */unsigned int) (short)26816);
                        }
                        for (long long int i_10 = 3; i_10 < 10; i_10 += 3) 
                        {
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) -64)) ? (((/* implicit */int) (_Bool)1)) : (699524825))))));
                            arr_32 [i_1 + 2] [i_1] [i_1] [i_2] [i_1] [i_1] [i_1 + 2] = ((/* implicit */unsigned int) var_11);
                        }
                    }
                    for (unsigned int i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        var_29 = ((((/* implicit */int) (unsigned short)12000)) & (((/* implicit */int) (unsigned char)155)));
                        var_30 = ((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) var_14))));
                        arr_37 [i_11] [i_2] [i_3 - 1] [(short)2] [i_11] &= ((/* implicit */signed char) ((var_3) >> (((((var_10) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1)))) - (45287)))));
                        var_31 = ((/* implicit */short) var_9);
                    }
                }
            } 
        } 
        var_32 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (3724815150U))) > (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
    }
    /* LoopSeq 2 */
    for (int i_12 = 0; i_12 < 15; i_12 += 3) /* same iter space */
    {
        var_33 -= ((/* implicit */short) min((((((/* implicit */unsigned long long int) var_11)) * (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)(-32767 - 1))) * (((/* implicit */int) (unsigned char)100)))))));
        var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (unsigned char)242))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_6))) : (11340935205897626046ULL)));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 15; i_13 += 3) /* same iter space */
    {
        arr_43 [i_13] = ((/* implicit */unsigned char) (unsigned short)6821);
        var_35 = ((/* implicit */int) ((unsigned char) 864154912U));
    }
}
